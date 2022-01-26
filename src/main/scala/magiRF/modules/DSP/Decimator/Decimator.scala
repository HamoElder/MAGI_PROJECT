package magiRF.modules.DSP.Decimator

import spinal.core._
import spinal.lib._

case class Decimator[T <: Data](dataType: T, nDecimation: Int) extends Component {
    def cntDataWidth = log2Up(nDecimation)
    def cntDataType = UInt(cntDataWidth bits)
    val io = new Bundle{
        val in = slave(Flow(dataType))
        val out = master(Flow(dataType))
    }
    noIoPrefix()
    val cnt = Reg(cntDataType) init(0)

    val out_data = Reg(dataType)
    val out_valid = Reg(Bool()) init(False)
    when(io.in.valid){
        cnt := (cnt === nDecimation - 1) ? U(0) | cnt + 1
    }
    when(io.in.valid){
        when (cnt === nDecimation - 1){
            out_valid := True
            out_data := io.in.payload
        }.otherwise{
            out_valid := False
        }
    }.otherwise{
        out_valid := False
    }
    io.out.payload := out_data
    io.out.valid := out_valid
}

object DecimatorSimApp extends App{
    import spinal.core.sim._

    SimConfig.withWave.doSim(new Decimator(SInt(12 bits), 5)){ dut =>
        dut.clockDomain.forkStimulus(5)

        dut.io.in.valid #= false
        dut.io.in.payload #= 0xff
        dut.clockDomain.waitSampling(1)
        dut.clockDomain.reset
        dut.clockDomain.waitSampling(10)
        var valid_bool = false
        for(idx <- 1 until 128){
            valid_bool = !valid_bool
            dut.io.in.valid.randomize()
            dut.io.in.payload #= idx
            dut.clockDomain.waitSampling(1)
        }
        dut.io.in.valid #= false
        dut.clockDomain.waitSampling(10)
    }
}

