package utils.bus.IQBundle

import magiRF.modules.DSP.FFT.Complex
import spinal.core._
import spinal.lib._

case class IQBundle[T <: Data](dataType: T, useStrb: Boolean = false) extends Bundle with IMasterSlave {
    val cha_i = cloneOf(dataType)
    val cha_q = cloneOf(dataType)
    val strb = if (useStrb) Bits(dataType.getBitsWidth / 8 bits) else null

    def setStrb(): Unit = strb := (1 << widthOf(strb)) - 1

    def setStrb(bytesLane: Bits): Unit = strb := bytesLane

    override def asMaster(): Unit = {
        out(cha_i, cha_q)
        if (useStrb) out(strb)
    }

    def :=(that: IQBundle[T]): Unit = {
        this.cha_i := that.cha_i
        this.cha_q := that.cha_q
        if (useStrb) {
            this.strb := that.strb
        }
    }

    override type RefOwnerType = this.type
}
