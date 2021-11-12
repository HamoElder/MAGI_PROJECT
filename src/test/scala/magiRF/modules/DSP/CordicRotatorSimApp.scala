package magiRF.modules.DSP

import magiRF.modules.DSP.CORDIC.{CordicConfig, CordicRotator}
import spinal.core.sim._
import spinal.core._
import spinal.lib._

object CordicRotatorSimApp extends App{
    /**
     * Get sequences of length n that go 1.0, 0.5, 0.25, ...
     */
    def linearRam(n: Int):Seq[Double] = for (i <- 0 until n) yield Math.pow(2.0, -i)
    /**
     * Get gain for n-stage CORDIC
     */
    //		def gain(n: Int) = linear(n).map(x => sqrt(1 + x * x)).reduce(_ * _)
    /**
     * Get sequences of length n that go atan(1), atan(0.5), atan(0.25), ...
     */
    def arctanRam(n: Int):Seq[Double] = linearRam(n).map(Math.atan)
    val cordic_config = CordicConfig(16 exp, -15 exp, 16, linearRam, usePipeline = false, useProgrammable = true)

    SimConfig
        .withWave
        //        .allOptimisation
        .doSim(new CordicRotator(cordic_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.iter_limit #= 15
            dut.io.rotate_mode #= false
            dut.io.w_en #= false
            dut.io.x_u #= 1
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(10)
            dut.io.w_en #= true
            for (idx <- 0 until cordic_config.iterations){
                dut.io.w_addr #= idx
                dut.clockDomain.waitSampling(1)
                dut.io.w_data.raw #= (Math.pow(2, -(idx) ) * ( 1 << 15)).toInt
                dut.clockDomain.waitSampling(1)
            }
            dut.io.w_en #= false
            dut.clockDomain.waitSampling(10)
            dut.io.raw_data.x.raw #= (5 << 15)
            dut.io.raw_data.y.raw #= (3 << 15)
            dut.io.raw_data.z.raw #= (0 << 13)
            dut.io.raw_data.valid #= true
            dut.clockDomain.waitSampling(1)
            for (idx <- 1 until 10){
                dut.io.raw_data.x.raw #= (10 << 15)
                dut.io.raw_data.y.raw #= (idx << 15)
                dut.io.raw_data.z.raw #= (0 << 13)
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false

            dut.clockDomain.waitSampling(100)

        }
}
