package magiRF.modules.Modem.Mixer

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axilite.AxiLite4Config
import utils.bus.IQBundle.IQBundle

case class IQDemixerConfig(
                              dataIfWidth        : Int,
                              dataCarrierWidth   : Int,
                              dataBaseWidth      : Int,
                              channelsNum        : Int     = 2
                          ){
    def dataIfType: SInt = SInt(dataIfWidth bits)
    def dataCarrierType: SInt = SInt(dataCarrierWidth bits)
    def dataBaseType: SInt = SInt(dataBaseWidth bits)

}


case class IQDemixer(config: IQDemixerConfig) extends Component {
    val io = new Bundle{
        val if_iq = Vec(slave(Flow(config.dataIfType)), config.channelsNum)

        val carries_iq = slave(Flow(IQBundle(config.dataCarrierType)))
        val base_iq = Vec(master(Flow(IQBundle(config.dataBaseType))), config.channelsNum)
    }
    noIoPrefix()

    for(idx <- 0 until config.channelsNum){
        val demixer_core = IQDemixerCore(config)
        demixer_core.io.if_iq.valid := io.if_iq(idx).valid
        demixer_core.io.if_iq.payload := io.if_iq(idx).payload

        demixer_core.io.carries_iq.valid := io.carries_iq.valid
        demixer_core.io.carries_iq.cha_i := io.carries_iq.cha_i
        demixer_core.io.carries_iq.cha_q := io.carries_iq.cha_q

        io.base_iq(idx).valid := demixer_core.io.base_iq.valid
        io.base_iq(idx).cha_i := demixer_core.io.base_iq.cha_i
        io.base_iq(idx).cha_q := demixer_core.io.base_iq.cha_q
    }

}

object IQDemixerBench{
    def main(args: Array[String]): Unit = {
    val iqDeMixerConfig = IQDemixerConfig(32, 16, 8, 2)
    SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
    targetDirectory = "rtl").generateSystemVerilog(new IQDemixer(iqDeMixerConfig)).printPruned()
    }
}


//Sim

object IQDeMixerSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random

    val iqDeMixerConfig = IQDemixerConfig(16, 16, 16, 1)
    SimConfig.withWave.doSim(new IQDemixer(iqDeMixerConfig)){ dut =>
        dut.clockDomain.forkStimulus(5)
        //        SimTimeout(10*50000)

        dut.io.if_iq(0).valid #= false
        dut.io.carries_iq.valid #= false

        dut.clockDomain.waitSampling(10)
        dut.io.carries_iq.valid #= true
        dut.io.if_iq(0).valid #= true

        for(idx <- 0 until 4096){
            dut.io.if_iq(0).payload #= (100 * Math.cos(2 * Math.PI * 5 * idx / 4096) * 127 * Math.cos(2 * Math.PI * 100 * idx / 4096)
                + 100 * Math.cos(2 * Math.PI * 5 * idx / 4096) * 127 * Math.sin(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.io.carries_iq.cha_i #= (127 * Math.sin(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.io.carries_iq.cha_q #= (127 * Math.cos(2 * Math.PI * 100 * idx / 4096)).toInt
            dut.clockDomain.waitSampling()
        }

        dut.io.if_iq(0).valid #= false
        dut.io.carries_iq.valid #= false
        dut.clockDomain.waitSampling(10000)
    }
}


