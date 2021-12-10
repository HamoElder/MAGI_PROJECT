package magiRF.modules.Modem

import magiRF.modules.Modem.Demodulator.extensions.{lookUpDemodConfig, lookUpDemod}


object lookUpDemodSimpApp extends App{
    import spinal.core.sim._

    val lookup_demod_bench = lookUpDemodConfig(8, 16)
    SimConfig.withWave.doSim(new lookUpDemod(lookup_demod_bench)){ dut =>

        dut.clockDomain.forkStimulus(5)
        dut.io.data_flow.mod_iq.valid #= false

    }
}