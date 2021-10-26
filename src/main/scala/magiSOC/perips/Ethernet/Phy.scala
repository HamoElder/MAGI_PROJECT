package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._
import spinal.lib.io.TriState

case class Mdio() extends Bundle with IMasterSlave{
    val IO = TriState(Bool)
    val C = Bool

    override def asMaster(): Unit = {
        master(IO)
        out(C)
    }
}

case class GmiiParameter(dataWidth : Int,
                         withEr : Boolean)

case class GmiiTx(p : GmiiParameter) extends Bundle with IMasterSlave{
    val EN = Bool()
    val ER = p.withEr generate Bool()
    val TXD = Bits(p.dataWidth bits)

    override def asMaster(): Unit = {
        out(EN, TXD)
        outWithNull(ER)
    }

    def << (that: GmiiTx): Unit = {
        this.EN := that.EN
        this.ER := that.ER
        this.TXD := that.TXD
    }


}

case class GmiiRx(p : GmiiParameter) extends Bundle with IMasterSlave{
    val DV = Bool
    val ER = p.withEr generate Bool
    val RXD = Bits(p.dataWidth bits)

    override def asMaster(): Unit = {
        in(DV, RXD)
        inWithNull(ER)
    }

    def << (that: GmiiRx): Unit = {
        this.DV := that.DV
        this.ER := that.ER
        this.RXD := that.RXD
    }
}

case class Gmii(p : GmiiParameter) extends Bundle with IMasterSlave{
    val TX = GmiiTx(p)
    val RX = GmiiRx(p)

    override def asMaster(): Unit = {
        master(TX, RX)
    }
}
