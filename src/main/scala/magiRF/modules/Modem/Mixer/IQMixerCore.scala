package magiRF.modules.Modem.Mixer

import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class IQMixerCore(config: IQMixerConfig) extends Component{
    val io = new Bundle{
        val base_iq = slave(Flow(IQBundle(config.dataBaseType)))
        val carrier_iq = slave(Flow(IQBundle(config.dataCarrierType)))

        val if_iq = master(Flow(config.dataIfType))
    }
    noIoPrefix()

    val base_i_data = Reg(config.dataBaseType) init(0)
    val base_q_data = Reg(config.dataBaseType) init(0)

    val carrier_i_data = Reg(config.dataCarrierType) init(0)
    val carrier_q_data = Reg(config.dataCarrierType) init(0)

    val if_iq_valid = Reg(Bool()) init(False)
    val if_i_data = Reg(config.dataIfType) init(0)
    val if_q_data = Reg(config.dataIfType) init(0)
    val if_iq_data = Reg(config.dataIfType) init(0)

    val iq_en = RegNext(io.base_iq.valid && io.carrier_iq.valid) init(False)

    when(io.base_iq.fire){
        base_i_data := io.base_iq.cha_i
        base_q_data := io.base_iq.cha_q
    }

    when(io.carrier_iq.valid){
        carrier_i_data := io.carrier_iq.cha_i
        carrier_q_data := io.carrier_iq.cha_q
    }

    when(iq_en){
        if_iq_valid := True
        if_iq_data := if_i_data + if_q_data
        if((config.dataBaseWidth + config.dataCarrierWidth) > config.dataIfWidth){
            if_i_data := (base_i_data * carrier_i_data).ceil(config.dataBaseWidth + config.dataCarrierWidth - config.dataIfWidth)
            if_q_data := (base_q_data * carrier_q_data).ceil(config.dataBaseWidth + config.dataCarrierWidth - config.dataIfWidth)
        }else{
            if_i_data := (base_i_data * carrier_i_data).resized
            if_q_data := (base_q_data * carrier_q_data).resized
        }
    }.otherwise{
        if_iq_valid := False
        if_i_data := 0
        if_q_data := 0
    }

    // Connections
    io.if_iq.valid := if_iq_valid
    io.if_iq.payload := if_iq_data

}

