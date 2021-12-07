package magiRF.modules.Modem.Modulator.extensions

import magiRF.modules.Modem.Misc.{modUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._


case class mPSKMod(config: modUnitConfig) extends Component{
    val io = slave(modUnitInterface(config.unitDataType, config.modDataType))

    noIoPrefix()

    val codeTable = Vec(config.codeTableType, config.mSize)

    for(idx <- 0 until config.mSize){
        codeTable(idx) := config.codeTableIQ(idx)
    }

    val unit_data = RegNext(io.unit_data.payload) init(0)
    val unit_valid = RegNext(io.unit_data.valid) init(False)

    val mod_iq = codeTable(unit_data.resized).subdivideIn(2 slices)

    when(unit_valid){
        io.mod_iq.cha_i := mod_iq(1)
        io.mod_iq.cha_q := mod_iq(0)
        io.mod_iq.valid := True
    }.otherwise{
        io.mod_iq.cha_i := 0
        io.mod_iq.cha_q := 0
        io.mod_iq.valid := False
    }

}

object mPSKModBench {
    def main(args: Array[String]) {
        val ini_angle: Double  =  Math.PI * 5 / 4
        val direction : Boolean  = false
        def generateTableI(m_val: Int, peak: Int): Array[BigInt] = {
            def grayEncode(n : Int): Int = n ^ (n >>> 1)
//            def grayEncode(n: Long): Long = n ^ (n >>> 1)
            var codeTable = new Array[BigInt](m_val)
            var angle = ini_angle
            for(idx <- 0 until m_val){
                codeTable(grayEncode(idx)) = BigInt((peak * Math.cos(angle)).toInt)
                //            println(grayEncode(idx).toBinaryString, BigInt((peakValue * Math.cos(angle)).toInt), BigInt((peakValue * Math.sin(angle)).toInt))
                angle = if(direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }
        def generateTableQ(m_val: Int, peak: Int): Array[BigInt] = {
            def grayEncode(n : Int): Int = n ^ (n >>> 1)
            //            def grayEncode(n: Long): Long = n ^ (n >>> 1)
            var codeTable = new Array[BigInt](m_val)
            var angle = ini_angle
            for(idx <- 0 until m_val){
                codeTable(grayEncode(idx)) = BigInt((peak * Math.sin(angle)).toInt)
                //            println(grayEncode(idx).toBinaryString, BigInt((peakValue * Math.cos(angle)).toInt), BigInt((peakValue * Math.sin(angle)).toInt))
                angle = if(direction) angle + 2 * Math.PI / m_val else angle - 2 * Math.PI / m_val
            }
            codeTable
        }
        val mPSK_config = modUnitConfig(8, 16, 4, generateTableI, generateTableQ)
//        val mPSK_config = mPSKConfig(32, 16, 2, Math.PI)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new mPSKMod(mPSK_config)).printPruned()
    }
}
