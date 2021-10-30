package magiRF.modules.Modem

import magiRF.modules.Modem.DDS.{DDS, DDS_Config}
import spinal.core.sim._
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
import scala.util.Random
import spinal.core._

object DDSSimApp extends App{

    val dds_config = DDS_Config(16, 10)

    SimConfig
        .withWave
        //        .allOptimisation
        .doSim(new DDS(dds_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.phase_limit #= dds_config.memorySize - 1
            dut.io.phase_offset #= 0
            dut.io.phase_inc #= 2
            dut.io.sync_en #= true
            dut.io.channel_en #= false
            dut.clockDomain.waitSampling(10)
            for(i <- 0 until 5000){
                dut.io.channel_en.randomize()
                dut.clockDomain.waitSampling(1)
            }
            dut.io.channel_en #= false
        }
}

