package magiRF.modules.Modem.Mixer

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class IQDemixerCore(config: IQDemixerConfig) extends Component {

    val io = new Bundle{
        val if_iq = slave(Flow(config.dataIfType))

        val carries_iq = slave(Flow(IQBundle(config.dataCarrierType)))
        val base_iq = master(Flow(IQBundle(config.dataBaseType)))
    }
    noIoPrefix()

    val if_iq_data = Reg(config.dataIfType) init(0)

    val carries_i_data = Reg(config.dataCarrierType) init(0)
    val carries_q_data = Reg(config.dataCarrierType) init(0)

    val base_iq_valid = Reg(Bool) init(False)
    val base_i_data = Reg(config.dataBaseType) init(0)
    val base_q_data = Reg(config.dataBaseType) init(0)

    val iq_en = RegNext(io.if_iq.valid && io.carries_iq.valid) init(False)

    when(io.if_iq.valid){
        if_iq_data := io.if_iq.payload
    }

    when(io.carries_iq.valid){
        carries_i_data := io.carries_iq.cha_i
        carries_q_data := io.carries_iq.cha_q
    }

    when(iq_en){
        base_iq_valid := True
        base_i_data := (if_iq_data * carries_i_data).ceil(config.dataCarrierWidth + config.dataIfWidth - config.dataBaseWidth)
        base_q_data := (if_iq_data * carries_q_data).ceil(config.dataCarrierWidth + config.dataIfWidth - config.dataBaseWidth)
    }.otherwise{
        base_iq_valid := False
        base_i_data := 0
        base_q_data := 0
    }

    // Connections
    io.base_iq.valid := base_iq_valid
    io.base_iq.cha_i := base_i_data
    io.base_iq.cha_q := base_q_data
}
