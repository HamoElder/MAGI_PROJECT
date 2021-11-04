package magiRF.packages.Puncher

import spinal.lib._
import spinal.core._

case class PuncturingConfig(
                           dataWidth     : Int,
                           mask          : Seq[Array[Boolean]]
                           ) {
    val rawDataType = Bits(dataWidth bits)
    val codeRate = mask.size
    val maskSize = mask.head.size

//    val
}

case class Puncturing(config: PuncturingConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(config.rawDataType)))
        val punched_data = master(Stream(Fragment(config.rawDataType)))
    }
    noIoPrefix()




}
