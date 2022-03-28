package magiRF.modules.DSP.CORDIC

import spinal.core._
import spinal.lib._

case class AxiLIte4CordicConfig(
                                   dataTypePeak          : ExpNumber = 8 exp,
                                   dataTypeResolution    : ExpNumber = -2 exp,
                                   iterations            : Int,
                                   usePipeline           : Boolean = true
                               ) {
    def addressWidth = 8

  override def equals(that: Any): Boolean = this == that
}

case class AxiLite4Cordic() extends Component{
    val io = new Bundle{

    }
    noIoPrefix()
}
