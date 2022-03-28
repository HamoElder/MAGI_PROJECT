package magiRF.modules.DSP.FFT

import spinal.core._
import spinal.lib._

case class Reorder(config: FFTConfig) extends Component {
  val io = new Bundle{
    val unsorted = slave(Flow(new Bundle {
        val in0 = Complex(config.dataType)
        val in1 = Complex(config.dataType)
    }))
      val sorted = master(Flow(Fragment(Complex(config.dataType))))
  }
  noIoPrefix()

  val ram_low = Mem(Complex(config.dataType) ,config.halfFFTLength).addAttribute("ram_style", "block")
  val ram_high = Mem(Complex(config.dataType), config.halfFFTLength).addAttribute("ram_style", "block")


  val in_cnt = Reg(UInt(log2Up(config.halfFFTLength) bits)) init(0)
  val out_cnt = Reg(UInt(log2Up(config.FFTLength) bits)) init(0)

  val in_cnt_index = in_cnt.reversed

  when(io.unsorted.valid){
    in_cnt := in_cnt + 1
    ram_low.write(address = in_cnt_index, data = io.unsorted.in0)
    ram_high.write(address = in_cnt_index, data = io.unsorted.in1)
  }

  val sorted_valid = (in_cnt === (config.halfFFTLength - 1)) || (out_cnt =/= 0)
  when(sorted_valid){
    out_cnt := out_cnt + 1
  }

  when(RegNext(out_cnt < config.halfFFTLength)) {
    io.sorted.payload := ram_low.readSync(out_cnt.resized)
  }.otherwise{
    io.sorted.payload := ram_high.readSync(out_cnt.resized)
  }
    io.sorted.last := (out_cnt === 0) && (io.sorted.valid)
    io.sorted.valid := RegNext(sorted_valid)
}

