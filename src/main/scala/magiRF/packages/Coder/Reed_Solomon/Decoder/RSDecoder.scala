package magiRF.packages.Coder.Reed_Solomon.Decoder

import spinal.core._
import spinal.lib._

case class RSDecoder() extends Component {
    val io = new Bundle{
        val data = slave(Stream(UInt(32 bits)))
    }
    noIoPrefix()

}
