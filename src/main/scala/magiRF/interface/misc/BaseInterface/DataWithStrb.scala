package magiRF.interface.misc.BaseInterface

import spinal.core._
import spinal.lib._

case class DataWithStrb[T <: Data](payloadType: T, useStrb: Boolean = false) extends Bundle with IMasterSlave {
    val data = cloneOf(payloadType)
    val strb = if(useStrb) Bits((payloadType.getBitsWidth / 8) bits) else null

    override def asMaster(): Unit = {
        out(data)
        if(useStrb) out(strb)
    }

    def setStrb(): Unit = strb := (1 << widthOf(strb)) - 1
    def setStrb(bytesLane: Bits): Unit = strb := bytesLane

    def :=(that: DataWithStrb[T]): Unit = {
        this.data := that.data
        if (useStrb) {
            this.strb := that.strb
        }
    }
    override type RefOwnerType = this.type
}
