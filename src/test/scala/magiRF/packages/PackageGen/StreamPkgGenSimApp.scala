package magiRF.packages.PackageGen

import spinal.core.LITTLE
import spinal.core.sim._


object StreamPkgGenSimApp extends App{

    val pkg_gen_config = StreamPkgGenConfig(32, 8, maxSlicesCnt = 4096, endianness = LITTLE)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new StreamPkgGen(pkg_gen_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.stream.valid #= false
            dut.io.raw_data.stream.last #= false
            dut.io.pkg_data.ready #= true
            dut.clockDomain.waitSampling(1)
            dut.io.slices_limit #= 32
            for(idx <- 0 until 500){
                dut.io.raw_data.stream.valid #= true
                dut.io.pkg_data.ready #= true
//                dut.io.raw_data.valid.randomize()
//                dut.io.pkg_data.ready.randomize()
                dut.io.raw_data.stream.data #= 0x04030201
//                dut.io.raw_data.payload.strb.randomize()
                dut.io.raw_data.stream.strb #= 15
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.stream.last #= true
            dut.io.raw_data.stream.valid #= true
            dut.io.raw_data.stream.data #= 0x12345678
            dut.io.raw_data.stream.strb #= 15
            dut.clockDomain.waitSampling(1)
            dut.io.raw_data.stream.last #= false
            dut.io.raw_data.stream.valid #= false
            dut.clockDomain.waitSampling(50)
        }
}
