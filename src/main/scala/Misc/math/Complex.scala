package Misc.math

case class Complex(val re: Double, val im: Double) {
    def +(x: Complex): Complex = Complex(re + x.re, im + x.im)
    def unary_- : Complex = Complex(-re, -im)
    def -(x: Complex): Complex = Complex(re - x.re, im - x.im)
    def *(x: Double):  Complex = Complex(re * x, im * x)
    def *(x: Complex): Complex = Complex(re * x.re - im * x.im, re * x.im + im * x.re)
    def /(x: Double):  Complex = Complex(re / x, im / x)
    def *(x: Int) = new Complex(re * x, im * x)
    def conj = new Complex(re, -im)

    def magnitude: Double = Math.hypot(re, im)
    def phase: Double = Math.atan2(im, re)

    override def toString = s"Complex($re, $im)"
}


