package magiSOC.core.Trident

import magiSOC.core.Trident.Misc.InstructionCtrl
import spinal.core._

abstract class CoreExtension {
    def getName : String
    def applyIt(core : TridentRiscvCore) : Area
    def instructionCtrlExtension(instruction : Bits,ctrl: InstructionCtrl) : Unit = {}

    var tag : Int = -1
    def needTag : Boolean = false
    def applyTag(instructionCtrl: InstructionCtrl) : Unit = {
        assert(tag != -1," You need to override needTag with true")
        instructionCtrl.extensionTag := tag
    }
    def isMyTag(ctrl: InstructionCtrl) = {
        assert(tag != -1," You need to override needTag with true")
        ctrl.extensionTag === tag
    }
    def getIrqUsage : Seq[(Int,IrqUsage)] = Nil

    def needFlowDRsp = false
}
