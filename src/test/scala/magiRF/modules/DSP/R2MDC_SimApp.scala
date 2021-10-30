package magiRF.modules.DSP

import magiRF.modules.DSP.FFT.{FFTConfig, R2MDC}
import spinal.core._
import spinal.lib._
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random


object R2MDC_SimApp extends App{

    val fft_config = FFTConfig(12 exp, -11 exp, 2048)

    SimConfig
        .withWave
        .allOptimisation
        .doSim(new R2MDC(fft_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.mode #= true
            dut.io.raw_data.valid #= false
            dut.io.raw_data.re.raw #= 0
            dut.io.raw_data.im.raw #= 0
            dut.clockDomain.waitSampling(20)
            for (cnt <- 0 until 1){
                for(idx <- 0 until 2049){
                    dut.io.raw_data.re.raw #= idx % 1024
                    dut.io.raw_data.im.raw #= 0
                    dut.io.raw_data.valid #= true
                    dut.clockDomain.waitSampling(1)
                }
                dut.io.raw_data.valid #= false
                dut.clockDomain.waitSampling(1024)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(10000)
        }
}
