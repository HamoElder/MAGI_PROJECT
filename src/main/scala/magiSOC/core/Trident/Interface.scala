package magiSOC.core.Trident

import spinal.core._
import spinal.lib._

case class CoreInstructionCmd()(implicit config : TridentRiscvConfig) extends Bundle{
    val pc = UInt(config.addrWidth bits)
}

case class CoreInstructionRsp()(implicit config : TridentRiscvConfig) extends Bundle{
    val instruction = Bits(32 bit)
    val pc = UInt(config.addrWidth bit)
}

case class BranchPredictorLine()(implicit val config : TridentRiscvConfig)  extends Bundle{
    val pc = UInt(config.pcWidth-config.dynamicBranchPredictorCacheSizeLog2-2 bit)
    val history = SInt(config.branchPredictorHistoryWidth bit)
}

case class CoreFetchOutput()(implicit val config : TridentRiscvConfig) extends Bundle{
    val pc = UInt(config.pcWidth bits)
    val instruction = Bits(32 bits)
    val branchCacheLine = BranchPredictorLine()
}




