package magiRF.modules.DSP.FFT

import spinal.core._
import spinal.lib._
import utils.common.ShiftReg.ShiftRegister
import scala.language.postfixOps

// One Time One Burst without block

case class R2MDC(config: FFTConfig) extends Component {
	val io = new Bundle {
		val mode = if (config.supportIFFT) in Bool() else null
		val raw_data = slave(Stream(Complex(config.dataType)))
        val result = master(Flow(Fragment(Complex(config.dataType))))
	}
    noIoPrefix()
	def stages: Int = log2Up(config.FFTLength)
	val cnt: UInt = Reg(UInt(stages + 1 bits)) init(0)

	when(io.raw_data.fire || cnt >= config.FFTLength){
		cnt := Mux(cnt === (config.FFTLength * 3 / 2 - 1), U(0), cnt + 1)
	}
	io.raw_data.ready := cnt < config.FFTLength

	val out0_buf = Vec(Complex(config.dataType), stages + 1)
	val out1_buf = Vec(Complex(config.dataType), stages + 1)

	out0_buf(0) := io.raw_data.payload
	out1_buf(0) := io.raw_data.payload
	val cnt_p1 = cnt + 1
	for(idx <- 0 until stages - 1){
		val wnCtrl = cnt_p1(stages-2-idx downto 0)
		val wn = wnTable(idx)(wnCtrl)
		val r2bf = Butterfly(ShiftRegister(out0_buf(idx), (config.FFTLength / scala.math.pow(2, idx + 1)).toInt), out1_buf(idx), wn)
		val swCtrl = cnt(stages - 2 - idx)
		val r2sw = Switch(r2bf._1, ShiftRegister(r2bf._2, (config.FFTLength / scala.math.pow(2, idx + 2)).toInt), swCtrl)
		out0_buf(idx + 1) := r2sw._1
		out1_buf(idx + 1) := r2sw._2
	}

	val out1D1: Complex = RegNext(out0_buf(stages - 1))
	out0_buf(stages) := out1D1 + out1_buf(stages - 1)
	out1_buf(stages) := out1D1 - out1_buf(stages - 1)
	val result_out1: Complex = Mux(io.mode, out0_buf(stages), out0_buf(stages) >> stages)
	val result_out2: Complex = Mux(io.mode, out1_buf(stages), out1_buf(stages) >> stages)

	val reorder = Reorder(config)
	reorder.io.unsorted.valid := cnt > (config.FFTLength - 1)
	reorder.io.unsorted.in0 := RegNext(result_out1)
	reorder.io.unsorted.in1 := RegNext(result_out2)

	io.result << reorder.io.sorted
//    io.result.payload := reorder.io.sorted.payload
//    io.result.last := reorder.io.sorted.last

	def wnTable(idx: Int)(wnCtrl: UInt): Complex = {
		val fft_wn = Mem(Complex(config.dataType), initialContent = config.fftWnGen(idx, 1, 2)).addAttribute("rom_style", "block")
		val res = fft_wn.readSync(wnCtrl)
		val wn = io.mode ? res | res.conj()
		wn
	}
}

object R2MDCBench{
	def main(args: Array[String]): Unit ={
		val fft_config = FFTConfig(12 exp, -11 exp, 64)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/R2MDC").generateSystemVerilog(new R2MDC(fft_config)).printPruned().printUnused()
	}
}
