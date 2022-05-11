package magiRF.packages.MIMO.Receiver

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4MIMOReceiverConfig(
                                         iqWidth: Int,
                                         eleNum: Int,
                                         streamNum: Int,
                                         cfgDataWidth: Int = 32
                                     ) {
    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
    def iqDataType: SInt = SInt(iqWidth bits)
    def transDataWidth: Int = iqWidth + iqWidth
    def transDataType: SInt = SInt(transDataWidth bits)
}

case class AxiLite4MIMOReceiver(config: AxiLite4MIMOReceiverConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val mod_iq = slave(Stream(IQBundle(config.iqDataType)))
        val base_sub_iqs = master(Flow(Vec(IQBundle(config.transDataType), config.streamNum)))

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
        val mimo_receiver = MIMOReceiver(config.iqWidth, config.eleNum, config.streamNum)
        mimo_receiver.io.mod_iq << io.mod_iq
        io.base_sub_iqs << mimo_receiver.io.base_sub_iqs
    }

    val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    val oam_unspinor_bridge = rfClockArea.mimo_receiver.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
    axil4busCtrl.printDataModel()
}

object AxiLite4MIMOReceiverBench{
    def main(args: Array[String]): Unit = {
        val mimo_receiver_config = AxiLite4MIMOReceiverConfig(16, 8, 8)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AxiLite4MIMOReceiver").generateSystemVerilog(new AxiLite4MIMOReceiver(mimo_receiver_config)).printPruned()
    }
}