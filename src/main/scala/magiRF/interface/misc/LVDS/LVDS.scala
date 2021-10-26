package magiRF.interface.misc.LVDS

import spinal.core._
import spinal.lib._


case class LVDS() extends Bundle with IMasterSlave {
    val p = Bool()
    val n = Bool()

    override def asMaster(): Unit = {
        out(p, n)
    }

    override type RefOwnerType = this.type
}
