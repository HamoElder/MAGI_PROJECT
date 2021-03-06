package utils.common.Sort

import spinal.core._
import spinal.lib._
import utils.common.ShiftReg.ShiftRegister



case class BitonicSortMDC(dataWidth: Int, dataSize: Int, useSigned: Boolean, useIndex: Boolean) extends Component {
    def payloadDataType: Bits = Bits(dataWidth bits)
    def idxDataWidth: Int = log2Up(dataSize)
    def idxDataType: UInt = UInt(idxDataWidth bits)
    def stages: Int = log2Up(dataSize)

    def dataType: IdxWithData = IdxWithData(payloadDataType, idxDataType, useSigned, useIndex)

    val io = new Bundle{
        val ascending_order = in(Bool())
        val raw_data = slave(Stream(dataType))
        val sorted_data = master(Flow(new Bundle{
            val low = dataType
            val high = dataType
        }))
    }
    noIoPrefix()
    val cnt: UInt = Reg(UInt(stages + 1 bits)) init(0)
    when(io.raw_data.fire || cnt >= dataSize){
        cnt := Mux(cnt === (dataSize * 3 / 2 - 1), U(0), cnt + 1)
    }

    val raw_data_free_run = io.raw_data.fire || (cnt >= dataSize)

    val out0_buf = Vec(dataType, stages)
    val out1_buf = Vec(dataType, stages)

    out0_buf(0) := io.raw_data.payload
    out1_buf(0) := io.raw_data.payload

    for (idx <- 0 until stages - 1){
        val cmp_bf = CmpUnit(ShiftRegister(out0_buf(idx),(dataSize / Math.pow(2, idx + 1)).toInt, raw_data_free_run), out1_buf(idx), io.ascending_order)
        val sw_ctrl = cnt(stages - 2 - idx)
        val cmp_sw = CmpSwitch(cmp_bf._1, ShiftRegister(cmp_bf._2, (dataSize / Math.pow(2, idx + 2)).toInt, raw_data_free_run), sw_ctrl)
        out0_buf(idx + 1) := cmp_sw._1
        out1_buf(idx + 1) := cmp_sw._2
    }
    val final_cmp_bf = CmpUnit(ShiftRegister(out0_buf(stages - 1), 1), out1_buf(stages - 1), raw_data_free_run)
    io.sorted_data.low := RegNext(final_cmp_bf._1)
    io.sorted_data.high := RegNext(final_cmp_bf._2)
    io.sorted_data.valid := cnt > (dataSize - 1)
    io.raw_data.ready := cnt < dataSize
}


object BitonicSortMDCBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new BitonicSortMDC(16, 16, true, false)).printPruned().printUnused()
    }
}

object BitonicSortMDCSimApp extends App{
    import spinal.core.sim._
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new BitonicSortMDC(16, 16, false, false)){dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.raw_data.data #= 0
//            dut.io.raw_data.idx #= 0
            dut.io.ascending_order #= false
            dut.clockDomain.waitSampling(10)
            val data_seq = Seq[Int](3, 5, 8, 9, 10, 12, 14, 20, 95, 90, 60, 40, 35, 23, 18, 0)
            for(idx <- 0 until 16){
                dut.io.raw_data.data #= data_seq(idx)
//                dut.io.raw_data.idx #= idx
                dut.io.raw_data.valid #= true
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(128)
        }
}