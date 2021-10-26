package Misc.math

object FFT {

    def _exp(c: Complex) : Complex = {
        val r = (Math.cosh(c.re) + Math.sinh(c.re))
        Complex(Math.cos(c.im), Math.sin(c.im)) * r
    }

    def _fft(cSeq: Array[Complex], direction: Complex, scalar: Int): Array[Complex] = {
        if (cSeq.length == 1) {
            return cSeq
        }
        val n = cSeq.length
        assume(n % 2 == 0, "The Cooley-Tukey FFT algorithm only works when the length of the input is even.")

        val evenOddPairs = cSeq.grouped(2).toArray
        val evens = _fft(evenOddPairs map (_.head), direction, scalar)
        val odds  = _fft(evenOddPairs map (_(1)), direction, scalar)

        def leftRightPair(k: Int): (Complex, Complex) = {
            val base = evens(k) / scalar
            val offset = _exp(direction * (Math.PI * k / n)) * odds(k) / scalar
            (base + offset, base - offset)
        }

        val pairs = (0 until n/2) map leftRightPair
        val left  = pairs map (_._1)
        val right = pairs map (_._2)
        (left ++ right).toArray
    }

    def fft(x: Array[Complex]): Array[Complex] = {
        require(x.length > 0 && (x.length & (x.length - 1)) == 0, "array size should be power of two")
        _fft(x, Complex(0,  -2), 1)
    }

    def fft(x: Array[Double]): Array[Complex] = fft(x.map(re => new Complex(re, 0.0)))
    def rfft(x: Array[Double]): Array[Complex] = fft(x).take(x.length / 2 + 1)
    def ifft(x: Array[Double]): Array[Complex] = ifft(x.map(re => new Complex(re, 0.0)))
    def ifft(x:Array[Complex]) : Array[Complex] = {
        val x_conj = x.map(i => i.conj)
        fft(x_conj).map(i => i.conj / x.size)
    }
//    def main(args: Array[String]): Unit = {
//        val list = Array[Double](1.0, 2.0, 3.0, 4.0, 1.0, 2.0, 3.0, 4.0)
//        println(ifft(list).mkString("Array(", ", ", ")"))
//    }
}
