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


object CICIntegratorSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new  CICIntegrator(12, 21, 3)){ dut =>
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
            dut.io.raw_data.payload #= idx
            //            dut.io.raw_data.payload(1) #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(10)
    }
}
