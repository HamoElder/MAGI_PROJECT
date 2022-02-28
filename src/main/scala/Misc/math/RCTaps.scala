package Misc.math

trait RCFilterParams {
    val scale: Int
    val alpha: Double
    val samplesPerSymbol: Int
    val symbolSpan: Int
}

object  RCTaps {
    def sinc(x: Double):Double = Math.sin(x) / (x)
    def sincpi(x: Double): Double = sinc(x* Math.PI)
    def norm(array: Seq[Double]): Double = {
        array.sum / array.length
    }
    def apply(params: RCFilterParams): Seq[Int]= {
        require(params.symbolSpan >= 1)
        require(params.samplesPerSymbol >= 1)
        require(params.alpha >= 0.0)
        require(params.alpha <= 1.0)

        val ntaps = params.samplesPerSymbol * params.symbolSpan + 1
        val N: Seq[Double] =  (0 until ntaps).map(_.toDouble)

        val taps = N map(n => sincpi(n /  params.samplesPerSymbol.toDouble) *
            Math.cos(params.alpha * Math.PI * n / params.samplesPerSymbol.toDouble) /
            (1 - Math.pow(2.0 * params.alpha * n / params.samplesPerSymbol.toDouble, 2)))
        val normalized = taps.map(i => {i*params.scale / norm(taps)})
        normalized.map(i => i.toInt)
    }
}
