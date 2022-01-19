package utils.common.Divider

import spinal.core._
import spinal.lib._


case class UnsignedDividerCmd[T <: Data](nWidth: Int, dWidth: Int, contextType: T) extends Bundle{
    val numerator = UInt(nWidth bits)
    val denominator = UInt(dWidth bits)
    val context = cloneOf(contextType)
}

case class UnsignedDividerRsp[T <: Data](nWidth: Int, dWidth: Int, contextType: T) extends Bundle{
    val quotient = UInt(nWidth bits)
    val remainder = UInt(dWidth bits)
    val error = Bool()
    val context = cloneOf(contextType)
}


class UnsignedDivider[T <: Data](nWidth: Int, dWidth: Int, usePipeline: Boolean, contextType : T = NoData) extends Component{
    val io = new Bundle{
        val flush = in(Bool())
        val cmd = slave(Stream(UnsignedDividerCmd(nWidth = nWidth, dWidth = dWidth, contextType = contextType)))
        val rsp = master(Stream(UnsignedDividerRsp(nWidth, dWidth, contextType)))
    }
    noIoPrefix()
    if(usePipeline){
        val cmdFire = Vec(RegInit(False), nWidth + 1)
        val numerator = Vec(Reg(UInt(nWidth bit)), nWidth + 1)
        val denominator = Vec(Reg(UInt(dWidth bits)), nWidth + 1)
        val context = Vec(Reg(contextType), nWidth + 1)
        val remainder = Vec(Reg(UInt(dWidth bits)), nWidth + 1)

        val remainderShifted = Vec(UInt(dWidth + 1 bits), nWidth)
        val remainderMinusDenominator = Vec(UInt(dWidth + 1 bits), nWidth)

        for(idx <- 0 until nWidth){
            remainderShifted(idx) := (remainder(idx) ## numerator(idx).msb).asUInt
            remainderMinusDenominator(idx) := remainderShifted(idx) - denominator(idx)
        }
        io.cmd.ready := io.rsp.ready
//        val pipelineHalt = !io.rsp.ready

//        when(!pipelineHalt){
            cmdFire(0) := io.flush ? False | io.cmd.fire
            context(0) := io.cmd.context
            denominator(0) := io.cmd.denominator

            remainder(0) := 0
            numerator(0) := io.cmd.numerator

            for(idx <- 1 to nWidth){
                cmdFire(idx) := io.flush ? False | cmdFire(idx - 1)
                context(idx) := context(idx - 1)
                denominator(idx) := denominator(idx - 1)

                numerator(idx) := (numerator(idx - 1) ## !remainderMinusDenominator(idx - 1).msb).asUInt.resized
                when(!remainderMinusDenominator(idx - 1).msb){
                    remainder(idx) := remainderMinusDenominator(idx - 1).resized
                }.otherwise{
                    remainder(idx) := remainderShifted(idx - 1).resized
                }
            }
//        }

        io.rsp.valid := cmdFire(nWidth)
        io.rsp.quotient := numerator(nWidth)
        io.rsp.remainder := remainder(nWidth)
        io.rsp.context := context(nWidth)
        io.rsp.error := denominator(nWidth) === 0

    }else{
        val status = Reg(UInt(2 bits)) init(0)
        val cmdReady = RegInit(False)
        val rspValid = RegInit(False)
        val counter = Counter(nWidth)
        val numerator = Reg(UInt(nWidth bit))
        val denominator = Reg(UInt(dWidth bit))
        val context = Reg(contextType)
        val remainder = Reg(UInt(dWidth bit))
        val remainderShifted = (remainder ## numerator.msb).asUInt
        val remainderMinusDenominator = remainderShifted - denominator

        io.cmd.ready := cmdReady
        io.rsp.valid := rspValid
        io.rsp.quotient := numerator
        io.rsp.remainder := remainder
        io.rsp.context := context
        io.rsp.error := denominator === 0

        switch(status){
            is(0){
                // IDLE
                when(io.cmd.fire){
                    counter.clear()
                    remainder := 0
                    numerator := io.cmd.numerator
                    denominator := io.cmd.denominator
                    context := io.cmd.context
                    status := 1
                    cmdReady := False
                }.otherwise{
                    cmdReady := True
                }
                rspValid := False
            }
            is(1){
                // Calculating
                counter.increment()
                numerator := (numerator ## !remainderMinusDenominator.msb).asUInt.resized
                when(!remainderMinusDenominator.msb){
                    remainder := remainderMinusDenominator.resized
                }.otherwise{
                    remainder := remainderShifted.resized
                }

                when(io.flush){
                    status := 0
                    cmdReady := True
                    rspValid := False
                }.elsewhen(counter.willOverflow) {
                    status := 2
                    rspValid := True
                }
            }
            is(2){
                when(io.flush){
                    status := 0
                    cmdReady := True
                    rspValid := False
                }.elsewhen(io.rsp.fire) {
                    rspValid := False
                    cmdReady := True
                    status := 0
                }
            }
            default{
                status := 0
            }
        }
    }

}
