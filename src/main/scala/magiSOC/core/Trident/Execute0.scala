package magiSOC.core.Trident

import magiSOC.core.Trident.Misc._
import spinal.core._
import spinal.lib._

case class Execute0(implicit config: TridentRiscvConfig) extends Component {
    val io = new Bundle{
        val dCmd = master(Stream(CoreDataCmd()))
        val inInst = slave(Stream(CoreDecodeOutput()))
        val outInst = master(Stream(CoreExecute0Output()))
    }
    noIoPrefix()
    val inInst = io.inInst.m2sPipe(config.collapseBubble)
    val throwIt = False
    val halt = False
    val haltFromDataRequest = inInst.valid && inInst.ctrl.men && !io.dCmd.ready
    val ctrl = inInst.ctrl
    val imm = IMM(inInst.instruction)

    // conditional branch calculation
    val br = new Area {
        val signed = BR.isSignedComp(ctrl.br)
        val src0Ext = (inInst.src0.msb && signed) ## inInst.src0
        val src1Ext = (inInst.src1.msb && signed) ## inInst.src1
        val ltx =  (src0Ext.asUInt-src1Ext.asUInt).msb
        val eq = inInst.src0 === inInst.src1


        val pc_sel = inInst.ctrl.br.mux[PC.C](
            default -> PC.INC,
            BR.NE -> Mux(!eq, PC.BRA, PC.INC),
            BR.EQ -> Mux(eq, PC.BRA, PC.INC),
            (BR.GE , BR.GEU) -> Mux(!ltx, PC.BRA, PC.INC),
            (BR.LT , BR.LTU)  -> Mux(ltx, PC.BRA, PC.INC),
            BR.J -> PC.J,
            BR.JR -> PC.JR
        )
    }

    val alu = new Alu
    alu.io.func := inInst.ctrl.alu
    alu.io.doSub := inInst.doSub
    alu.io.src0 := inInst.alu_op0
    alu.io.src1 := inInst.alu_op1


//    outInst.arbitrationFrom(inInst.throwWhen(throwIt).haltWhen(halt || haltFromDataRequest))
//    outInst.pc := inInst.pc
//    outInst.instruction := inInst.instruction
//    outInst.predictorHasBranch := inInst.predictorHasBranch
//    outInst.branchHistory.valid   := inInst.branchHistory.valid
//    outInst.branchHistory.payload := inInst.branchHistory.payload
//    outInst.ctrl := ctrl
//    outInst.br.eq := br.eq
//    outInst.br.ltx := br.ltx
//    outInst.pc_sel := br.pc_sel
//    outInst.src1 := inInst.src1
//    outInst.result := alu.io.result
//    outInst.adder := alu.io.adder
//    if(c.needExecute0PcPlus4) outInst.pcPlus4 := inInst.pc + 4
//    outInst.needMemRsp := inInst.ctrl.men && inInst.ctrl.m === M.XRD
//    outInst.dCmdAddress := dCmd.address

}
