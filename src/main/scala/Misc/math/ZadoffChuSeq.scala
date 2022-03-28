package Misc.math

object ZadoffChuSeq {
	def zcSeqGen(root: Double, length: Int): Array[Complex] = {
		require(length > 0, "Sequence length should be more than zero.")
//		require((length & 1) == 1, "Sequence length should be odd.")
		require(root > 0, "Root should be positive.")
		val arr = new Array[Complex](length)

		for(idx <- 0 until length){
			arr(idx) = Complex(scala.math.cos(scala.math.Pi* root * idx * (idx + (length % 2)) / length),
				-scala.math.sin(scala.math.Pi* root * idx * (idx + (length % 2)) / length))

		}
		arr
	}
}
