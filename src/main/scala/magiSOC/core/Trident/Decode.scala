package magiSOC.core.Trident

import magiSOC.core.Trident.Misc._
import spinal.core._
import spinal.lib._

case class Decode(implicit config: TridentRiscvConfig) extends Component {
    val io = new Bundle{
        val inInst = slave(Stream(CoreFetchOutput()))
        val pcLoad = master(Flow(UInt(config.pcWidth bits)))
        val outInst = master(Stream(CoreDecodeOutput()))
        val hazard = in(Bool())

        val raddr_0 = out(UInt(5 bits))
        val rdata_0 = in(Bits(32 bits))

        val raddr_1 = out(UInt(5 bits))
        val rdata_1 = in(Bits(32 bits))

        val fetch_throwIt = out(Bool())

        val fetch_to_decode_msg = slave(Stream(CoreFetchOutput()))
    }
    noIoPrefix()
    val inInst = io.fetch_to_decode_msg.m2sPipe()
    val ctrl = getInstructionCtrl(inInst.instruction)
    val hazard = Bool //Used to stall decode phase because of register file hazard
    val throwIt = False
    val halt = False
    when(hazard) {
        halt := True
    }
    val addr0 = inInst.instruction(src0Range).asUInt
    val addr1 = inInst.instruction(src1Range).asUInt
    val addr0IsZero = addr0 === 0
    val addr1IsZero = addr1 === 0

    //read register file
    val srcInstruction = config.regFileReadyKind match {
        case `async` => inInst.instruction
        case `sync` => Mux(inInst.isStall, inInst.instruction, io.fetch_to_decode_msg.instruction)
    }

    val regFileReadAddress0 = srcInstruction(src0Range).asUInt
    val regFileReadAddress1 = srcInstruction(src1Range).asUInt

    io.raddr_0 := regFileReadAddress0
    io.raddr_1 := regFileReadAddress1

    val imm = IMM(inInst.instruction)

    // calculate branch target
    val brjmpImm = Mux(ctrl.jmp, imm.j_sext, imm.b_sext)
    val brJumpPc = (inInst.pc + brjmpImm.asUInt).resize(config.pcWidth)

    // branch prediction
    val branchCacheHit = inInst.branchCacheLine.pc === inInst.pc(config.pcWidth - 1 downto 2 + config.dynamicBranchPredictorCacheSizeLog2)
    val staticBranchPrediction = brjmpImm.msb || ctrl.br === BR.J
    val shouldTakeBranch = Bool()
    config.branchPrediction match {
        case `disable` =>
            shouldTakeBranch := False
        case `static` =>
            shouldTakeBranch := staticBranchPrediction
        case `dynamic` =>
            shouldTakeBranch := staticBranchPrediction
            when(branchCacheHit) {
                shouldTakeBranch := inInst.branchCacheLine.history.msb
            }
    }


    // branch interface
    io.pcLoad.valid := inInst.valid && !throwIt && !hazard && io.outInst.ready && (ctrl.br =/= BR.JR && ctrl.br =/= BR.N) && ctrl.instVal && shouldTakeBranch
    io.pcLoad.payload := brJumpPc

    io.outInst.arbitrationFrom(inInst.throwWhen(throwIt).haltWhen(halt))
    io.outInst.pc := inInst.pc
    io.outInst.instruction := inInst.instruction
    io.outInst.ctrl := ctrl
    io.outInst.doSub := io.outInst.ctrl.alu =/= ALU.ADD
    io.outInst.src0 := Mux(!addr0IsZero, io.rdata_0, B(0, 32 bit))
    io.outInst.src1 := Mux(!addr1IsZero, io.rdata_1, B(0, 32 bit))
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
    io.outInst.branchHistory.valid := branchCacheHit
    io.outInst.branchHistory.payload := inInst.branchCacheLine.history


    lazy val applyExtensionTags: Unit = {
        var tagCounter = 0
        for (extension <- config.extensions) {
            if (extension.needTag) {
                tagCounter += 1
                extension.tag = tagCounter
            }
        }
    }
    def getInstructionCtrl(instruction: Bits): InstructionCtrl = {
        applyExtensionTags
        val ctrl = InstructionCtrl(instruction)
        for (extension <- config.extensions) {
            extension.instructionCtrlExtension(instruction, ctrl)
        }
        ctrl
    }
}
