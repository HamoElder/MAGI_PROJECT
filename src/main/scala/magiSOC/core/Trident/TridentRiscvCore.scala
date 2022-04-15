package magiSOC.core.Trident

import spinal.core._
import spinal.lib._

case class TridentRiscvCore(implicit val config : TridentRiscvConfig) extends Component {
    val io = new Bundle{
        val iCmd = master(Stream(CoreInstructionCmd()))
        val iRsp = slave(Stream(CoreInstructionRsp()))

        val dCmd = master(Stream(CoreDataCmd()))
        val dRsp = slave(Stream(Bits(32 bits)))
    }
    noIoPrefix()


    // Memories
    val regFile = Mem(Bits(32 bits), 32)

    // Send Instructions Request to io.i.cmd
    val fetcher = new Fetch()
    fetcher.io.iCmd << io.iCmd
    fetcher.io.iRsp << io.iRsp

    val decoder = new Decode()
    fetcher.io.throwIt := decoder.io.fetch_throwIt
    fetcher.io.pcLoad << decoder.io.pcLoad

    decoder.io.regFileSrc0 := regFile.readSync(decoder.io.regFileReadAddress0.asUInt)
    decoder.io.regFileSrc1 := regFile.readSync(decoder.io.regFileReadAddress1.asUInt)
}
