package magiRF.modules.Filters.IIR

import spinal.core._
import spinal.lib._

case class IIR_Config(
                     dataWidth: Int
                     ){

}

case class IIR_II[T <: Data](dataType: T, config: IIR_Config) extends Component {
//    val io = new Bundle{
//        val iir_data_in = slave(Flow(dataType))
//
//        val iir_data_out = master(Flow(dataType))
//    }
//
//    noIoPrefix()


}
