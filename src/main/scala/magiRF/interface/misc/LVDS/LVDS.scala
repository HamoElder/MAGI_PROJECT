package magiRF.interface.misc.LVDS

import spinal.core._
import spinal.lib._


case class LVDS[T <: Data](dataType: T) extends Bundle with IMasterSlave {
    val p = cloneOf(dataType)
    val n = cloneOf(dataType)

    override def asMaster(): Unit = {
        out(p, n)
    }

    override type RefOwnerType = this.type
}
