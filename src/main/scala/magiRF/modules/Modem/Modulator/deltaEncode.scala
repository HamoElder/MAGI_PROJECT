package magiRF.modules.Modem.Modulator

import spinal.core._
import spinal.lib._

case class deltaEncodeConfig(){

}

case class deltaEncode() extends Component {
    val io = new Bundle{
//        val unit_data_in = slave(Flow())
    }
    noIoPrefix()
}
