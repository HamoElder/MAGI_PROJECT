package magiRF.packages.Equalizer

import magiRF.modules.DSP.CORDIC.{CordicConfig, CordicRotator}
import spinal.core._
import spinal.lib._
import utils.common.Divider.{MixedDivider, SignedDivider, UnsignedDivider}


case class ZeroForcing(dataTypePeak          : ExpNumber = 8 exp,
                       dataTypeResolution    : ExpNumber = -2 exp, iterations: Int) extends Component{
    def dataWidth: Int = dataTypePeak.value - dataTypeResolution.value + 1
    def dataType: SInt = SInt(dataWidth bits)
    /**
     * Get sequences of length n that go 1.0, 0.5, 0.25, ...
     */
    def linearRam(n: Int):Seq[Double] = for (i <- 0 until n) yield Math.pow(2.0, -i)
    val cordic_config: CordicConfig = CordicConfig(dataTypePeak, dataTypeResolution, iterations, linearRam, usePipeline = true)
    val io = new Bundle{
        val raw_data = slave(Stream(dataType))
        val scale = in(dataType)
        val ref_data = in(dataType)
        val train_en = in(Bool())

        val result_data = master(Flow(dataType))
    }
    noIoPrefix()
    val cal_core = CordicRotator(cordic_config)
    val x_sign = Delay(io.raw_data.payload.sign, iterations)
    cal_core.io.raw_data.x.raw := io.raw_data.payload.abs.asSInt
    cal_core.io.raw_data.y.raw := io.train_en ? io.ref_data | S(0)
    cal_core.io.raw_data.z.raw := io.train_en ? S(0) | io.scale
    cal_core.io.raw_data.valid := io.raw_data.valid
    io.raw_data.ready := cal_core.io.raw_data.ready

    cal_core.io.rotate_mode := ~io.train_en
    cal_core.io.x_u := 1

    io.result_data.valid := cal_core.io.result.valid
    val mul_result = x_sign ? -cal_core.io.result.y.raw | cal_core.io.result.y.raw
    val div_result = x_sign ? -cal_core.io.result.z.raw | cal_core.io.result.z.raw
    io.result_data.payload := Delay(io.train_en, iterations) ? div_result | mul_result

}

object ZeroForcingBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(targetDirectory = "rtl/ZeroForcing").generateSystemVerilog(new ZeroForcing(9 exp, -6 exp, 16)).printPruned()
    }
}