package magiRF.interface.misc.BaseInterface

import spinal.core._
import spinal.lib._


case class IQ_IF(dataWidth: BitCount) extends Bundle with IMasterSlave {
    val i = Stream(Bits(dataWidth))
    val q = Stream(Bits(dataWidth))

    override def asMaster(): Unit = {
        master(i, q)
    }

    override type RefOwnerType = this.type
}
