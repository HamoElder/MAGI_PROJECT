package magiRF.modules.Modem.Modulator.extensions

import magiRF.modules.Modem.Misc.{modUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._


case class mFSKMod(config: modUnitConfig) extends Component {

    val io = slave(modUnitInterface(config.unitDataType, config.modDataType))

    noIoPrefix()
    val codeTableI = Vec(config.codeTableType, config.mValue)
    for(idx <- 0 until config.mSize) {
        codeTableI(idx) := config.codeTableI(idx)
    }

    val unit_data = RegNext(io.unit_data.payload) init(0)
    val unit_valid = RegNext(io.unit_data.valid) init(False)
    val unit_last = RegNext(io.unit_data.last) init(False)

    when(unit_valid){
        io.mod_iq.cha_i := codeTableI(unit_data.resized).resized
        io.mod_iq.valid := True
        io.mod_iq.last := unit_last
    }.otherwise{
        io.mod_iq.cha_i:= 0
        io.mod_iq.valid := False
        io.mod_iq.last := False
    }

    io.mod_iq.cha_q := 0
}

object mFSKModBench{
    def main(args: Array[String]){
        def generateTable(m_val: Int, peak: Int): Array[BigInt] = {
            var codeTable = new Array[BigInt](m_val)
            for(idx <- 0 until m_val){
                codeTable(idx) = Math.pow(2, idx).toInt
            }
            codeTable
        }
        val mFSK_config = modUnitConfig(16, 16, 4, generateTable)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new mFSKMod(mFSK_config)).printPruned()
    }
}
