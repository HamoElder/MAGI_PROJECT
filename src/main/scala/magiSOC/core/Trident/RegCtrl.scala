package magiSOC.core.Trident

import spinal.core._
import spinal.lib._

case class RegCtrl(implicit val config : TridentRiscvConfig) extends Component {
    val io = new Bundle{
        val raddr_0 = in(UInt(5 bits))
        val rdata_0 = out(Bits(32 bits))

        val raddr_1 = in(UInt(5 bits))
        val rdata_1 = out(Bits(32 bits))
    }
    val regFile = Mem(Bits(32 bit), 32)

    val (src0, src1) = config.regFileReadyKind match {
        case `async` => (regFile.readAsync(io.raddr_0), regFile.readAsync(io.raddr_1))
        case `sync` => (regFile.readSync(io.raddr_0), regFile.readSync(io.raddr_1))
    }

    io.rdata_0 := src0
    io.rdata_1 := src1
}
