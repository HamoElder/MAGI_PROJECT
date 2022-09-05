package magiSOC.core.Trident

import scala.collection.mutable.ArrayBuffer

trait BranchPrediction
object disable extends BranchPrediction
object static  extends BranchPrediction
object dynamic extends BranchPrediction

trait RegFileReadKind
object async extends RegFileReadKind
object sync extends RegFileReadKind
case class TridentRiscvConfig(
                                 val pcWidth : Int = 32,
                                 val addrWidth : Int = 32,
                                 val startAddress : BigInt = 0,
                                 val bypassExecute0 : Boolean = true,
                                 val bypassExecute1 : Boolean = true,
                                 val bypassWriteBack : Boolean = true,
                                 val bypassWriteBackBuffer : Boolean = true,
                                 val collapseBubble : Boolean = true,
                                 val branchPrediction : BranchPrediction = static,
                                 val regFileReadyKind : RegFileReadKind = sync,
                                 val fastFetchCmdPcCalculation : Boolean = true,
                                 val dynamicBranchPredictorCacheSizeLog2 : Int = 4,
                                 val branchPredictorHistoryWidth : Int = 2,
                                 val invalidInstructionIrqId : Int = 0,
                                 val unalignedMemoryAccessIrqId : Int = 1
                             ) {
    val extensions = ArrayBuffer[CoreExtension]()

    def add[T <: CoreExtension](that: T): T = {
        extensions += that
        that
    }

    def needExecute0PcPlus4 = true //branchPrediction != disable
}
