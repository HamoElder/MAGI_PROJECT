package magiRF.interface.misc.BlackBox

import spinal.core._
import spinal.lib._

case class IBUFDS() extends BlackBox{
    val io = new Bundle{
        val I = in(Bool())
        val IB = in(Bool())
        val O = out(Bool())
    }
    noIoPrefix()
}

object IBUFDS{
    def apply(I: Bool, IB: Bool): Bool = {
        val ibufds = IBUFDS()
        ibufds.io.I <> I
        ibufds.io.IB <> IB
        ibufds.io.O
    }
}

case class OBUFDS() extends BlackBox{
    val io = new Bundle{
        val I = in(Bool())
        val O = out(Bool())
        val OB = out(Bool())
    }
    noIoPrefix()
}

case class IDDR(ClkEdge: String, Q1Init: Boolean, Q2Init: Boolean, SRType: String) extends BlackBox{
    val generic = new Generic {
        val DDR_CLK_EDGE = ClkEdge
        val INIT_Q1 = if(Q1Init) 1 else 0
        val INIT_Q2 = if(Q2Init) 1 else 0
        val SRTYPE = SRType
    }

    val io = new Bundle{
        val CE = in(Bool())
        val R = in(Bool())
        val S = in(Bool())
        val C = in(Bool())
        val D = in(Bool())
        val Q1 = out(Bool())
        val Q2 = out(Bool())
    }
    noIoPrefix()
}

case class ODDR(ClkEdge: String, Init: Boolean, SRType: String) extends BlackBox{
    val generic = new Generic {
        val DDR_CLK_EDGE = ClkEdge
        val INIT = if(Init) 1 else 0
        val SRTYPE = SRType
    }

    val io = new Bundle{
        val CE = in(Bool())
        val R = in(Bool())
        val S = in(Bool())
        val C = in(Bool())
        val D1 = in(Bool())
        val D2 = in(Bool())
        val Q = out(Bool())
    }
    noIoPrefix()
}
