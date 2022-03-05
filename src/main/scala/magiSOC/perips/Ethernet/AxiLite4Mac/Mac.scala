package magiSOC.perips.Ethernet.AxiLite4Mac

import magiSOC.perips.Ethernet.{PhyRx, PhyTx}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory

case class MacEthParameter(phy: PhyParameter,
                           rxDataWidth : Int,
                           txDataWidth : Int,
                           rxBufferByteSize : BigInt,
                           txBufferByteSize : BigInt){
    val txAvailabilityWidth: Int = log2Up((txBufferByteSize * 8 / 32) + 1)
}

case class MacEthCtrl(p : MacEthParameter) extends Bundle{
    val rx = new Bundle {
        val stream = master(Stream(Bits(p.rxDataWidth bits)))
        val flush = in Bool()
        val alignerEnable = in Bool()
        val stats = new Bundle {
            val clear = in Bool()
            val drops, errors = out UInt (8 bits)
        }
    }
    val tx = new Bundle {
        val stream = slave(Stream(Bits(p.txDataWidth bits)))
        val availability = out UInt(p.txAvailabilityWidth bits)
        val flush = in Bool()
        val alignerEnable = in Bool()
    }
    val pending = out(Bool())
    pending := RegNext(rx.stream.valid) init(False)

    def driveFrom(bus: BusSlaveFactory, baseAddress: Int = 0x00): Area = new Area{
        bus.driveAndRead(tx.flush, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "MacEth Tx Buffer Flush Register. (1 bits)") init(True)
        bus.read(tx.stream.ready, address = baseAddress + 0x00, bitOffset = 1,
            documentation = "MacEth Tx Stream Ready Indicator. (1 bits)")
        bus.driveAndRead(tx.alignerEnable, address = baseAddress + 0x00, bitOffset = 2,
            documentation = "MacEth Tx Aligner Enable Register. (1 bits)") init(False)

        bus.driveAndRead(rx.flush, address = baseAddress + 0x00, bitOffset = 4,
            documentation = "MacEth Rx Buffer Flush Register. (1 bits)") init(True)
        bus.read(rx.stream.valid, address = baseAddress + 0x00, bitOffset = 5,
            documentation = "MacEth Rx Stream Ready Indicator. (1 bits)")
        bus.driveAndRead(rx.alignerEnable, address = baseAddress + 0x00, bitOffset = 6,
            documentation = "MacEth Rx Aligner Enable Register. (1 bits)") init(False)

        tx.stream << bus.createAndDriveFlow(Bits(p.txDataWidth bits), baseAddress + 0x10, bitOffset = 0).toStream
        bus.read(tx.availability, address = baseAddress + 0x14,  bitOffset = 0,
            documentation = "MacEth Tx Buffer Residual Space Indicator. (1 bits)")

        rx.stream.ready := False
        bus.onRead(address = baseAddress + 0x20, documentation = "MacEth Rx Stream Force Read Ready."){rx.stream.ready := True}
        bus.read(rx.stream.payload, address = baseAddress + 0x20, bitOffset = 0,
            documentation = s"MacEth Rx Stream Payload (${rx.stream.payload.getWidth} bits).")

        rx.stats.clear := False
        bus.onRead(address = baseAddress + 0x2C, documentation = "MacEth Force Rx stats Clear."){rx.stats.clear := True}
        bus.read(rx.stats.errors, address = baseAddress + 0x2C, bitOffset = 0,
            documentation = s"MacEth Rx Aligner Enable Register. (${rx.stats.errors.getWidth} bits)")
        bus.read(rx.stats.drops, address = baseAddress + 0x2C, bitOffset = 8,
            documentation = s"MacEth Rx stats Drops Indicator (${rx.stats.drops.getWidth} bits).")

    }
}

case class PhyParameter(txDataWidth : Int,
                        rxDataWidth : Int)

