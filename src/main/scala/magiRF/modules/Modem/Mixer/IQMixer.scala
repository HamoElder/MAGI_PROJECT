package magiRF.modules.Modem.Mixer

import spinal.core._
import spinal.lib._

import utils.bus.IQBundle.IQBundle

case class IQMixerConfig(
                            dataIfWidth        : Int,
                            dataCarrierWidth   : Int,
                            dataBaseWidth      : Int,
                            channelsNum        : Int     = 2
                        ){
    def dataIfType: SInt = SInt(dataIfWidth bits)
    def dataCarrierType: SInt = SInt(dataCarrierWidth bits)
    def dataBaseType: SInt = SInt(dataBaseWidth bits)
}


case class IQMixer(config: IQMixerConfig) extends Component{
    val io = new Bundle{
        val base_iq = Vec(slave(Flow(IQBundle(config.dataBaseType))), config.channelsNum)
        val carries_iq = slave(Flow(IQBundle(config.dataCarrierType)))
        // Intermediate Frequency
        val if_iq = Vec(master(Flow(config.dataIfType)), config.channelsNum)
    }
    noIoPrefix()

    for(idx <- 0 until config.channelsNum){
        val mixer_core = IQMixerCore(config)
        // Input
        mixer_core.io.base_iq.valid := io.base_iq(idx).valid
        mixer_core.io.base_iq.cha_i := io.base_iq(idx).cha_i
        mixer_core.io.base_iq.cha_q := io.base_iq(idx).cha_q

        mixer_core.io.carrier_iq.valid := io.carries_iq.valid
        mixer_core.io.carrier_iq.cha_i := io.carries_iq.cha_i
        mixer_core.io.carrier_iq.cha_q := io.carries_iq.cha_q

        // Output
        io.if_iq(idx).valid := mixer_core.io.if_iq.valid
        io.if_iq(idx).payload := mixer_core.io.if_iq.payload
    }
}

object IQMixerBench {
    def main(args: Array[String]): Unit = {
        val iqMixerConfig = IQMixerConfig(32, 16, 16, 1)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/IQMixer").generateSystemVerilog(new IQMixer(iqMixerConfig)).printPruned()
    }
}

//Sim
object IQMixerSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random

    val iqMixerConfig = IQMixerConfig(32, 16, 16, 1)
    SimConfig.withWave.doSim(new IQMixer(iqMixerConfig)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)

        dut.io.base_iq(0).valid #= false
        dut.io.carries_iq.valid #= false

        dut.clockDomain.waitSampling(10)
        dut.io.carries_iq.valid #= true
        dut.io.base_iq(0).valid #= true

        for(idx <- 0 until 4096){
            dut.io.base_iq(0).cha_i #= (10000 * Math.cos(2 * Math.PI * 5 * idx / 4096)).toInt
            dut.io.base_iq(0).cha_q #= (10000 * Math.cos(2 * Math.PI * 5 * idx / 4096)).toInt
            dut.io.carries_iq.cha_i #= (127 * Math.sin(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.io.carries_iq.cha_q #= (127 * Math.cos(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.io.carries_iq.valid #= false
        dut.clockDomain.waitSampling(10000)
    }
}

