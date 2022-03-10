package magiRF.modules.Modem.Modulator.extensions

import magiRF.modules.Modem.Misc.{modUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._


case class mQAMMod(config: modUnitConfig) extends Component {
    val io = slave(modUnitInterface(config.unitDataType, config.modDataType))
    noIoPrefix()

    val codeTableI = Vec(config.codeTableType, log2Up(config.mValue))
    val codeTableQ = Vec(config.codeTableType, log2Up(config.mValue))

    for(idx <- 0 until log2Up(config.mValue)){
        codeTableI(idx) := config.codeTableI(idx)
        codeTableQ(idx) := config.codeTableQ(idx)
    }
    
    val unit_data = RegNext(io.unit_data.payload) init(0)
    val unit_valid = RegNext(io.unit_data.valid) init(False)
    val unit_last = RegNext(io.unit_data.last) init(False)

    val data_div = unit_data.subdivideIn(2 slices)

    when(unit_valid){
        io.mod_iq.cha_i := codeTableI(data_div(1).resized).resized
        io.mod_iq.cha_q := codeTableQ(data_div(0).resized).resized
        io.mod_iq.last := unit_last
        io.mod_iq.valid := True
    }.otherwise{
        io.mod_iq.cha_i := 0
        io.mod_iq.cha_q := 0
        io.mod_iq.last := False
        io.mod_iq.valid := False
    }
}

object mQAMModBench {
    def main(args: Array[String]): Unit = {
//        val mQAM_config = mQAMConfig(24, 16, 64, 0.5400390625)

        def generateTable(m_val:Int, peak:Int): Array[BigInt] = {
            def grayEncode(n : Int): Int = n ^ (n >>> 1)
//            def grayEncode(n: Long): Long = n ^ (n >>> 1)
            val single_m_val = (m_val >> 1)
            val factor: Double = 0.9486832980505138 / 2
            val direction : Boolean  = true
            var codeTable = new Array[BigInt](single_m_val)
            var value = if(direction) -peak else peak
            for(idx <- 0 until single_m_val){
                codeTable(grayEncode(idx)) = (factor * value).toInt
                value = if(direction) value + (2 * peak) / (single_m_val - 1) else value - (2 * peak) / (single_m_val - 1)
            }
            codeTable
        }
        
        val mQAM_config = modUnitConfig(16, 16, 16, generateTable, generateTable)

        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new mQAMMod(mQAM_config)).printPruned()
    }
}
