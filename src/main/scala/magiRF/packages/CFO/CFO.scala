package magiRF.packages.CFO

import magiRF.packages.Preamble.{PreambleDetector, PreambleDetectorConfig}
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class CFOConfig(
                        iqWidth               : Int,
                        delayT                : Int,
                        slideWinSize          : Int,
                        iterations            : Int,
                        dataTypePeak          : ExpNumber = 10 exp,
                        dataTypeResolution    : ExpNumber = -5 exp
                    ){
    def dataType: SInt = SInt(iqWidth bits)
    def phiDataType: SFix = SFix(dataTypePeak, dataTypeResolution)
    def preamble_config: PreambleDetectorConfig = PreambleDetectorConfig(iqWidth, delayT, slideWinSize, usePowerMeter = true)
}

case class CFO(config: CFOConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(config.dataType)))
        val rotated_data = master(Flow(IQBundle(config.dataType)))
    }
    noIoPrefix()

    val preamble_detector = PreambleDetector(config.preamble_config)
}
