package magiRF.packages.CDMA

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class AxiLite4CDMAConfig(
                             iqWidth: Int,
                             codeLength: Int,
                             cfgDataWidth : Int,
                             useDynamic:Boolean = true,
//                             codeTable
                             ){

}

case class AxiLite4CDMA(iqWidth: Int, codeLength: Int) extends Component {
    val io = new Bundle{
//        val base_iq = slave(Flow(IQBundle()))
    }
}
