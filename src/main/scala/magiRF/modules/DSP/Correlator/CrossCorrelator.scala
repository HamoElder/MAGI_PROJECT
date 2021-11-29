package magiRF.modules.DSP.Correlator

import Misc.math.Complex
import spinal.lib._
import spinal.core._
import utils.bus.IQBundle.IQBundle

case class CrossCorrelatorConfig(
                                    iqWidth         : Int,
                                    refData         : Array[Complex],
                                    resultDataWidth : Int
                                ){
    def slideWinSize: Int = refData.length + 1
    def correlatorConfig: CorrelatorConfig = CorrelatorConfig(iqWidth, slideWinSize, resultDataWidth)
    def dataLength: Int = refData.length
    def cntType: UInt = UInt(log2Up(dataLength + 1) bits)
    def preambleI_payload: Seq[SInt] = for(idx <- 0 until dataLength) yield {
        S(refData(idx).re.toInt, iqWidth bits)
    }

    def preambleQ_payload: Seq[SInt] = for(idx <- 0 until dataLength) yield {
        S(refData(idx).im.toInt, iqWidth bits)
    }
}

case class CrossCorrelator(config: CrossCorrelatorConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(config.correlatorConfig.dataType)))
        val corr_result = master(Flow(IQBundle(config.correlatorConfig.resultDataType)))
    }
    noIoPrefix()
    val I_mem: Mem[SInt] = Mem(config.correlatorConfig.dataType, initialContent = config.preambleI_payload).addAttribute("rom_style", "block")
    val Q_mem: Mem[SInt] = Mem(config.correlatorConfig.dataType, initialContent = config.preambleQ_payload).addAttribute("rom_style", "block")
    val cnt: UInt = Reg(config.cntType) init(0)
    val iq_cursor = IQBundle(config.correlatorConfig.dataType)
    iq_cursor.cha_i := I_mem.readSync(cnt.resized)
    iq_cursor.cha_q := Q_mem.readSync(cnt.resized)


    val corr_core = Correlator(config.correlatorConfig)
    corr_core.io.raw_data_0.valid := io.raw_data.valid
    corr_core.io.raw_data_0.payload := io.raw_data.payload

    corr_core.io.raw_data_1.valid := io.raw_data.valid
    corr_core.io.raw_data_1.payload := iq_cursor

    when(io.raw_data.valid){
        cnt := (cnt >= config.dataLength) ? U(0) | cnt + 1
    }.otherwise{
        cnt := 0
    }

    io.corr_result << corr_core.io.corr_result
}


object CrossCorrelatorSimApp extends App{
    import spinal.core.sim._
    import magiRF.top.IEEE802_11.IEEE802_11
    val cross_correlation_config = CrossCorrelatorConfig(16, IEEE802_11.ltf64.map(_*1000), 32)
    SimConfig.withWave.doSim(new CrossCorrelator(cross_correlation_config)){ dut =>
        dut.clockDomain.forkStimulus(5)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(10)
        for(idx <- 1 until 300){
            dut.io.raw_data.valid #= true

            dut.io.raw_data.cha_i #= idx % 500
            dut.io.raw_data.cha_q #= idx % 500

            dut.clockDomain.waitSampling(1)
        }
        for(idx <- IEEE802_11.ltf64.indices){
            dut.io.raw_data.valid #= true
            dut.io.raw_data.cha_i #= (IEEE802_11.ltf64(idx).re * 1000).toInt
            dut.io.raw_data.cha_q #= (IEEE802_11.ltf64(idx).im * 1000).toInt

            dut.clockDomain.waitSampling(1)
        }
        for(idx <- 1 until 300){
            dut.io.raw_data.valid #= true

            dut.io.raw_data.cha_i #= idx % 500
            dut.io.raw_data.cha_q #= idx % 500

            dut.clockDomain.waitSampling(1)
        }
        dut.clockDomain.waitSampling(1)
        dut.io.raw_data.valid #= false
        dut.clockDomain.waitSampling(100)
    }
}