package utils.common.Divider

import spinal.core._
import spinal.lib._

case class MixedDividerCmd(nWidth : Int, dWidth : Int) extends Bundle{
    val numerator = Bits(nWidth bit)
    val denominator = Bits(dWidth bit)
    val signed = Bool()
}
case class MixedDividerRsp(nWidth : Int, dWidth : Int) extends Bundle{
    val quotient = Bits(nWidth bit)
    val remainder = Bits(dWidth bit)
    val error = Bool()
}

class MixedDivider(nWidth : Int, dWidth : Int,usePipeline : Boolean) extends Component {
    val io = new Bundle {
        val flush = in Bool()
        val cmd = slave Stream (MixedDividerCmd(nWidth, dWidth))
        val rsp = master Stream (MixedDividerRsp(nWidth, dWidth))
    }
    noIoPrefix()
    val divider = new UnsignedDivider(nWidth,dWidth,usePipeline, Bits(2 bit))

    divider.io.flush := io.flush
    divider.io.cmd.arbitrationFrom(io.cmd)
    divider.io.cmd.numerator := io.cmd.numerator.asSInt.abs(io.cmd.signed)
    divider.io.cmd.denominator := io.cmd.denominator.asSInt.abs(io.cmd.signed)
    divider.io.cmd.context(0) := io.cmd.signed && (io.cmd.numerator.msb ^ io.cmd.denominator.msb)
    divider.io.cmd.context(1) := io.cmd.signed && io.cmd.numerator.msb

    io.rsp.arbitrationFrom(divider.io.rsp)
    io.rsp.quotient := divider.io.rsp.quotient.twoComplement(divider.io.rsp.context(0)).asBits.resized
    io.rsp.remainder := divider.io.rsp.remainder.twoComplement(divider.io.rsp.context(1)).asBits.resized
    io.rsp.error := divider.io.rsp.error
}
