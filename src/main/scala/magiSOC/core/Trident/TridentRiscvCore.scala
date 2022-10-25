package magiSOC.core.Trident

import spinal.core._
import spinal.lib._

import scala.collection.mutable

trait InstructionBusKind
trait DataBusKind
object cmdStream_rspStream extends InstructionBusKind with DataBusKind
object cmdStream_rspFlow extends InstructionBusKind with DataBusKind
case class TridentRiscvCore(implicit val config : TridentRiscvConfig) extends Component {

    //Instruction bus
    val iCmd = Stream(CoreInstructionCmd())
    val iRsp = Stream(CoreInstructionRsp())

    //Data bus
    val dCmd = Stream(CoreDataCmd())
    val dRsp = Stream(Bits(32 bits))
    val dataBusKind: DataBusKind = if (config.extensions.foldLeft(false)(_ || _.needFlowDRsp))
        cmdStream_rspFlow
    else
        cmdStream_rspStream

    val irqUsages = mutable.HashMap[Int, IrqUsage]()
    if (config.invalidInstructionIrqId != 0) irqUsages(config.invalidInstructionIrqId) = IrqUsage(true)
    if (config.unalignedMemoryAccessIrqId != 0) irqUsages(config.unalignedMemoryAccessIrqId) = IrqUsage(true)
    for (extension <- config.extensions) {
        for ((id, usage) <- extension.getIrqUsage) {
            irqUsages(id) = usage
        }
    }
    val irqWidth = irqUsages.foldLeft(0)((max, e) => Math.max(max, e._1)) + 1
    val irqExceptionMask = irqUsages.foldLeft(0)((mask, e) => if (e._2.isException) mask + 1 << e._1 else mask)

    //Memories
    val brancheCache = Mem(BranchPredictorLine(), 1 << config.dynamicBranchPredictorCacheSizeLog2).randBoot()
    // RegFile
    val reg_file_module = RegCtrl()
    val fetch_module = Fetch()

    fetch_module.io.iCmd << iCmd
    fetch_module.io.iRsp << iRsp

    val decode_module = Decode()
    decode_module.io.fetch_throwIt := fetch_module.throwIt
    reg_file_module.io.raddr_0 := decode_module.io.raddr_0
    reg_file_module.io.raddr_1 := decode_module.io.raddr_1
    decode_module.io.rdata_0 := reg_file_module.io.rdata_0
    decode_module.io.rdata_1 := reg_file_module.io.rdata_1
}
