package magiSOC.core.Trident


import spinal.core._
import spinal.lib._

case class Fetch(implicit config: TridentRiscvConfig) extends Component{
    val io = new Bundle{
        val iCmd = master(Stream(CoreInstructionCmd()))
        val iRsp = slave(Stream(CoreInstructionRsp()))
        val pcLoad = slave(Flow(UInt(config.pcWidth bits)))
        val flush = in(Bool())
        val halt = in(Bool())
        val throwIt = in(Bool())

        val outInst = master(Stream(CoreFetchOutput()))
    }
    noIoPrefix()

    val pc = Reg(UInt(config.pcWidth bits)) init(config.startAddress)
    val inc = RegInit(False)
    val pcNext = if(config.fastFetchCmdPcCalculation){
        val pcPlus4 = pc + U(4)
        pcPlus4.addAttribute("keep")
        Mux(inc,pcPlus4,pc)
    }else{
        pc + Mux(inc,U(4),U(0))
    }

    when(io.pcLoad.valid){
        pcNext := io.pcLoad.payload
    }

    val resetDone = RegNext(True) init(False)
    io.iCmd.valid := resetDone && !io.halt
    io.iCmd.pc := pcNext

    when(io.iCmd.fire || io.pcLoad.fire){
        pc := pcNext
    }

    when(io.iCmd.fire){
        inc := True
    }elsewhen(io.pcLoad.valid){
        inc := False
    }

    val throwIt = io.throwIt
    when(io.flush){
        throwIt := True
    }

    val pendingPrefetch = CounterUpDown(stateCount = 4,incWhen = io.iCmd.fire,decWhen = io.iRsp.fire)
    when(pendingPrefetch === 3){
        io.iCmd.valid := False
    }

    val throwRemaining = Reg(UInt(2 bit)) init(0)
    val throwNextIRsp = throwRemaining =/= 0
    when(throwNextIRsp && io.iRsp.fire){
        throwRemaining := throwRemaining - 1
    }
    when(throwIt){
        throwRemaining := pendingPrefetch - io.iRsp.valid.asUInt
    }

    io.outInst.arbitrationFrom(io.iRsp.throwWhen(throwIt || throwNextIRsp))
    io.outInst.pc := io.iRsp.pc
    io.outInst.instruction := io.iRsp.instruction
    io.outInst.branchCacheLine := io.outInst.branchCacheLine.getZero
}
