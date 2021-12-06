package utils.common.Sort

import spinal.core._
import spinal.lib._

case class IdxWithData(dataType: Bits, idxType: UInt, useSigned: Boolean = true) extends Bundle with IMasterSlave{
    val data = cloneOf(dataType)
    val idx = cloneOf(idxType)

    def := (that: IdxWithData): Unit = {
        this.data := that.data
        this.idx := that.idx
    }

    def < (that: IdxWithData): Bool = {
        if(useSigned)
            this.data.asSInt < that.data.asSInt
        else
            this.data.asUInt < that.data.asUInt
    }

    def >(that: IdxWithData): Bool = {
        that < this
    }

    def <=(that: IdxWithData):Bool ={
        if(useSigned)
            this.data.asSInt <= that.data.asSInt
        else
            this.data.asUInt <= that.data.asUInt
    }

    def >=(that: IdxWithData): Bool = {
        that <= this
    }

    override def asMaster(): Unit = {
        out(data, idx)
    }

    override type RefOwnerType = this.type
}

case class CmpSwitch(dataType: Bits, idxType: UInt, useSigned: Boolean = true) extends Component{
    val io = new Bundle{
        val in1 = slave(IdxWithData(dataType, idxType, useSigned))
        val in2 = slave(IdxWithData(dataType, idxType, useSigned))
        val sel = in(Bool())
        val out1 = master(IdxWithData(dataType, idxType, useSigned))
        val out2 = master(IdxWithData(dataType, idxType, useSigned))
    }
    noIoPrefix()

    io.out1 := Mux(io.sel, io.in2, io.in1)
    io.out2 := Mux(io.sel, io.in1, io.in2)
}

object CmpSwitch{
    def apply(in1: IdxWithData, in2: IdxWithData, sel: Bool):(IdxWithData, IdxWithData) = {
        val switch_unit = CmpSwitch(in1.dataType, in1.idxType, in1.useSigned)
        switch_unit.io.in1 := in1
        switch_unit.io.in2 := in2
        switch_unit.io.sel := sel
        (switch_unit.io.out1, switch_unit.io.out2)
    }
}

case class CmpUnit(dataType: Bits, idxType: UInt, useSigned: Boolean = true) extends Component{
    val io = new Bundle{
        val in1: IdxWithData = slave(IdxWithData(dataType, idxType, useSigned))
        val in2: IdxWithData = slave(IdxWithData(dataType, idxType, useSigned))
        val less: Bool = in(Bool())
        val out1: IdxWithData = master(IdxWithData(dataType, idxType, useSigned))
        val out2: IdxWithData = master(IdxWithData(dataType, idxType, useSigned))
    }
    noIoPrefix()
    val cmp_less_result: Bool = io.in1 < io.in2
    val cmp_sel: Bool = io.less ? cmp_less_result | !cmp_less_result
    io.out1 := Mux(cmp_sel, io.in1, io.in2)
    io.out2 := Mux(cmp_sel, io.in2, io.in1)
}

object CmpUnit {
    def apply(in1: IdxWithData, in2: IdxWithData, cmp_less: Bool): (IdxWithData, IdxWithData) = {
        val cmp_unit = CmpUnit(in1.dataType, in1.idxType, in1.useSigned)
        cmp_unit.io.in1 := in1
        cmp_unit.io.in2 := in2
        cmp_unit.io.less := cmp_less
        (cmp_unit.io.out1, cmp_unit.io.out2)
    }
}
