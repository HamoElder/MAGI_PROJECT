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

object CICCombSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new  CICComb(21, 17, 3)){ dut =>
        dut.clockDomain.forkStimulus(5)

        dut.io.raw_data.valid #= false
        dut.io.raw_data.payload #= 0
        dut.clockDomain.waitSampling(1)
        dut.clockDomain.reset
        //        dut.io.raw_data.payload(1) #= 0
        dut.clockDomain.waitSampling(10)
        var valid_bool = false
        for(idx <- 1 until 128){
            valid_bool = !valid_bool
            dut.io.raw_data.valid #= true
            dut.io.raw_data.payload #= (128 * Math.sin(idx*2*Math.PI / 128)).toInt
            //            dut.io.raw_data.payload(1) #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(10)
    }
}
