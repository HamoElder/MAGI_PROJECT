package utils.common.DataSplitUnite.DataWidthConvert

import spinal.core._
import spinal.lib._

case class DataWidthConverter[T <: Data, U <: Data](dataType: T, outDataType: U, useLast: Boolean) extends Component {
    val io = new Bundle{
    }
    noIoPrefix()
}
