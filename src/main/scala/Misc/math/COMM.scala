package Misc.math

import scala.math.{pow, sqrt}
import scala.util.Random

object COMM {
    def awgn(x: Array[Double], snr: Double, seed: Int): Array[Double] ={
        Random.setSeed(seed)
        val snr_buf = pow(10, snr / 10.0)
        val xpower = x.map(pow(_, 2)).sum / x.length
        val npower = xpower / snr_buf
        x.map(_ + Random.nextDouble() * sqrt(npower))
    }

    def awgn(x: Array[Complex], snr: Double, seed: Int): Unit ={
        Random.setSeed(seed)
        val snr_buf = pow(10, snr / 10.0)
        val xpower_re = x.map(i =>{pow(i.re, 2)}).sum / x.length
        val xpower_im = x.map(i =>{pow(i.im, 2)}).sum / x.length
        val npower_re = xpower_re / snr_buf
        val npower_im = xpower_im / snr_buf
        x.map(i =>{i + Complex(Random.nextDouble()* sqrt(npower_re), Random.nextDouble()* sqrt(npower_im))} )
    }
}
