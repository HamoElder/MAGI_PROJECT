package magiRF.packages.PackageGen

import magiRF.packages.PackageGen.{StreamPkgGen, StreamPkgGenConfig}
import spinal.core.sim._

object StreamPkgGenSimApp extends App{

    val pkg_gen_config = StreamPkgGenConfig(32, 8, useLittleEndian = false)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new StreamPkgGen(pkg_gen_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.pkg_data.ready #= true
            dut.clockDomain.waitSampling(1)
            for(idx <- 0 until 100){
                //				dut.io.raw_data.valid #= true
                dut.io.raw_data.valid.randomize()
                dut.io.pkg_data.ready.randomize()
                dut.io.raw_data.payload.data #= 0x04030201
                dut.io.raw_data.payload.strb.randomize()
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(10)
        }
}
