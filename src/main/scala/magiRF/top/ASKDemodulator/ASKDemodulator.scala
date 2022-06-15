package magiRF.top.ASKDemodulator

import magiRF.modules.Filters.FIR.SystolicFIR
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.AxiLite4

case class ASKDemodulator(chaNum: Int = 8, rawDataWidth: Int = 32) extends Component {
//    val io = new Bundle{
//        val raw_data = Vec(slave(Stream(SInt(rawDataWidth bits))), chaNum)
//        val result_data = Vec(master(Stream(Bool())), chaNum)
//        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
//    }
//    noIoPrefix()
//
//    val fir_filter = SystolicFIR(16, 24,
//        List(0, 0, 0, 1, 1, 3, 5, 7, 10, 13, 16, 19, 21, 23, 23, 23, 21, 19, 16, 13, 10, 7, 5, 3, 1, 1, 0, 0, 0), chaNum = chaNum)
//    for(cha <- 0 until chaNum){
//        io.raw_data(cha).ready := True
//        fir_filter.io.raw_data(cha).valid := io.raw_data(cha).valid
//        fir_filter.io.raw_data(cha).payload := io.raw_data(cha).payload.round(rawDataWidth - 16)
//        io.result_data(cha).valid := fir_filter.io.filtered_data(cha).valid
//        io.result_data(cha).payload := (fir_filter.io.filtered_data(cha).payload > io.threshold)
//    }
}


object ASKDemodulatorBench{
    def main(args: Array[String]): Unit ={
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/ASKDemodulator").generateSystemVerilog(new ASKDemodulator(8, 32)).printUnused()
    }
}