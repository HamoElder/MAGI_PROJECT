package magiFSR.utils

import magiFSR.bundle.Rgb
import spinal.core._
import spinal.lib._
// 8 8 8 9
case class LuminanceCalc(rWidth: Int, gWidth: Int, bWidth: Int, lWidth: Int) extends Component{
    val io = new Bundle{
        val rgb_data = slave(Stream(Rgb(rWidth, gWidth, bWidth)))
        val lumen_data = master(Stream(UInt(lWidth bits)))
    }
    noIoPrefix()

    val lumen_buffer = Reg(UInt(lWidth bits))
    val lumen_valid = Reg(Bool()) init(False)
    when(io.rgb_data.fire){
        lumen_buffer := (io.rgb_data.r >> 1) + (io.rgb_data.g >> 1) + (io.rgb_data.b >> 1)
        lumen_valid := True
    }.otherwise{
        lumen_valid := False
    }

    io.lumen_data.payload := lumen_buffer
    io.lumen_data.valid := lumen_valid
    io.rgb_data.ready := io.lumen_data.ready
}
