package magiRF.modules.DSP.Decimator

import spinal.core._
import spinal.lib._

case class Decimator[T <: Data](dataType: T, nDecimation: Int) extends Component {
    def cntDataWidth: Int = log2Up(nDecimation)
    def cntDataType: UInt = UInt(cntDataWidth bits)
    val io = new Bundle{
        val in = slave(Flow(dataType))
        val out = master(Flow(dataType))
    }
    noIoPrefix()
    val cnt = Reg(cntDataType) init(0)

    val out_data = Reg(dataType)
    val out_valid = Reg(Bool()) init(False)
    when(io.in.valid){
        cnt := (cnt === nDecimation - 1) ? U(0) | cnt + 1
    }
    when(io.in.valid){
        when (cnt === nDecimation - 1){
            out_valid := True
            out_data := io.in.payload
        }.otherwise{
            out_valid := False
        }
    }.otherwise{
        out_valid := False
    }
    io.out.payload := out_data
    io.out.valid := out_valid
}
