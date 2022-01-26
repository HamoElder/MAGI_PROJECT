package magiRF.modules.Filters.IIR

import spinal.core._
import spinal.lib._


case class IIR_II_Core(dataWidth: Int, Hx: List[Int], Hy: List[Int]) extends Component {
//    require((Hx.length + 1) == Hy.length, "The size of Coefficient must be matched.")
    val coffDataWidth : Int = log2Up((Hx ++ Hy).max + 1) + 1
    val filteredDataWidth: Int = dataWidth + coffDataWidth
    val io = new Bundle{
        val raw_data = slave(Flow(SInt(dataWidth bits)))
        val filtered_data = master(Flow(SInt(filteredDataWidth bits)))
    }
    noIoPrefix()
    val coff_x_mem = Vec(SInt(coffDataWidth bits), Hx.length)
    val coff_y_mem = Vec(SInt(coffDataWidth bits), Hy.length)
    for(idx <- Hx.indices){
        coff_x_mem(idx) := Hx(idx)
    }
    for(idx <- Hy.indices){
        coff_y_mem(idx) := Hy(idx)
    }

    val raw_data_buf = RegNext(io.raw_data.payload) init(0)
    val raw_data_valid = RegNext(io.raw_data.valid) init(False)
    val raw_data_delay_vec = Vec(Reg(SInt(filteredDataWidth bits)) init(0), Hx.length)

    val x_mult = Vec(SInt(filteredDataWidth bits), Hx.length)
    for(idx <- Hx.indices){
        x_mult(idx) := (raw_data_delay_vec(idx) * coff_x_mem(idx)).resized
    }
    val x_sum = x_mult.reduce(_ + _) + raw_data_buf

    val y_mult = Vec(SInt(filteredDataWidth bits), Hy.length)
    for(idx <- 1 until Hy.length){
        y_mult(idx) := (raw_data_delay_vec(idx) * coff_y_mem(idx)).resized
    }
    y_mult(0) := (coff_y_mem(0) * x_sum).resized
    val y_sum = y_mult.reduce(_ + _)

    when(raw_data_valid){
        for(idx <- 1 until Hx.length){
            raw_data_delay_vec(idx) := raw_data_delay_vec(idx - 1)
        }
        raw_data_delay_vec(0) := x_sum
    }
    io.filtered_data.valid := raw_data_valid
    io.filtered_data.payload := y_sum
}


case class IIR_II_Filter(dataWidth: Int, Hx: List[Int], Hy: List[Int], chaNum: Int) extends Component {
    val coffDataWidth : Int = log2Up((Hx ++ Hy).max + 1) + 1
    val filteredDataWidth: Int = dataWidth + coffDataWidth
    val io = new Bundle{
        val raw_data: Flow[Vec[SInt]] = slave(Flow(Vec(SInt(dataWidth bits), chaNum)))
        val filtered_data: Flow[Vec[SInt]] = master(Flow(Vec(SInt(filteredDataWidth bits), chaNum)))
    }
    noIoPrefix()

    val filtered_valid_vec = Vec(Bool(), chaNum)
    for(cha <- 0 until chaNum){
        val iir_ii_core = IIR_II_Core(dataWidth, Hx, Hy)
        iir_ii_core.io.raw_data.valid := io.raw_data.valid
        iir_ii_core.io.raw_data.payload := io.raw_data.payload(cha)
        io.filtered_data.payload(cha) := iir_ii_core.io.filtered_data.payload
        filtered_valid_vec(cha) := iir_ii_core.io.filtered_data.valid

    }
    io.filtered_data.valid := filtered_valid_vec.reduce(_ & _)
}


object IIR_II_FilterBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/IIR_II_Filter").generateSystemVerilog(new IIR_II_Filter(16, List(3, 2, 2, 3), List(1024, -2604, 2237, -647), chaNum = 2)).printUnused()
    }
}