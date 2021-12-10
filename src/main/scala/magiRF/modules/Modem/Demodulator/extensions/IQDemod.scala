package magiRF.modules.Modem.Demodulator.extensions

import magiRF.modules.Modem.Misc.{demodUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._

case class IQDemod(config: demodUnitConfig) extends Component {
    val io = master(modUnitInterface(config.unitDataType, config.modDataType))

    noIoPrefix()

    val demod_data_i = RegNext(io.mod_iq.cha_i) init(0)
    val demod_valid_i = RegNext(io.mod_iq.valid) init(False)

    val demod_data_q = if(config.codeTableQ != null && config.mValue > 2) RegNext(io.mod_iq.cha_q) init(0) else null
    val demod_valid_q = if(config.codeTableQ != null && config.mValue > 2) RegNext(io.mod_iq.valid) init(False) else null

    val singleM: Int = if(config.codeTableQ != null && config.mValue > 2) log2Up(config.mSize) else config.mSize
    val unit_data_width: Int = if(config.codeTableQ != null && config.mValue > 2) config.mWidth / 2 else config.mWidth

    val comp_cmp_i = Bits(singleM - 1 bits)

    val comp_cmp_q = if(config.codeTableQ != null && config.mValue > 2) Bits(singleM - 1 bits) else null
    for(idx <- 0 until singleM - 1){
        comp_cmp_i(idx) := (demod_data_i > config.codeTableI._1(idx))
        if(config.codeTableQ != null && config.mValue > 2){
            comp_cmp_q(idx) := (demod_data_q > config.codeTableQ._1(idx))
        }
    }

    val compTable_i = RegNext(comp_cmp_i) init(0)
    val codeTable_q = if(config.codeTableQ != null && config.mValue > 2) RegNext(comp_cmp_q) init(0) else null

    val demod_valid = if(config.codeTableQ != null && config.mValue > 2) RegNext(demod_valid_i && demod_valid_q) init(False) else RegNext(demod_valid_i)

    val unit_data_i = Reg(UInt(unit_data_width bits))
    val unit_data_q = if(config.codeTableQ != null && config.mValue > 2) Reg(UInt(unit_data_width bits)) else null
    val unit_valid = Reg(Bool) init(False)

    when(demod_valid){
        unit_valid := True
        switch(compTable_i){
            for(idx <- 0 until singleM){
                is((1 << idx) - 1){
                    unit_data_i := config.codeTableI._2(idx)
                }
            }
        }

        if(config.codeTableQ != null && config.mValue > 2){
            switch(codeTable_q){
                for(idx <- 0 until singleM){
                    is((1 << idx) - 1){

                        unit_data_q := config.codeTableQ._2(idx)
                    }
                }
            }
        }
    }.otherwise{
        unit_data_i := 0
        if(config.codeTableQ != null && config.mValue > 2) {
            unit_data_q := 0
        }
        unit_valid := False
    }
    if(config.codeTableQ != null && config.mValue > 2){
        io.unit_data.payload :=  (unit_data_i ## unit_data_q).asUInt.resized
    } else {
        io.unit_data.payload := unit_data_i.resized
    }
    io.unit_data.valid := unit_valid
}

object IQDemodBench{
    def main(args: Array[String]): Unit = {
        
        def ASK_4_tableI(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
            var codeTable = new Array[BigInt](m_val)
            var codeI = new Array[Int](m_val)
            for(idx <- 0 until m_val){
                codeTable(idx) = peak * idx / (m_val - 1)
                codeI(idx) = idx
            }
            for(idx <- 0 until m_val - 1){
                codeTable(idx) = (codeTable(idx) + codeTable(idx + 1)) / 2
            }
            (codeTable, codeI)
        }
        
        def B_QPSK_tableI(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
            def grayEncode(n : Int): Int = n ^ (n >>> 1)
            //            def grayEncode(n: Long): Long = n ^ (n >>> 1)
            var code = new Array[Int](m_val)
            var codeTable = new Array[BigInt](m_val)
            codeTable(0) = 0
            code(0) = 0
            code(1) = 1
            (codeTable, code)
        }

        def B_QPSK_tableQ(m_val: Int, peak: Int): (Array[BigInt], Array[Int]) = {
            def grayEncode(n : Int): Int = n ^ (n >>> 1)
            //            def grayEncode(n: Long): Long = n ^ (n >>> 1)
            var codeTable = new Array[BigInt](m_val)
            var code = new Array[Int](m_val)
            codeTable(0) = 0
            code(0) = 0
            code(1) = 1
            (codeTable, code)
        }
        
        val iq_demod_config = demodUnitConfig(8, 16, 4, ASK_4_tableI, null)
//        val iq_demod_config = demodUnitConfig(8, 16, 8, 4, B_QPSK_tableI, B_QPSK_tableQ)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new IQDemod(iq_demod_config)).printPruned()
    }
}
