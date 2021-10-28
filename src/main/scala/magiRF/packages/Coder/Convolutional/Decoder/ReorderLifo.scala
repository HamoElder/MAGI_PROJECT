package magiRF.packages.Coder.Convolutional.Decoder

import spinal.lib._
import spinal.core._

case class ReorderLifo(config: ViterbiDecoderConfig) extends Component {
    val decoded_lifo_0 = Reg(Bits(config.lifoDepth bits))
    val decoded_lifo_1 = Reg(Bits(config.lifoDepth bits))

}
