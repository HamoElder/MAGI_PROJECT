package magiSOC.system.Ram

import spinal.core.sim._
import spinal.core._
import spinal.lib._

object Axi4RamSimApp extends App {
    def linearGen(): Seq[Bits] = {
        var linearTable = Seq[Bits]()
        for (idx <- 0 until 2048) {
            linearTable = linearTable :+ B(idx, 32 bits)
        }
        linearTable
    }

    val axi4RamConfig = Axi4RamConfig(32, genFunc = linearGen, outStanding = 4)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new Axi4Ram(axi4RamConfig)) { dut =>
            dut.clockDomain.forkStimulus(5)

            // Init
            dut.io.axi4.ar.valid #= false
            dut.io.axi4.r.ready #= false
            dut.io.axi4.aw.valid #= false
            dut.io.axi4.w.valid #= false
            dut.io.axi4.w.strb #= 0
            dut.io.axi4.w.last #= false
            dut.io.axi4.b.ready #= true
            dut.clockDomain.waitSampling(10)
            // Write
            dut.io.axi4.r.ready #= true

            dut.io.axi4.aw.valid #= true
            dut.io.axi4.aw.addr #= 0
            dut.io.axi4.aw.burst #= 1
            dut.io.axi4.aw.len #= 255
            dut.io.axi4.aw.size #= 2
            dut.clockDomain.waitSampling(1)
            dut.io.axi4.aw.valid #= false
            dut.clockDomain.waitSamplingWhere(dut.io.axi4.w.ready.toBoolean)
            for (idx <- 0 until 255) {
                dut.io.axi4.w.valid #= true
                dut.io.axi4.w.data #= 255 - idx
                dut.io.axi4.w.strb #= 15
                dut.clockDomain.waitSampling(1)
            }
            dut.io.axi4.w.data #= 255
            dut.io.axi4.w.last #= true
            dut.clockDomain.waitSampling(1)
            dut.io.axi4.w.last #= false
            dut.io.axi4.w.valid #= false

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

            // Write
            dut.io.axi4.aw.valid #= true
            dut.io.axi4.aw.addr #= 0
            dut.io.axi4.aw.burst #= 1
            dut.io.axi4.aw.len #= 0
            dut.io.axi4.aw.size #= 2
            dut.clockDomain.waitSampling(1)
            dut.io.axi4.aw.valid #= false
            dut.clockDomain.waitSamplingWhere(dut.io.axi4.w.ready.toBoolean)

            dut.io.axi4.w.valid #= true
            dut.io.axi4.w.data #= 255
            dut.io.axi4.w.strb #= 15
            dut.io.axi4.w.last #= true
            dut.clockDomain.waitSampling(1)
            dut.io.axi4.w.last #= false
            dut.io.axi4.w.valid #= false

            dut.clockDomain.waitSampling(2000)
        }
}
