package Misc.math

case class RaisedCosineFilterParams(
                                       scale: Int,
                                       beta: Double,
                                       symbolSpan: Int,
                                       samplesPerSymbol: Int
                                   ) {
    override def equals(that: Any): Boolean = {
        this == that
    }
}

object  RaisedCosineTaps {
    def sinc(x: Double):Double = {
        val eps = 2.2204e-16
        if(scala.math.abs(x) < eps){
            1.0
        }else{
            scala.math.sin(x) / (x)
        }
    }
    def sincpi(x: Double): Double = sinc(x* scala.math.Pi)
    def norm(array: Seq[Double]): Double = {
        scala.math.sqrt(array.map(scala.math.pow(_, 2)).sum)
    }
    def apply(params: RaisedCosineFilterParams): Seq[Int]= {
        require(params.symbolSpan >= 1)
        require(params.samplesPerSymbol >= 1)
        require((params.samplesPerSymbol * params.symbolSpan) % 2 == 0)
        require(params.beta > 0.0)
        require(params.beta <= 1.0)
        val eps = 2.2204e-16
        val delay = params.samplesPerSymbol * params.symbolSpan / 2
        val t = (-delay to delay).map(i => (i.toDouble / params.samplesPerSymbol))
        val denom = t.map(i => (1-scala.math.pow(2*params.beta*i, 2)))
        val taps = t.zipWithIndex.map{case(ti, idx) =>
            if(scala.math.abs(denom(idx)) > scala.math.sqrt(eps)){
                sincpi(ti)*scala.math.cos(scala.math.Pi*params.beta*ti)/denom(idx)/params.samplesPerSymbol
            }else{
                params.beta * scala.math.sin(scala.math.Pi/(2*params.beta)) / (2*params.samplesPerSymbol);
            }
        }
        val normalized = taps.map(tap => {tap*params.scale / norm(taps)})
        normalized.map(i => i.round.toInt)
    }
}
