package magiSOC.core.Trident

case class TridentRiscvConfig(
                                 val pcWidth : Int = 32,
                                 val addrWidth : Int = 32,
                                 val startAddress : BigInt = 0,
                                 val bypassExecute0 : Boolean = true,
                                 val bypassExecute1 : Boolean = true,
                                 val bypassWriteBack : Boolean = true,
                                 val bypassWriteBackBuffer : Boolean = true,
                                 val collapseBubble : Boolean = true,
                                 val fastFetchCmdPcCalculation : Boolean = true,
                                 val dynamicBranchPredictorCacheSizeLog2 : Int = 4,
                                 val branchPredictorHistoryWidth : Int = 2,
                                 val invalidInstructionIrqId : Int = 0,
                                 val unalignedMemoryAccessIrqId : Int = 1
                             ) {

}
