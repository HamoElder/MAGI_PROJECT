package magiRF.packages.CFO

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class CFOEstimationConfig(
                              iqWidth: Int
                              ){
    def dataType: SInt = SInt(iqWidth bits)
}


case class CFOEstimation(config : CFOEstimationConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(config.dataType)))

    }
    noIoPrefix()


}
