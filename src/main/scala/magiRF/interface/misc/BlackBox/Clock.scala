package magiRF.interface.misc.BlackBox

import spinal.core._
import spinal.lib._

case class IBUFGDS() extends BlackBox{
    val io = new Bundle{
        val I = in(Bool())
        val IB = in(Bool())
        val O = out(Bool())
    }
    noIoPrefix()
}

object IBUFGDS{
    def apply(I: Bool, IB: Bool): Bool = {
        val ibufgds = IBUFGDS()
        ibufgds.io.I <> I
        ibufgds.io.IB <> IB
        ibufgds.io.O
    }
}


case class BUFG() extends BlackBox{
    val io = new Bundle{
        val I = in(Bool())
        val O = out(Bool())
    }
    noIoPrefix()
    io.O := io.I
}


object BUFG{
    def apply(in:Bool): Bool={
        val bufg = BUFG()
        bufg.io.I <> in
        bufg.io.O
    }
}
