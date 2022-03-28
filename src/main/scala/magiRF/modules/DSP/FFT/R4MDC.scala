package magiRF.modules.DSP.FFT

import  spinal.core._
import spinal.lib._
import utils.common.ShiftReg.ShiftRegister
import scala.language.postfixOps

case class R4MDC(config: FFTConfig) extends Component {
	val io = new Bundle {
		val mode = if (config.supportIFFT) in Bool() else null
		val raw_data = slave(Stream(Complex(config.dataType)))
		val result_0 = master(Flow(Complex(config.dataType)))
		val result_1 = master(Flow(Complex(config.dataType)))
		val result_2 = master(Flow(Complex(config.dataType)))
		val result_3 = master(Flow(Complex(config.dataType)))
	}
	noIoPrefix()
	val stages = log2Up(config.FFTLength) / 2
	val cntNum = 2 * stages
	val cnt = Reg(UInt(cntNum + 1 bits)) init(0)
	when(io.raw_data.fire || cnt >= config.FFTLength){
		cnt := Mux(cnt === (config.FFTLength * 5 / 4 - 1), U(0), cnt + 1)
	}

	io.raw_data.ready := cnt < config.FFTLength
	val out0_buf = Vec(Complex(config.dataType), stages + 1)
	val out1_buf = Vec(Complex(config.dataType), stages + 1)
	val out2_buf = Vec(Complex(config.dataType), stages + 1)
	val out3_buf = Vec(Complex(config.dataType), stages + 1)
	out0_buf(0) := io.raw_data.payload
	out1_buf(0) := io.raw_data.payload
	out2_buf(0) := io.raw_data.payload
	out3_buf(0) := io.raw_data.payload
	val cnt_p1 = cnt + 1

	for(idx <- 0 until stages - 1){
		val wnCtrl = cnt_p1(stages - 3 - 2 * idx downto 0)
		val wn2 = wnTable(idx, 2)(wnCtrl)
		val wn3 = wnTable(idx, 1)(wnCtrl)
		val wn4 = wnTable(idx, 3)(wnCtrl)
		val r4bf = Butterfly(ShiftRegister(out0_buf(idx), (3 * config.FFTLength / scala.math.pow(4, idx + 1)).toInt),
			ShiftRegister(out1_buf(idx), (2 * config.FFTLength / scala.math.pow(4, idx + 1)).toInt),
			ShiftRegister(out2_buf(idx), (config.FFTLength / scala.math.pow(4, idx + 1)).toInt), out3_buf(idx),
			wn2,
			wn3,
			wn4)
		val swCtrl1 = cnt(cntNum - 3 - 2 * idx)
		val swCtrl0 = cnt(cntNum - 4 - 2 * idx)
		val r4sw = Switch(r4bf._1, ShiftRegister(r4bf._2, (config.FFTLength / scala.math.pow(4, idx + 2)).toInt),
			ShiftRegister(r4bf._3, (2 * config.FFTLength / scala.math.pow(4 , idx + 2)).toInt), ShiftRegister(r4bf._4, (3 * config.FFTLength / scala.math.pow(4 , idx + 2)).toInt), swCtrl0, swCtrl1)
		out0_buf(idx + 1) := r4sw._1
		out1_buf(idx + 1) := r4sw._2
		out2_buf(idx + 1) := r4sw._3
		out3_buf(idx + 1) := r4sw._4
	}

	val out0D3 = ShiftRegister(out0_buf(stages - 1), 3)
	val out1D2 = ShiftRegister(out1_buf(stages - 1), 2)
	val out2D1 = ShiftRegister(out2_buf(stages - 1), 1)
	val BFA1234 = ButterflyAdd(out0D3, out1D2, out2D1, out3_buf(stages - 1))
	out0_buf(stages) := BFA1234._1
	out1_buf(stages) := BFA1234._2
	out2_buf(stages) := BFA1234._3
	out3_buf(stages) := BFA1234._4

	io.result_0.payload := RegNext(out0_buf(stages))
	io.result_1.payload := RegNext(out1_buf(stages))
	io.result_2.payload := RegNext(out2_buf(stages))
	io.result_3.payload := RegNext(out3_buf(stages))

	io.result_0.valid := cnt > (config.FFTLength - 1)
	io.result_1.valid := cnt > (config.FFTLength - 1)
	io.result_2.valid := cnt > (config.FFTLength - 1)
	io.result_3.valid := cnt > (config.FFTLength - 1)

	def wnTable(idx: Int, n: Int)(wnCtrl: UInt): Complex = {
		val fft_wn = Mem(Complex(config.dataType), initialContent = config.fftWnGen(idx, n, 4)).addAttribute("rom_style", "block")
		val res = fft_wn.readSync(wnCtrl)
		val wn = io.mode ? res | res.conj()
		wn
	}
}
