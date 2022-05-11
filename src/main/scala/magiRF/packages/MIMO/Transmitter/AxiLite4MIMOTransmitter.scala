package magiRF.packages.MIMO.Transmitter

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4MIMOTransmitterConfig(
                                        iqWidth: Int,
                                        eleNum : Int,
                                        streamNum: Int,
                                        cfgDataWidth: Int = 32
                                        ){
    require(streamNum <= eleNum, "The num of stream must equal or less than the num of Channels(Antenna elements).")
    def addressWidth: Int = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
    def iqDataType: SInt = SInt(iqWidth bits)
    def modDataWidth: Int = iqWidth + iqWidth
    def modDataType: SInt = SInt(modDataWidth bits)
}

case class AxiLite4MIMOTransmitter(config: AxiLite4MIMOTransmitterConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val base_iqs = slave(Flow(Vec(IQBundle(config.iqDataType), config.streamNum)))
        val mod_iqs = master(Flow(Vec(IQBundle(config.modDataType), config.eleNum)))

        val rf_clk = in(Bool())
        val rf_resetn = in(Bool())
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axil4Ctrl)

    val rfClockDomain = ClockDomain(
        clock = io.rf_clk,
        reset = io.rf_resetn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW
        )
    )

    val rfClockArea = new ClockingArea(rfClockDomain){
        val mimo_transmitter = MIMOTransmitter(config.iqWidth, config.eleNum, config.streamNum)
        mimo_transmitter.io.base_iqs << io.base_iqs
        io.mod_iqs << mimo_transmitter.io.mod_iqs
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val oam_spinor_bridge = rfClockArea.mimo_transmitter.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}

object AxiLite4MIMOTransmitterBench{
    def main(args: Array[String]): Unit = {
        val mimo_transmitter_config = AxiLite4MIMOTransmitterConfig(16, 8, 8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4MIMOTransmitter").generateSystemVerilog(new AxiLite4MIMOTransmitter(mimo_transmitter_config)).printPruned()
    }
}