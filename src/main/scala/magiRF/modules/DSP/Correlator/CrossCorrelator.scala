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

    override def equals(that: Any): Boolean = this == that
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
