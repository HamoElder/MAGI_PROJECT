package magiRF.modules.Filters.CIC

import spinal.core._
import spinal.lib._

case class CICIntegrator(dataInWidth: Int, dataOutWidth: Int, stages: Int) extends Component{
    def dataInType: SInt = SInt(dataInWidth bits)
    def dataOutType: SInt = SInt(dataOutWidth bits)

    val io = new Bundle{
        val raw_data = slave(Flow(dataInType))
        val result_data = master(Flow(dataOutType))
    }
    noIoPrefix()

    val raw_data_buf = RegNext(io.raw_data.payload)

    val internal_data_vec = Vec(Reg(dataOutType) init(0), stages)
    val internal_en = Reg(Bits(stages + 1 bits)) init(0)

    internal_en := (internal_en ## io.raw_data.valid).resized
    when(internal_en(0)){
        internal_data_vec(0) := internal_data_vec(0) + raw_data_buf
    }

    for(stage <- 1 until stages){
        when(internal_en(stage)){
            internal_data_vec(stage) := internal_data_vec(stage) + internal_data_vec(stage - 1)
        }
    }

    io.result_data.valid := internal_en(stages)
    io.result_data.payload := internal_data_vec(stages - 1)

}
