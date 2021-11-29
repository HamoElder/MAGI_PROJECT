package magiRF.packages.CFO
import Misc.math.Complex
import spinal.core.sim._


object PhaseRotatorSimApp extends App{

    val phase_rotator_config = PhaseRotatorConfig(16, 16, 16)
    SimConfig.withWave.doSim(new PhaseRotator(phase_rotator_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.io.delta_phi.payload.raw #= -((1 << 11) + (1 << 8) + (1 << 3) + (1 << 1))
        dut.io.delta_phi.valid #= true
        dut.clockDomain.waitSampling(10)
        val data = Complex(128, 512)
        for(idx <- 0 until 4096){
            dut.io.raw_data.valid #= true
//            dut.io.raw_data.cha_i #= 512
//            dut.io.raw_data.cha_q #= 512
            val fs = Complex(Math.cos(2 * Math.PI * 0.08991321736197408 * idx / 16) ,
                             Math.sin(2 * Math.PI * 0.08991321736197408 * idx / 16))
            val data_shift = data * fs
            dut.io.raw_data.cha_i #= (data_shift.re).toInt
            dut.io.raw_data.cha_q #= (data_shift.im).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(100)
    }
}
