package magiRF.modules.Filters.CIC

import spinal.core._
import spinal.lib._

case class CICComb(dataInWidth: Int, dataOutWidth: Int, stages: Int) extends Component{
    def dataInType: SInt = SInt(dataInWidth bits)
    def dataOutType: SInt = SInt(dataOutWidth bits)

    val io = new Bundle{
        val raw_data = slave(Flow(dataInType))
        val result_data = master(Flow(dataOutType))
    }
    noIoPrefix()

    val internal_data_vec = Vec(dataOutType, stages)
    val delay_data_vec = Vec(Reg(dataOutType) init(0), stages)
    val pipe_data_vec = Vec(Reg(dataOutType) init(0), stages)

    val result_data_payload = Reg(dataOutType) init(0)
    val result_data_valid = Reg(Bool()) init(False)

    for(stage <- 0 until stages){
        when(io.raw_data.valid){
            delay_data_vec(stage) := pipe_data_vec(stage)
            if(stage == 0){
                pipe_data_vec(stage) := io.raw_data.payload.resized
            }else{
                pipe_data_vec(stage) := internal_data_vec(stage - 1)
            }
        }
        internal_data_vec(stage) :=  pipe_data_vec(stage) -  delay_data_vec(stage)
    }

    when(io.raw_data.valid){
        result_data_valid := True
        result_data_payload := internal_data_vec(stages - 1)
    }.otherwise{
        result_data_valid := False
    }

    io.result_data.valid := result_data_valid
    io.result_data.payload := result_data_payload
}
