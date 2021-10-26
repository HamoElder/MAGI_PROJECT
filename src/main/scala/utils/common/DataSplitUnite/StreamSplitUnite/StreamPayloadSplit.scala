package utils.common.DataSplitUnite.StreamSplitUnite

import spinal.core._
import spinal.lib._

case class StreamPayloadSplit[T <: Data, U <: Data](inDataType: T, outDataType: U, useLittleEndian: Boolean = true) extends Component {
    val inDataWidth = inDataType.getBitsWidth
    val outDataWidth = outDataType.getBitsWidth
    require(inDataWidth >= outDataWidth, "The length of input bits width must larger than the output bits width.")
    require((inDataWidth % outDataWidth) == 0, "The input bit width must be a positive integer multiple of the output bit width.")

    val cntDataLimit: Int = inDataWidth / outDataWidth
    def cntDataType: UInt = UInt(log2Up(cntDataLimit + 1) bits)

    val io = new Bundle{
        val raw_data = slave(Stream(inDataType))
        val split_data = master(Stream(outDataType))
    }
    noIoPrefix()

    val cnt = Reg(cntDataType) init(0)
    val data_buf = Reg(inDataType)

    when(io.raw_data.fire){
        data_buf := io.raw_data.payload
        cnt := cntDataLimit
    }.elsewhen(io.split_data.fire){
        cnt := cnt - 1
        if(useLittleEndian){
            data_buf := (data_buf.asBits |>> outDataWidth).as(inDataType)
        } else{
            data_buf := (data_buf.asBits |<< outDataWidth ).as(inDataType)
        }
    }

    io.raw_data.ready := cnt === 0
    io.split_data.valid := cnt =/= 0
    if(useLittleEndian){
        io.split_data.payload := data_buf.asBits.resize(outDataWidth).as(outDataType)
    }else{
        io.split_data.payload := data_buf.asBits.resizeLeft(outDataWidth).as(outDataType)
    }
}

object StreamPayloadSplitBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new StreamPayloadSplit(Bits(32 bits), Bits(8 bits))).printPruned()
    }
}

object StreamPayloadSplitSimApp extends App{
    import spinal.core.sim._

    SimConfig
        .withWave
        .allOptimisation
        .doSim(new StreamPayloadSplit(Bits(32 bits), Bits(8 bits), useLittleEndian = false)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.split_data.ready #= true
            dut.clockDomain.waitSampling(1)
            for(idx <- 0 until 100){
//                dut.io.raw_data.valid #= true
                dut.io.raw_data.valid.randomize()
                dut.io.split_data.ready.randomize()
                dut.io.raw_data.payload #= 0x04030201
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(10)
        }
}
