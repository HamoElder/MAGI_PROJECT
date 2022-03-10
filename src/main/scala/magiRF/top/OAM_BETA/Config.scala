package magiRF.top.OAM_BETA

import Misc.math.Complex
import Misc.math.ZadoffChuSeq.zcSeqGen


object Config {
	val stf16: Array[Complex] = zcSeqGen(3, 16)
	val stf: Array[Complex] = (stf16 ++ stf16 ++ stf16 ++ stf16)

	val ltf32: Array[Complex] = zcSeqGen(5, 32)
	val ltf: Array[Complex] = (ltf32 ++ ltf32)

}
