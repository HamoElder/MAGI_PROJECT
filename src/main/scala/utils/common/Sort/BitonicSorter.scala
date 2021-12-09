package utils.common.Sort

import spinal.lib._
import spinal.core._
import utils.common.ShiftReg.ShiftRegister


case class BitonicSorter[T <: Data](dataWidth: Int, dataSize: Int, useSigned: Boolean, useIndex: Boolean) extends Component {
    def payloadDataType: Bits = Bits(dataWidth bits)
    def idxDataWidth: Int = log2Up(dataSize)
    def idxDataType: UInt = UInt(idxDataWidth bits)
    def dataType: IdxWithData = IdxWithData(payloadDataType, idxDataType, useSigned, useIndex)
    def stages: Int = log2Up(dataSize)
    def delay: Int = (0 to stages).sum + 1

    val io = new Bundle{
        val raw_data = slave(Flow(Vec(payloadDataType, dataSize)))
        val ascending_order = in(Bool())
        val sorted_data = master(Flow(Vec(dataType, dataSize)))
    }
    noIoPrefix()

    var reg_data_seq: Seq[Vec[IdxWithData]] = Seq[Vec[IdxWithData]]()
    val reg_data_buf: Vec[IdxWithData] = Vec(Reg(dataType), dataSize)
    when(io.raw_data.valid){
        for(idx <- 0 until dataSize){
            reg_data_buf(idx).data := io.raw_data.payload(idx)
            if(useIndex){
                reg_data_buf(idx).idx := idx
            }
        }
        reg_data_seq = reg_data_seq :+ reg_data_buf
    }

    /**
     * Merge
     */
    for(stage <- 0 until stages - 1){
        for(step <- (0 to stage).reverse){
            val reg_result_buf = Vec(Reg(dataType), dataSize)
            for(idx <- 0 until dataSize){
                if((idx & (1 << step)) == 0){
                    val use_less = (idx & (1 << (1 + stage))) == 0
                    val cmp_result = CmpUnit(reg_data_seq.last(idx), reg_data_seq.last(idx + (1 << step)), Bool(use_less))
                    reg_result_buf(idx) := cmp_result._1
                    reg_result_buf(idx + (1 << step)) := cmp_result._2
                }
            }
            reg_data_seq = reg_data_seq :+ reg_result_buf
        }
    }

    /**
     * Sort
     */
    for(step <- (0 until stages).reverse){
        val reg_result_buf = Vec(Reg(dataType), dataSize)
        for(idx <- 0 until dataSize){
            if((idx & (1 << step)) == 0){
                val cmp_result = CmpUnit(reg_data_seq.last(idx), reg_data_seq.last(idx + (1 << step)), io.ascending_order)
                reg_result_buf(idx) := cmp_result._1
                reg_result_buf(idx + (1 << step)) := cmp_result._2
            }
        }
        reg_data_seq = reg_data_seq :+ reg_result_buf
    }

    for(idx <- 0 until dataSize){
        io.sorted_data.payload(idx) := reg_data_seq.last(idx)
    }
    io.sorted_data.valid := ShiftRegister(io.raw_data.valid, delay, useInitZero = true)
}

object BitonicSorterBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/BitonicSorter").generateSystemVerilog(new BitonicSorter(16, 16, true, false)).printPruned().printUnused()
    }
}

object BitonicSorterSimApp extends App{
    import spinal.core.sim._
    val data_size = 16
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new BitonicSorter(8, data_size, false, false)){dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.ascending_order #= true
            for(idx <- 0 until data_size){
                dut.io.raw_data.payload(idx) #= 0
            }
            dut.clockDomain.waitSampling(10)
            var data_seq = Seq[Int](10, 20, 5, 9, 3, 8, 12, 14, 90, 0, 60, 40, 23, 35, 95, 18)
            for(loop <- 0 until 16){
                for(idx <- 0 until data_size){
                    dut.io.raw_data.payload(idx) #= data_seq(idx % data_seq.length)
                }
                data_seq = data_seq.reverse
                dut.io.raw_data.valid.randomize()
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(50)
        }
}