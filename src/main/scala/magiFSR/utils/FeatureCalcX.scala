package magiFSR.utils

import spinal.core._
import spinal.lib._

// 9 960
case class DiffCalcX(lWidth: Int, imgWidth: Int) extends Component {
    val io = new Bundle{
        val lumen_data = slave(Flow(UInt(lWidth bits)))
        val diff_x = master(Flow(UInt(lWidth bits)))
        val second_step_diff_x = master(Flow(UInt(lWidth bits)))
        val soft_reset = in(Bool())
    }
    noIoPrefix()
    val cnt = Counter(imgWidth)
//    when()
}
