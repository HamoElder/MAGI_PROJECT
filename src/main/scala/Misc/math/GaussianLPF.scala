package Misc.math

object GaussianLPF {
    /**
     * BT- BT product - Bandwidth x bit period
     * Tb - bit period
     * L - oversampling factor(number of samples per bit)
     * k - span length of the pulse (bit interval)
     */
    def apply(BT: Double, Tb: Int, L: Int, K: Int) : Seq[Double] = {
        val B: Double = BT / Tb
        val alpha :Double = Math.sqrt(Math.log(2) / 2.0) / B
        val h = (-K*Tb to K*Tb by Tb/L).map(i => Math.sqrt(Math.PI) / alpha * Math.exp(-(i * i) * Math.PI * Math.PI / (alpha * alpha)))
        val h_sum = h.sum
        h.map(i => i / h_sum)
    }
}

