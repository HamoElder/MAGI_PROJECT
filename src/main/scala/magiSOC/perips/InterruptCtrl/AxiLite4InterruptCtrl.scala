package magiSOC.perips.InterruptCtrl

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory}

case class AxiLite4InterruptCtlrConfig(
                                      cfgDataWidth: Int,
                                      channelWidth: Int
                                      ){
    def cfgAddressWidth: Int = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)

}

case class AxiLite4InterruptCtrl(config : AxiLite4InterruptCtlrConfig) extends Component{
    val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val inputs = in Bits(config.channelWidth bits)
        val pendings = out Bits(config.channelWidth bits)
    }

    val ctrl = InterruptCtrl(config.channelWidth)
    ctrl.io.inputs   <> io.inputs
    ctrl.io.pendings <> io.pendings

    val factory = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
    ctrl.driveFrom(factory,0x00)
}
