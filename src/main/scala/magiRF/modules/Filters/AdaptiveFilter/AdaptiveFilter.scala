package magiRF.modules.Filters.AdaptiveFilter

import magiRF.modules.Filters.FIR.DirectFIRCore
import spinal.core._
import spinal.lib._

case class LMSFilterConfig(
                                   rawPeakWidth: Int,
                                   coffPeakWidth: Int,
                                   coffResolutionWidth: Int,
                                   filteredPeakWidth: Int,
                                   filteredResolutionWidth: Int,
                                   stages: Int,
                                   refSeq: Seq[Double],
                                   learnRateShift: Int = 8
                               ){
    def rawDataType: SFix = SFix(0 exp, -rawPeakWidth exp)
    def coffDataType: SFix = SFix(coffPeakWidth exp, - coffResolutionWidth exp)
    def filteredDataType:  SFix = SFix(filteredPeakWidth exp, - filteredResolutionWidth exp)
    def refIndicateCntDataType: UInt = UInt(log2Up(refSeq.length) bits)
    def refSeqTable: Seq[SFix] = for (idx <- refSeq.indices) yield {
        val data = filteredDataType
        data := refSeq(idx)
        data
    }
    println(s"Learn Rate: ${1 / Math.pow(2, learnRateShift)}")
}


case class LMSFilter(config: LMSFilterConfig) extends Component {

    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(config.rawDataType)))
        val filtered_data = master(Flow(Fragment(config.filteredDataType)))
        val train_en = in(Bool())
    }
    noIoPrefix()

    val raw_data_ready = Reg(Bool()) init(False)
    val coff_mem = Vec(Reg(config.coffDataType) init(0), config.stages)
    val ref_mem = Mem(config.filteredDataType,initialContent = config.refSeqTable)

    val raw_data_vec = Vec(Reg(config.rawDataType), config.stages)
    val mult_data_vec = Vec(Reg(config.filteredDataType) init (0), config.stages)
    when(io.raw_data.fire) {
        raw_data_vec(0) := io.raw_data.fragment
        for (stage <- 1 until config.stages) {
            raw_data_vec(stage) := raw_data_vec(stage - 1)
        }
    }
    for (stage <- 0 until config.stages) {
        mult_data_vec(stage) := (coff_mem(stage) * raw_data_vec(stage)).truncated
    }

    val sum_result = Reg(config.filteredDataType) init (0)
    sum_result := mult_data_vec.reduceBalancedTree(_ + _)

    io.filtered_data.fragment := sum_result
    io.filtered_data.valid := Delay(io.raw_data.fire, 3, init=False)
    io.filtered_data.last := Delay(io.raw_data.last, 3, init = False)
    io.raw_data.ready := raw_data_ready

    val cnt = Reg(config.refIndicateCntDataType) init(0)
    val ref_data_indicator = ref_mem.readSync(cnt)
    val error_measured = ref_data_indicator - sum_result
    when(io.train_en){
        when(io.filtered_data.fire){
            raw_data_ready := True
            cnt := (cnt === (config.refSeq.length - 1)) ? U(0) | (cnt + 1)
            for (stage <- 0 until config.stages) {
                val delta_weight = config.coffDataType
                delta_weight := ((raw_data_vec(stage) * error_measured) >> (config.learnRateShift - 1)).truncated
                coff_mem(stage) := coff_mem(stage) + delta_weight
            }
        }.elsewhen(io.raw_data.fire){
            raw_data_ready := False
        }
    }.elsewhen(io.filtered_data.lastFire) {
        cnt := 0
       raw_data_ready := False
    }.otherwise{
        raw_data_ready := True
    }

}

object LMSFilterBench{
    def lms_filter_config: LMSFilterConfig = LMSFilterConfig(10, 7, 8, 11, 8, 16, (0 until 32).map(i => Math.sin(i * Math.PI / 16.0)), 6)
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/LMSFilter").generateSystemVerilog(new LMSFilter(lms_filter_config)).printUnused()
    }
}

object LMSFilterSimApp extends App{
    import spinal.core.sim._
    def lms_filter_config: LMSFilterConfig = LMSFilterConfig(8, 2, 16, 3, 16, 10, (0 until 32).map(i => Math.sin(i * Math.PI / 16.0)), 7)
    SimConfig.withWave.doSim(new LMSFilter(lms_filter_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.last #= false
        dut.io.raw_data.valid #= false
        dut.io.raw_data.fragment.raw #= 0
        dut.io.train_en #= false

        dut.clockDomain.waitSampling(1)

        dut.io.train_en #= true
        dut.io.raw_data.valid #= true
        for(idx <- 0 until 1600){
            dut.io.raw_data.fragment.raw #= (60 * Math.sin(idx * Math.PI / 16.0)).toInt + (50 * Math.cos(idx * Math.PI / 128.0)).toInt
            dut.clockDomain.waitSamplingWhere(dut.io.raw_data.ready.toBoolean)
        }
        dut.io.train_en #= false
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(1)
        for (idx <- 0 until 1600) {
            dut.io.raw_data.valid #= true
            dut.io.raw_data.fragment.raw #= (60 * Math.sin(idx * Math.PI / 16.0)).toInt + (50 * Math.cos(idx * Math.PI / 128.0)).toInt
            dut.clockDomain.waitSampling(1)
        }
        dut.io.raw_data.valid #= true
        dut.io.raw_data.fragment.raw #= (120 * Math.sin(1025 * Math.PI / 16.0)).toInt
        dut.io.raw_data.last #= true
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.io.raw_data.last #= false

        dut.clockDomain.waitSampling(100)
    }
}


