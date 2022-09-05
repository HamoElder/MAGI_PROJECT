package magiSOC.core.Trident

import spinal.core._
import spinal.lib._


case class Fetch(implicit config: TridentRiscvConfig) extends Component{
    val io = new Bundle{
        val iCmd = master(Stream(CoreInstructionCmd()))
        val iRsp = slave(Stream(CoreInstructionRsp()))

        val outInst = master(Stream(CoreFetchOutput()))
    }
    noIoPrefix()
    val halt = False
    val pc = Reg(UInt(config.pcWidth bit)) init (U(config.startAddress, config.pcWidth bit))
    val inc = RegInit(False) //when io.i.cmd is stalled, it's used as a token to continue the request the next cycle
    val pcNext = if (config.fastFetchCmdPcCalculation) {
        val pcPlus4 = pc + U(4)
        pcPlus4.addAttribute("keep")
        Mux(inc, pcPlus4, pc)
    } else {
        pc + Mux(inc, U(4), U(0))
    }
    val pcLoad = Flow(pc)
    when(pcLoad.valid) {
        pcNext := pcLoad.payload
    }

    val resetDone = RegNext(True) init (False) //Used to not send request while reset is active
    io.iCmd.valid := resetDone && !halt
    io.iCmd.pc := pcNext

    when(io.iCmd.fire || pcLoad.fire) {
        pc := pcNext
    }

    when(io.iCmd.fire) {
        inc := True
    } elsewhen (pcLoad.valid) {
        inc := False
    }


    val throwIt = False
    val flush = False
    when(flush) {
        throwIt := True
    }


    val pendingPrefetch = CounterUpDown(stateCount = 4, incWhen = io.iCmd.fire, decWhen = io.iRsp.fire)
    when(pendingPrefetch === 3) {
        io.iCmd.valid := False
    }

    val throwRemaining = Reg(UInt(2 bit)) init (0)
    val throwNextIRsp = throwRemaining =/= 0
    when(throwNextIRsp && io.iRsp.fire) {
        throwRemaining := throwRemaining - 1
    }
    when(throwIt) {
        throwRemaining := pendingPrefetch - io.iRsp.valid.asUInt
    }


    io.outInst.arbitrationFrom(io.iRsp.throwWhen(throwIt || throwNextIRsp))
    io.outInst.pc := io.iRsp.pc
    io.outInst.instruction := io.iRsp.instruction
    if (config.branchPrediction == dynamic)
        io.outInst.branchCacheLine := io.iRsp.branchCacheLine
    else
        io.outInst.branchCacheLine := io.outInst.branchCacheLine.getZero

}
