package magiRF.modules.DSP.FFT

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class R2MDC_FFT(config: FFTConfig) extends Component {

	val io = new Bundle {
		val mode = if (config.supportIFFT) in Bool() else null
		val raw_data_iq = slave(Stream(config.dataOutType))
		val result_iq = master(Flow(Fragment(config.dataOutType)))
	}
	noIoPrefix()
	val raw_data_fifo = StreamFifo(Complex(config.dataType), 2 *config.FFTLength)
	raw_data_fifo.io.push.valid := io.raw_data_iq.valid
	raw_data_fifo.io.push.payload.re.raw := io.raw_data_iq.cha_i
	raw_data_fifo.io.push.payload.im.raw := io.raw_data_iq.cha_q
	io.raw_data_iq.ready := raw_data_fifo.io.push.ready

	val fifo_pop_en = Reg(Bool()) init(False)
	val pop_cnt = Reg(UInt(log2Up(config.FFTLength) bits)) init(0)

	when(fifo_pop_en){
		when(raw_data_fifo.io.pop.fire){
			pop_cnt := pop_cnt + 1
		}
		when(pop_cnt === config.FFTLength - 1){
			fifo_pop_en := False
		}
	}.elsewhen(raw_data_fifo.io.occupancy >= config.FFTLength){
		fifo_pop_en := True
	}

	val fft_core: R2MDC = R2MDC(config)
	fft_core.io.mode := io.mode
	fft_core.io.raw_data << raw_data_fifo.io.pop.continueWhen(fifo_pop_en)

	io.result_iq.valid := fft_core.io.result.valid
	io.result_iq.cha_i := fft_core.io.result.payload.re.raw
	io.result_iq.cha_q := fft_core.io.result.payload.im.raw
    io.result_iq.payload.last := fft_core.io.result.last
}

object R2MDC_FFTBench{
	def main(args: Array[String]): Unit ={
		val fft_config = FFTConfig(15 exp, -16 exp, 64)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/R2MDC_FFT").generateSystemVerilog(new R2MDC_FFT(fft_config)).printPruned().printUnused()
	}
}
