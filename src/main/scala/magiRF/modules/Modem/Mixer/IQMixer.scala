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
