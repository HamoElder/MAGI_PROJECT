package magiRF.modules.Modem

import magiRF.modules.Modem.Modulator.extensions.{GMSKMod, GMSKModConfig}


object GMSKModSimApp extends App{
    import spinal.core.sim._
    val gmskMod_config = GMSKModConfig(16, 8, 0.3, Math.PI / 2, 4)
    def raw_seq:Seq[Int] = Seq[Int](1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1)
    SimConfig.withWave.doSim(new GMSKMod(gmskMod_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)
        dut.io.unit_data.valid #= false
        dut.io.unit_data.last #= false
        dut.clockDomain.waitSampling(1)

        for(idx <- 0 until gmskMod_config.SamplesPerSymbol * raw_seq.length){
            //            dut.io.unit_data.fragment.randomize()
            dut.io.unit_data.fragment #= raw_seq(idx / gmskMod_config.SamplesPerSymbol)
            dut.io.unit_data.valid #= true
            dut.clockDomain.waitSampling(1)
        }
        dut.io.unit_data.fragment #= 1
        dut.io.unit_data.valid #= true
        dut.io.unit_data.last #= true
        dut.clockDomain.waitSampling(1)
        dut.io.unit_data.valid #= false
        dut.io.unit_data.last #= false
        dut.clockDomain.waitSampling(100)
    }
}

