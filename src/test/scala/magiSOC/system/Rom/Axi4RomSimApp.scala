package magiSOC.system.Rom

import spinal.core.sim._
import spinal.core._
import spinal.lib._


object Axi4RomSimApp extends App {
    def linearGen(): Seq[Bits] = {
        var linearTable = Seq[Bits]()
        for (idx <- 0 until 2048) {
            linearTable = linearTable :+ B(idx, 32 bits)
        }
        linearTable
    }

    val axi4RomConfig = Axi4RomConfig(linearGen)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new Axi4Rom(axi4RomConfig)) { dut =>
            dut.clockDomain.forkStimulus(5)

            // Init
            dut.io.axi4.ar.valid #= false
            dut.io.axi4.r.ready #= false
            dut.clockDomain.waitSampling(10)
            dut.io.axi4.r.ready #= true
            dut.clockDomain.waitSampling(1)
            // Read
            dut.io.axi4.ar.valid #= true
            dut.io.axi4.ar.addr #= 0
            dut.io.axi4.ar.burst #= 1
            dut.io.axi4.ar.len #= 15
            dut.io.axi4.ar.size #= 2

            dut.clockDomain.waitSampling(1)
            dut.io.axi4.ar.addr #= 1024
            dut.io.axi4.ar.burst #= 1
            dut.io.axi4.ar.len #= 0
            dut.io.axi4.ar.size #= 2
            dut.clockDomain.waitSampling(1)
            dut.io.axi4.ar.addr #= 2048
            dut.io.axi4.ar.burst #= 1
            dut.io.axi4.ar.len #= 255
            dut.io.axi4.ar.size #= 2
            dut.clockDomain.waitSampling(1)
            dut.io.axi4.ar.addr #= 4096
            dut.io.axi4.ar.burst #= 0
            dut.io.axi4.ar.len #= 255
            dut.io.axi4.ar.size #= 2
            dut.clockDomain.waitSampling(1)
            dut.io.axi4.ar.addr #= 7168
            dut.io.axi4.ar.burst #= 1
            dut.io.axi4.ar.len #= 255
            dut.io.axi4.ar.size #= 2
            dut.clockDomain.waitSampling(1)
            dut.io.axi4.ar.valid #= false
            dut.clockDomain.waitSampling(10)
            dut.clockDomain.waitSampling(2000)
        }
}

