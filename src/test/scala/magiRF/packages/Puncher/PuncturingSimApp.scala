package magiRF.packages.Puncher

import spinal.core.sim._


object PuncturingSimApp extends App{
    val mask_seq_1_2 = Seq(15, 7, 14, 6, 13, 5, 12, 4, 11, 3, 10, 2, 9, 1, 8, 0)   // 1/2
    val mask_seq_2_3 = Seq(15, 7, 14, 13, 5, 12, 11, 3, 10, 9, 1, 8)               // 2/3

    SimConfig.withWave.allOptimisation.doSim(new Puncturing(16, mask_seq_1_2)) { dut =>

        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.last #= false
        dut.clockDomain.waitSampling(10)
        dut.io.raw_data.valid #= true
        for(idx <- 0 until 200){
            //   dut.io.raw_data.fragment.randomize() // 85
            dut.io.raw_data.fragment #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.fragment #= 255
        dut.io.raw_data.last #= true
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.last #= false
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(300)
    }
}



