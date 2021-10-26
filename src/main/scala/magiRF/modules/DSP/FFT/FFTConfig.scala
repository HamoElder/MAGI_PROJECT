package magiRF.modules.DSP.FFT

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

import scala.collection.immutable


case class FFTConfig(
	                    dataTypePeak: ExpNumber = 8 exp,
	                    dataTypeResolution: ExpNumber = -2 exp,
	                    FFTLength: Int = 512,
	                    supportIFFT: Boolean = true
                    ) {

	def dataType: SFix = SFix(peak = dataTypePeak, resolution = dataTypeResolution)
	def dataLength: Int = dataType.getBitsWidth

    def halfFFTLength: Int = FFTLength / 2

    def dataOutType: IQBundle[SInt] = IQBundle(SInt(dataLength bits))

	def fftWnGen(k: Int, n: Int, radix: Int): Seq[Complex] = for(idx <- 0 until (FFTLength / radix) by Math.pow(radix, k).toInt)yield{
		val fix_raw = Complex(dataType)
		fix_raw.re := Math.cos(-(n * idx * 2 * Math.PI) / FFTLength.toDouble)
		fix_raw.im := Math.sin(-(n * idx * 2 * Math.PI) / FFTLength.toDouble)
		fix_raw
	}

}
