package magiSOC.perips.Ethernet.AxiStream4Mac

import magiSOC.perips.Ethernet.AxiLite4Mac.{MacRxAligner, MacRxBuffer, MacRxChecker, MacRxFilter, MacRxPreamble, MacTxAligner, MacTxBuffer, MacTxCrc, MacTxHeader, MacTxPadder, PhyIo, PhyParameter}
import spinal.core._
import spinal.lib._

case class MacEthConfig(
                            phy: PhyParameter,
                            streamDataWidth: Int,
                            phyBufferByteSize: BigInt
                        ){
    val phyAvailabilityWidth: Int = log2Up((phyBufferByteSize * 8 / 32) + 1)
}


case class StreamMac(config: MacEthConfig, phyClockDomain: ClockDomain) extends Component {
    val io = new Bundle{
        val rx_stream = master(Stream(Bits(config.streamDataWidth bits)))
        val tx_stream = slave(Stream(Bits(config.streamDataWidth bits)))

        val rx_flush = in(Bool())
        val tx_flush = in(Bool())

        val tx_availability = out(UInt(config.phyAvailabilityWidth bits))

        val rx_clear = in(Bool())
        val rx_drops = out(UInt(8 bits))
        val rx_errors = out(UInt(8 bits))
        val rx_filter_enable = in(Bool())
        val rx_mac_address = in(Bits(48 bits))


        val intr = out(Bool())

        val phy = master(PhyIo(config.phy))

        val sim = new Bundle {
            val drop = out Bool()
            val error = out Bool()
            val commit = out Bool()
        }
    }
    noIoPrefix()
    val ctrlClockDomain = this.clockDomain

    val rxReset = ResetCtrl.asyncAssertSyncDeassert(
        input = ClockDomain.current.isResetActive || io.rx_flush,
        clockDomain = phyClockDomain
    )
    val rxClockDomain: ClockDomain = phyClockDomain.copy(reset = rxReset)

    val txReset = ResetCtrl.asyncAssertSyncDeassert(
        input = ClockDomain.current.isResetActive || io.tx_flush,
        clockDomain = phyClockDomain
    )
    val txClockDomain: ClockDomain = phyClockDomain.copy(reset = txReset)

    val rxFrontend = rxClockDomain on new Area{
        val preamble = MacRxPreamble(dataWidth = config.phy.rxDataWidth)
        preamble.io.input << io.phy.rx.queue(32)

        val filter = MacRxFilter(dataWidth = config.phy.rxDataWidth)
        filter.io.input << preamble.io.output.queue(32)
        filter.io.enable := BufferCC(io.rx_filter_enable)
        filter.io.desc_address := BufferCC(io.rx_mac_address)

        val checker = MacRxChecker(dataWidth = config.phy.rxDataWidth)
        checker.io.input << filter.io.output.queue(32)

        val buffer = MacRxBuffer(
            pushCd = rxClockDomain,
            popCd = ctrlClockDomain.copy(softReset = io.rx_flush),
            pushWidth = config.phy.rxDataWidth,
            popWidth = config.streamDataWidth,
            byteSize = config.phyBufferByteSize
        )
        buffer.io.push.stream << checker.io.output
        buffer.io.push.drop <> io.sim.drop
        buffer.io.push.commit <> io.sim.commit
        buffer.io.push.error <> io.sim.error
    }

    val rxBackend = new Area{
        rxFrontend.buffer.io.pop.stream >> io.rx_stream
        io.rx_clear <> rxFrontend.buffer.io.pop.stats.clear
        io.rx_errors <> rxFrontend.buffer.io.pop.stats.errors
        io.rx_drops <> rxFrontend.buffer.io.pop.stats.drops
    }

    val txFrontend = new Area{
        val buffer: MacTxBuffer = MacTxBuffer(
            pushCd = ctrlClockDomain.copy(softReset = io.tx_flush),
            popCd = txClockDomain,
            pushWidth = config.streamDataWidth,
            popWidth = config.phy.txDataWidth,
            byteSize = config.phyBufferByteSize
        )
        buffer.io.push.stream << io.tx_stream
        buffer.io.push.availability <> io.tx_availability
    }

    val txBackend = txClockDomain on new Area{

        val padder = MacTxPadder(dataWidth = config.phy.txDataWidth)
        padder.io.input << txFrontend.buffer.io.pop.stream.queue(32)

        val crc = MacTxCrc(dataWidth = config.phy.txDataWidth)
        crc.io.input << padder.io.output.queue(32)

        val header = MacTxHeader(dataWidth = config.phy.txDataWidth)
        header.io.input << crc.io.output.queue(32)
        io.phy.tx << header.io.output

        txFrontend.buffer.io.pop.redo := False
        txFrontend.buffer.io.pop.commit := RegNext(header.io.output.lastFire) init(False)
    }
    io.intr := RegNext(io.rx_stream.valid) init(False)
}

//object StreamMacBench{
//    def main(args: Array[String]): Unit = {
//        def phyIoConfig: PhyParameter = PhyParameter(8, 8)
//        val mac_ethernet_config = MacEthConfig(phyIoConfig, 32, 1 KiB)
//        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
//            targetDirectory = "rtl/StreamMac").generateSystemVerilog(new StreamMac(mac_ethernet_config)).printPruned()
//    }
//}
