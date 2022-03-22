package Misc.math

case class SquareRootRaisedCosineFilterParams(
        scale: Double,
        beta: Double,
        symbolSpan: Int,
        samplesPerSymbol: Int
    ){
    override def equals(that: Any): Boolean = {
        this == that
    }
}


object SquareRootRaisedCosineTaps{
    def norm(array: Seq[Double]): Double = {
        scala.math.sqrt(array.map(scala.math.pow(_, 2)).sum)
    }
    def apply(params: SquareRootRaisedCosineFilterParams): Seq[Int] = {
        require(params.symbolSpan >= 1)
        require(params.samplesPerSymbol >= 1)
        require((params.samplesPerSymbol * params.symbolSpan) % 2 == 0)
        require(params.beta > 0.0)
        require(params.beta <= 1.0)

        val eps = 2.2204e-16
        val delay = params.samplesPerSymbol * params.symbolSpan / 2
        val t = (-delay to delay).map(i => (i.toDouble / params.samplesPerSymbol))
        val taps = t.zipWithIndex.map{case(ti, idx) =>
            if(scala.math.abs(ti) < eps){
                -1.0 / (scala.math.Pi*params.samplesPerSymbol) * (scala.math.Pi*(params.beta-1) - 4*params.beta)
            }
            else if(scala.math.abs(scala.math.abs(4*params.beta*t(idx)) - 1.0) < scala.math.sqrt(eps)){
                1.0 / (2*scala.math.Pi *params.samplesPerSymbol)* (scala.math.Pi*(params.beta+1)*scala.math.sin(scala.math.Pi
                    *(params.beta+1)/(4*params.beta)) - 4*params.beta * scala.math.sin(scala.math.Pi*(params.beta-1) /
                (4*params.beta)) + scala.math.Pi*(params.beta-1) * scala.math.cos(scala.math.Pi*(params.beta-1)/(4*params.beta)))
            }else{
                -4.0*params.beta/params.samplesPerSymbol * (scala.math.cos((1+params.beta)*scala.math.Pi*ti) +
                scala.math.sin((1-params.beta)*scala.math.Pi*ti) / (4*params.beta*ti) ) / (scala.math.Pi
                    * (scala.math.pow(4*params.beta*ti, 2) - 1))
            }
        }
        val normalized = taps.map(tap => {tap*params.scale / norm(taps)})
        normalized.map(i => i.round.toInt)
    }
}