package magiSOC.core.Trident

import magiSOC.core.Trident.Misc.InstructionsCtrl
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

case class CoreDataCmd()(implicit val config : TridentRiscvConfig) extends Bundle{
    val wr = Bool()
    val address = UInt(config.addrWidth bits)
    val data = Bits(32 bit)
    val size = UInt(2 bit)
}

case class CoreDecodeOutput()(implicit val config : TridentRiscvConfig) extends Bundle{
    val pc = UInt(config.pcWidth bit)
    val instruction = Bits(32 bit)
    val ctrl = InstructionsCtrl()
    val src0 = Bits(32 bit)
    val src1 = Bits(32 bit)
    val alu_op0 = Bits(32 bit)
    val alu_op1 = Bits(32 bit)
    val doSub = Bool()
    val predictorHasBranch = Bool()
}

case class CoreExecute0Output()(implicit val config : TridentRiscvConfig) extends Bundle{
    val pc = UInt(config.pcWidth bits)
    val insruction = Bits(32 bits)

}

