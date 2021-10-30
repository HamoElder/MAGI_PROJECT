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

