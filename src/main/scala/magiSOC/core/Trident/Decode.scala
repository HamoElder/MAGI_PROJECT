package magiSOC.core.Trident

import magiSOC.core.Trident.Misc.{IMM, InstructionsCtrl, src0Range, src1Range}
import spinal.core._
import spinal.lib._

case class Decode(implicit config: TridentRiscvConfig) extends Component {
    val io = new Bundle{
        val inInst = slave(Stream(CoreFetchOutput()))
        val hazard = in(Bool()) //Used to stall decode phase because of register file hazard
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

    val regFileReadAddress0 = srcInstruction(src0Range).asUInt
    val regFileReadAddress1 = srcInstruction(src1Range).asUInt

//    val (src0, src1) = (regFile.readSync(regFileReadAddress0),regFile.readSync(regFileReadAddress1))
    val imm = IMM(inInst.instruction)

    def getInstructionCtrl(instruction : Bits): InstructionsCtrl = {
        val ctrl = InstructionsCtrl(instruction)
        ctrl
    }
}
