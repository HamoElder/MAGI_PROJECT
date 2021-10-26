package utils.common.DataSplitUnite.StreamSplitUnite

import spinal.core._
import spinal.lib._

case class StreamPayloadUnite[T <: Data, U <: Data](inDataType: T, outDataType: U, useLittleEndian: Boolean = true) extends Component {
    val inDataWidth = inDataType.getBitsWidth
    val outDataWidth = outDataType.getBitsWidth
    require(outDataWidth >= inDataWidth, "The output bit width must larger than the input bits width.")
    require((outDataWidth % inDataWidth) == 0, "The output bit width must be a positive integer multiple of the input bit width.")
    val cntDataLimit: Int = outDataWidth / inDataWidth
    def cntDataType: UInt = UInt(log2Up(cntDataLimit + 1) bits)

    val io = new Bundle{
        val raw_data = slave(Stream(inDataType))
        val unite_data = master(Stream(outDataType))
    }

    noIoPrefix()

    val cnt = Reg(cntDataType) init(cntDataLimit)
    val data_buf = Reg(outDataType)

    when(io.raw_data.fire){
        cnt := cnt - 1
        if(useLittleEndian){
            data_buf := (io.raw_data.payload ## data_buf.asBits).resizeLeft(outDataWidth).as(outDataType)
        }else{
            data_buf := (data_buf.asBits ## io.raw_data.payload).resize(outDataWidth).as(outDataType)
        }
    }.elsewhen(io.unite_data.fire){
        cnt := cntDataLimit
    }

    io.raw_data.ready := cnt =/= 0
    io.unite_data.valid := cnt === 0
    io.unite_data.payload := data_buf
}


object StreamPayloadUniteBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new StreamPayloadUnite(Bits(8 bits), Bits(24 bits))).printPruned()
    }
}

object StreamPayloadUniteSimApp extends App{
    import spinal.core.sim._

    SimConfig
        .withWave
        .allOptimisation
        .doSim(new StreamPayloadUnite(Bits(8 bits), Bits(32 bits), useLittleEndian = true)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.unite_data.ready #= true
            dut.clockDomain.waitSampling(1)
            for(idx <- 0 until 100){
                //                dut.io.raw_data.valid #= true
                dut.io.raw_data.valid.randomize()
                dut.io.unite_data.ready.randomize()
                dut.io.raw_data.payload #= idx % 4 + 1
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(10)
        }
}