package magiRF.modules.Modem.Demodulator.extensions

import magiRF.modules.DSP.CORDIC.CordicConfig
import magiRF.modules.Modem.Misc.modUnitInterface
import spinal.core._
import spinal.lib._

case class GMSKDemodConfig(
                              modDataWidth: Int,
                              SamplesPerSymbol: Int = 4
                          ){
    def unitDataType: Bits = Bits(1 bits)
    def modDataType: SInt = SInt(modDataWidth bits)
//    def phiDataType = SFix(3 exp, -phiResolutionWidth bits)
//    def cordic_config = CordicConfig(3 exp, modDataWidth)
}

case class GMSKDemod(config: GMSKDemodConfig) extends Component {
    val io = master(modUnitInterface(config.unitDataType, config.modDataType))
    noIoPrefix()

//    val phi_integral = Reg(config.phiDataType)
    // First Test
}
