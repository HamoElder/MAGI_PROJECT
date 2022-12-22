package magiRF.modules.Filters.FIR

import spinal.core._
import spinal.lib._

case class DirectFIRCore(dataWidth: Int, filteredDataWidth: Int, coffDataWidth: Int, stages : Int) extends Component{
    def dataType: SInt = SInt(dataWidth bits)
    def filteredDataType: SInt = SInt(filteredDataWidth bits)
    def coffDataType: SInt = SInt(coffDataWidth bits)

    val io = new Bundle{
        val raw_data = slave(Flow(dataType))
        val coff_data = in(Vec(coffDataType, stages))
        val filtered_data = master(Flow(filteredDataType))
    }
    noIoPrefix()

    val internal_en = Reg(Bits(3 bits)) init(0)
    internal_en := (internal_en ## io.raw_data.valid).resized

    val raw_data_vec = Vec(Reg(dataType) init(0), stages)
    val mult_data_vec = Vec(Reg(filteredDataType) init(0), stages)
    when(io.raw_data.valid){
        raw_data_vec(0) := io.raw_data.payload
        for(stage <- 1 until stages){
            raw_data_vec(stage) := raw_data_vec(stage - 1)
        }
    }
    when(internal_en(0)){
        for(stage <- 0 until stages){
            mult_data_vec(stage) := (io.coff_data(stage) * raw_data_vec(stage)).resized
        }
    }
    val sum_result = Reg(filteredDataType) init(0)
    when(internal_en(1)){
        sum_result := mult_data_vec.reduceBalancedTree(_+_)
    }
    io.filtered_data.valid := internal_en(2)
    io.filtered_data.payload := sum_result
}

case class DirectFIR(dataWidth: Int, filteredDataWidth: Int, H: List[Int],  chaNum: Int, reloadableCoff: Boolean = false) extends Component {
    def coffDataWidth: Int = log2Up(H.map({scala.math.abs}).max + 1) + 1
    def stages: Int = H.size
    def dataType: SInt = SInt(dataWidth bits)
    def filteredDataType: SInt = SInt(filteredDataWidth bits)
    def coffDataType: SInt = SInt(coffDataWidth bits)
    def coffDataSize: Int = log2Up(H.length + 1)

    val io = new Bundle{
        val raw_data = slave(Flow(Vec(dataType, chaNum)))
        val filtered_data = master(Flow(Vec(filteredDataType, chaNum)))

        val w_en = if(reloadableCoff) in(Bool()) else null
        val w_addr = if(reloadableCoff) in(UInt(coffDataSize bits)) else null
        val w_data = if(reloadableCoff) in(coffDataType) else null
    }
    noIoPrefix()

    val coff_mem = Vec(Reg(coffDataType), H.length)
    if(reloadableCoff){
        when(io.w_en){
            coff_mem(io.w_addr) := io.w_data
        }
    } else{
        for(idx <- H.indices){
            coff_mem(idx) := H(idx)
        }
    }
    val filtered_valid_vec = Vec(Bool(), chaNum)
    for(cha <- 0 until chaNum){
        val direct_fir_core = DirectFIRCore(dataWidth, filteredDataWidth, coffDataWidth, stages)
        direct_fir_core.io.raw_data.payload := io.raw_data.payload(cha)
        direct_fir_core.io.raw_data.valid := io.raw_data.valid
        for(stage <- 0 until stages){
            direct_fir_core.io.coff_data(stage) := coff_mem(stage)
        }
        io.filtered_data.payload(cha) := direct_fir_core.io.filtered_data.payload
        filtered_valid_vec(cha) := direct_fir_core.io.filtered_data.valid
    }
    io.filtered_data.valid := filtered_valid_vec.reduce(_ & _)
}


object DirectFIRFilterBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/DirectFIR").generateSystemVerilog(new DirectFIR(12, 29, List(6,0,-4,-3,5,6,-6,-13,7,44,64,44,7,-13,-6,6,5,-3,-4,0,6), chaNum = 1)).printUnused()
    }
}