case class PhyIo(p : PhyParameter) extends Bundle with IMasterSlave {
    val rx = Stream(Fragment(PhyRx(p.rxDataWidth)))
    val tx = Stream(Fragment(PhyTx(p.txDataWidth)))
    val colision = Bool()
    val busy = Bool()

    override def asMaster(): Unit = {
        master(tx)
        slave(rx)
        in(colision)
        in(busy)
    }
}

case class MacEth(p : MacEthParameter,
                  txCd : ClockDomain,
                  rxCd : ClockDomain) extends Component{
    val io = new Bundle {
        val phy = master(PhyIo(p.phy))
        val ctrl = MacEthCtrl(p)

        val sim = new Bundle {
            val drop = out Bool()
            val error = out Bool()
            val commit = out Bool()
        }
    }

    val ctrlClockDomain = this.clockDomain

    val rxReset = ResetCtrl.asyncAssertSyncDeassert(
        input = ClockDomain.current.isResetActive || io.ctrl.rx.flush,
        clockDomain = rxCd
    )
    val rxClockDomain: ClockDomain = rxCd.copy(reset = rxReset)


    val txReset = ResetCtrl.asyncAssertSyncDeassert(
        input = ClockDomain.current.isResetActive || io.ctrl.tx.flush,
        clockDomain = txCd
    )
    val txClockDomain: ClockDomain = txCd.copy(reset = txReset)

    val rxFrontend = rxClockDomain on new Area{
        val preamble = MacRxPreamble(dataWidth = p.phy.rxDataWidth)
        preamble.io.input << io.phy.rx

        val checker = MacRxChecker(dataWidth = p.phy.rxDataWidth)
        checker.io.input << preamble.io.output

        val aligner = MacRxAligner(dataWidth = p.phy.rxDataWidth)
        aligner.io.input << checker.io.output
        aligner.io.enable := BufferCC(io.ctrl.rx.alignerEnable)

        val buffer = MacRxBuffer(
            pushCd = rxClockDomain,
            popCd = ctrlClockDomain.copy(softReset = io.ctrl.rx.flush),
            pushWidth = p.phy.rxDataWidth,
            popWidth = p.rxDataWidth,
            byteSize = p.rxBufferByteSize
        )
        buffer.io.push.stream << aligner.io.output
        buffer.io.push.drop <> io.sim.drop
        buffer.io.push.commit <> io.sim.commit
        buffer.io.push.error <> io.sim.error
    }

    val rxBackend = new Area{
        rxFrontend.buffer.io.pop.stream >> io.ctrl.rx.stream
        io.ctrl.rx.stats.clear <> rxFrontend.buffer.io.pop.stats.clear
        io.ctrl.rx.stats.errors <> rxFrontend.buffer.io.pop.stats.errors
        io.ctrl.rx.stats.drops <> rxFrontend.buffer.io.pop.stats.drops
    }


    val txFrontend = new Area{
        val buffer = MacTxBuffer(
            pushCd = ctrlClockDomain.copy(softReset = io.ctrl.tx.flush),
            popCd = txClockDomain,
            pushWidth = p.rxDataWidth,
            popWidth = p.phy.txDataWidth,
            byteSize = p.txBufferByteSize
        )
        buffer.io.push.stream << io.ctrl.tx.stream
        buffer.io.push.availability <> io.ctrl.tx.availability
    }

    val txBackend = txClockDomain on new Area{
        val aligner = MacTxAligner(dataWidth = p.phy.rxDataWidth)
        aligner.io.input << txFrontend.buffer.io.pop.stream
        aligner.io.enable := BufferCC(io.ctrl.tx.alignerEnable)

        val padder = MacTxPadder(dataWidth = p.phy.txDataWidth)
        padder.io.input << aligner.io.output

        val crc = MacTxCrc(dataWidth = p.phy.txDataWidth)
        crc.io.input << padder.io.output

        val header = MacTxHeader(dataWidth = p.phy.txDataWidth)
        header.io.input << crc.io.output
        header.io.output >> io.phy.tx


        txFrontend.buffer.io.pop.redo := False
        txFrontend.buffer.io.pop.commit := RegNext(header.io.output.lastFire) init(False)
    }
}