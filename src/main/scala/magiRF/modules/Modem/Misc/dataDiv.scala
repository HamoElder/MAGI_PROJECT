package magiRF.modules.Modem.Misc

import spinal.core._
import spinal.lib._

case class dataDivConfig(
                         baseDataWidth      : Int,
                         unitDataWidth      : Int
                     ){
    def baseDataType: UInt = UInt(baseDataWidth bits)
    def unitDataType: UInt = if(unitDataWidth == 0) baseDataType else UInt(unitDataWidth bits)
    def cntType: UInt = UInt(cntWidth bits)

    def cntWidth: Int = log2Up(baseDataWidth)
    def cntStep: Int = if(unitDataWidth == 0) 0 else unitDataWidth
    def cntInit: Int = (1 << cntWidth) - baseDataWidth
    def cntLimit: Int = if(unitDataWidth == 0) 0 else (1 << cntWidth) - cntStep
}

case class dataDiv(config: dataDivConfig) extends Component {
    val io = new Bundle{
        val base_data = slave(Stream(config.baseDataType))

        val unit_data = master(Flow(config.unitDataType))
    }

    val unit_valid = Reg(Bool) init(False)
    val base_cnt = Reg(config.cntType) init(config.cntLimit)
    val base_ready = (config.cntLimit) === base_cnt
    val base_buffer = Reg(config.baseDataType) init(0)

    when(io.base_data.fire){
        base_cnt := (base_cnt + config.cntStep + config.cntInit).resized
        base_buffer := io.base_data.payload

        unit_valid := True
    }.elsewhen(base_cnt === config.cntLimit){
        base_buffer := base_buffer |>> config.cntStep

        unit_valid := False
    }.otherwise{
        base_cnt := (base_cnt + config.cntStep).resized
        base_buffer := base_buffer |>> config.cntStep

        unit_valid := True
    }

    io.base_data.ready := base_ready

    io.unit_data.valid := unit_valid
    io.unit_data.payload := base_buffer.resized
}


