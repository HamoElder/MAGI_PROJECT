package magiRF.packages.Coder

import magiRF.packages.Coder.Convolutional.Decoder.{ViterbiDecoder, ViterbiDecoderConfig}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
import spinal.core._
import spinal.lib._

//Sim

object ViterbiDecoderSimApp extends App{


    import magiRF.top.OAM_BETA.OAM_CDMA
    val viterbi_decoder = ViterbiDecoderConfig(3, 16, 1, List(7, 5))
    SimConfig.withWave.doSim(new ViterbiDecoder(viterbi_decoder)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.last #= false
        dut.clockDomain.waitSampling(10)
        dut.io.raw_data.valid #= true
        dut.io.raw_data.payload.data #= 3
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.data #= 2
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.data #= 3
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.data #= 3
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.data #= 1
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.payload.data #= 1
        dut.clockDomain.waitSampling(1)
        //        for(idx <- 0 until 1000){
        //            dut.io.raw_data.payload.data #= 3
        //            dut.clockDomain.waitSampling(1)
        //        }
        dut.io.raw_data.payload.data #= 3
        dut.io.raw_data.last #= true
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.last #= false
        dut.clockDomain.waitSampling(1000)
    }
}