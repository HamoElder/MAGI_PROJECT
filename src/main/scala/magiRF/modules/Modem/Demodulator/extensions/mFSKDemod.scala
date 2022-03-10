package magiRF.modules.Modem.Demodulator.extensions

import magiRF.modules.Modem.Misc.{demodUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._

case class mFSKDemod(config: demodUnitConfig) extends Component {
    val io = master(modUnitInterface(config.unitDataType, config.modDataType))

    noIoPrefix()

    val demod_data_i = RegNext(io.mod_iq.cha_i) init (0)
    val demod_valid_i = RegNext(io.mod_iq.valid) init (False)
    val demod_last_i = RegNext(io.mod_iq.last) init(False)
    //    val demod_data_q = RegNext(io.mod_q.payload) init(0)
    //    val demod_valid_q = RegNext(io.mod_q.valid) init(False)

    val compVec_i = Bits(config.mValue - 1 bits)
    for (idx <- 0 until config.mSize - 1) {
        compVec_i(idx) := (demod_data_i > config.codeTableI._1(idx))
    }

    val compTable_i = RegNext(compVec_i) init (0)
    val demod_valid = RegNext(demod_valid_i) init (False)

    when(demod_valid) {
        switch(compTable_i) {
            for (idx <- 0 until config.mSize) {
                is((1 << idx) - 1) {
                    io.unit_data.valid := True
                    io.unit_data.last := demod_last_i
                    io.unit_data.fragment := config.codeTableI._2(idx)
                }
            }
            default {
                io.unit_data.valid := False
                io.unit_data.last := False
                io.unit_data.fragment := 0
            }
        }
    }.otherwise {
        io.unit_data.fragment := 0
        io.unit_data.valid := False
        io.unit_data.last := False
    }

}
