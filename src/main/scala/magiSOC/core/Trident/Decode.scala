package magiSOC.core.Trident

import magiSOC.core.Trident.Misc._
import spinal.core._
import spinal.lib._

case class Decode(implicit config: TridentRiscvConfig) extends Component {
    val io = new Bundle{
        val inInst = slave(Stream(CoreFetchOutput()))
        val pcLoad = master(Flow(UInt(config.pcWidth bits)))
        val outInst = master(Stream(CoreDecodeOutput()))
        val hazard = in(Bool()) //Used to stall decode phase because of register file hazard

        val regFileReadAddress0 = out(Bits(5 bits))
        val regFileReadAddress1 = out(Bits(5 bits))
        val regFileSrc0 = in(Bits(32 bits))
        val regFileSrc1 = in(Bits(32 bits))
        val fetch_throwIt = in(Bool())
    }
    noIoPrefix()
    val inInst = io.inInst.m2sPipe()
    val ctrl = getInstructionCtrl(inInst.instruction)
    val throwIt = False
    val halt = False
    when(io.hazard){
        halt := True
    }
    val addr0 = inInst.instruction(src0Range).asUInt
    val addr1 = inInst.instruction(src1Range).asUInt
    val addr0IsZero = addr0 === 0
    val addr1IsZero = addr1 === 0

    val srcInstruction = Mux(inInst.isStall,inInst.instruction, io.inInst.instruction)

    val regFileReadAddress0 = srcInstruction(src0Range)
    val regFileReadAddress1 = srcInstruction(src1Range)

    io.regFileReadAddress0 := regFileReadAddress0
    io.regFileReadAddress1 := regFileReadAddress1
    val (src0, src1) = (io.regFileSrc0, io.regFileSrc1)

    val imm = IMM(inInst.instruction)

    // calculate branch target
    val brjmpImm = Mux(ctrl.jmp, imm.j_sext, imm.b_sext)
    val brJumpPc = (inInst.pc + brjmpImm.asUInt).resize(config.pcWidth)

    val staticBranchPrediction = brjmpImm.msb || ctrl.br === BR.J
    val shouldTakeBranch = staticBranchPrediction

    io.pcLoad.valid := inInst.valid && !throwIt && io.hazard&& io.outInst.ready && (ctrl.br =/= BR.JR && ctrl.br =/= BR.N) && ctrl.instVal && shouldTakeBranch
    io.pcLoad.payload := brJumpPc

    io.outInst.arbitrationFrom(inInst.throwWhen(throwIt).haltWhen(halt))
    io.outInst.pc := inInst.pc
    io.outInst.instruction := inInst.instruction
    io.outInst.ctrl := ctrl
    io.outInst.doSub := io.outInst.ctrl.alu =/= ALU.ADD
    io.outInst.src0 := Mux(!addr0IsZero, src0, B(0, 32 bit))
    io.outInst.src1 := Mux(!addr1IsZero, src1, B(0, 32 bit))
    io.outInst.alu_op0 := io.outInst.ctrl.op0.mux(
        default -> io.outInst.src0,
        OP0.IMU -> imm.u.resized,
        OP0.IMZ -> imm.z.resized,
        OP0.IMJB -> brjmpImm
    )
    io.outInst.alu_op1 := io.outInst.ctrl.op1.mux(
        default -> io.outInst.src1,
        OP1.IMI -> imm.i_sext.resized,
        OP1.IMS -> imm.s_sext.resized,
        OP1.PC -> inInst.pc.asBits
    )
    io.outInst.predictorHasBranch := io.pcLoad.valid

    val flush = False
    when(flush){
        io.fetch_throwIt := True
        throwIt := True
    }


    def getInstructionCtrl(instruction : Bits): InstructionsCtrl = {
        val ctrl = InstructionsCtrl(instruction)
        ctrl
    }
}
