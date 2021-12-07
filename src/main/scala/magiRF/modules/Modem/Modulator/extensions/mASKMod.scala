package magiRF.modules.Modem.Modulator.extensions

import magiRF.modules.Modem.Misc.{modUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._

case class mASKMod(config: modUnitConfig) extends Component{

    val io = slave(modUnitInterface(config.unitDataType, config.modDataType))

    noIoPrefix()
    val codeTable = Vec(config.codeTableType, config.mValue)
    for(idx <- 0 until config.mSize){
        codeTable(idx) := config.codeTableI(idx)
    }

    val unit_data = RegNext(io.unit_data.payload) init(0)
    val unit_valid = RegNext(io.unit_data.valid) init(False)

    when(unit_valid){
        io.mod_iq.valid := True
        io.mod_iq.cha_i := codeTable(unit_data.resized).resized
    }.otherwise{
        io.mod_iq.valid := False
        io.mod_iq.cha_i := 0
    }
    io.mod_iq.cha_q := 0
}

object mASKModBench {
    def main(args: Array[String]): Unit = {
        def generateTable(m_val: Int, peak: Int): Array[BigInt] = {
            var codeTable = new Array[BigInt](m_val)
            for(idx <- 0 until m_val){
                codeTable(idx) = peak * idx / (m_val - 1)
            }
            codeTable
        }
        val mASK_config = modUnitConfig(16, 16, 2, generateTable)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new mASKMod(mASK_config)).printPruned()
    }
}
