package magiRF.packages.CFO
import spinal.core.sim._


object PhaseRotatorSimApp extends App{

    val phase_rotator_config = PhaseRotatorConfig(16, 16)
    SimConfig.withWave.doSim(new PhaseRotator(phase_rotator_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.phiCorrect #= 0
        dut.io.rotated_data.ready #= true
        dut.clockDomain.waitSampling(10)
        for(idx <- 0 until 1600){
            dut.io.raw_data.valid #= true
            dut.io.raw_data.cha_i #= (Math.cos(2 * Math.PI * (idx % 160) / 160) * 4096).toInt
            dut.io.raw_data.cha_q #= (Math.sin(2 * Math.PI * (idx % 160) / 160)  * 4096).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1000)
    }
}
