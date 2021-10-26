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
	val fft_core = R2MDC(config)
	fft_core.io.mode := io.mode
	fft_core.io.raw_data.valid := io.raw_data_iq.valid
	fft_core.io.raw_data.payload.re.raw := io.raw_data_iq.cha_i
	fft_core.io.raw_data.payload.im.raw := io.raw_data_iq.cha_q
	io.raw_data_iq.ready := fft_core.io.raw_data.ready

	io.result_iq.valid := fft_core.io.result.valid
	io.result_iq.cha_i := fft_core.io.result.payload.re.raw
	io.result_iq.cha_q := fft_core.io.result.payload.im.raw
    io.result_iq.payload.last := fft_core.io.result.last
}

object R2MDC_FFTBench{
	def main(args: Array[String]): Unit ={
		val fft_config = FFTConfig(15 exp, -16 exp, 2048)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/R2MDC_FFT").generateSystemVerilog(new R2MDC_FFT(fft_config)).printPruned().printUnused()
	}
}
