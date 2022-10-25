package magiSOC.core.Trident

import spinal.core._
import spinal.lib._

case class HazardTracker() extends Component {
    val io = new Bundle{

    }
    noIoPrefix()

//    val src0Hazard = False
//    val src1Hazard = False
//    decode.hazard := src0Hazard || src1Hazard
//
//    val addr0Match = writeBackBuffer.inInst.addr === decode.addr0
//    val addr1Match = writeBackBuffer.inInst.addr === decode.addr1
//    when(writeBackBuffer.inInst.valid) {
//        if (bypassWriteBackBuffer) {
//            when(addr0Match) {
//                decode.src0 := writeBackBuffer.inInst.data
//            }
//            when(addr1Match) {
//                decode.src1 := writeBackBuffer.inInst.data
//            }
//        } else {
//            when(addr0Match) {
//                src0Hazard := True
//            }
//            when(addr1Match) {
//                src1Hazard := True
//            }
//        }
//    }
}
