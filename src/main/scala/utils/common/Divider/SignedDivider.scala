package utils.common.Divider

import spinal.core._
import spinal.lib._

case class SignedDividerCmd(nWidth : Int, dWidth : Int) extends Bundle{
    val numerator = SInt(nWidth bit)
    val denominator = SInt(dWidth bit)
}

case class SignedDividerRsp(nWidth : Int, dWidth : Int) extends Bundle{
    val quotient = SInt(nWidth bit)
    val remainder = SInt(dWidth bit)
    val error = Bool()
}

class SignedDivider(nWidth : Int, dWidth : Int,usePipeline : Boolean) extends Component{
    val io = new Bundle{
        val flush = in Bool()
        val cmd = slave Stream(SignedDividerCmd(nWidth,dWidth))
        val rsp = master Stream(SignedDividerRsp(nWidth,dWidth))
    }
    noIoPrefix()

    val divider = new UnsignedDivider(nWidth,dWidth,usePipeline, Bits(2 bit))
    divider.io.flush := io.flush
    divider.io.cmd.arbitrationFrom(io.cmd)
    divider.io.cmd.numerator := io.cmd.numerator.abs
    divider.io.cmd.denominator := io.cmd.denominator.abs
    divider.io.cmd.context(0) := (io.cmd.numerator.msb ^ io.cmd.denominator.msb)
    divider.io.cmd.context(1) := io.cmd.numerator.msb

    io.rsp.arbitrationFrom(divider.io.rsp)
    io.rsp.quotient := divider.io.rsp.quotient.twoComplement(divider.io.rsp.context(0)).asBits.resize(nWidth).asSInt
    io.rsp.remainder := divider.io.rsp.remainder.twoComplement(divider.io.rsp.context(1)).asBits.resize(dWidth).asSInt
    io.rsp.error := divider.io.rsp.error
}