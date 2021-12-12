package magiRF.modules.Filters.Kalman

import magiRF.modules.DSP.CORDIC.{CordicConfig, CordicRotator}
import spinal.core._
import spinal.lib._

case class KalmanFilter(dataTypePeak: Int, dataTypeResolution: Int) extends Component {
    def dataType: SFix = SFix(dataTypePeak exp, -dataTypeResolution exp)
    def delay: Int = dataTypeResolution + 4
    def linearRam(n: Int):Seq[Double] = for (i <- 0 until n) yield Math.pow(2.0, -i)
    def div_cordic_config: CordicConfig = CordicConfig(dataTypePeak exp, -dataTypeResolution exp, dataTypeResolution, linearRam, usePipeline = false, useProgrammable = false)

    val io = new Bundle{
        val clc = in(Bool())
        val raw_data = slave(Stream(dataType))
        val system_var = in(dataType)
        val sensor_var = in(dataType)

        val filtered_data = master(Flow(dataType))
    }
    noIoPrefix()

    val cnt = Reg(UInt(log2Up(delay) bits)) init(0)
    val Q1 = Reg(dataType)
    val Q2 = Reg(dataType)

    when(io.clc){
        cnt := 0
        Q1 := io.system_var
        Q2 := io.sensor_var
    }.elsewhen(io.raw_data.fire || cnt > 1){
        cnt := (cnt === delay)? U(1) | cnt + 1
    }

    val raw_data = Reg(dataType)
    val x_est = Reg(dataType)
    val p_pre = Reg(dataType)

    val var_sum = Reg(dataType)
    val x_est_diff = Reg(dataType)
    val sensor_bias = Reg(dataType)
    val sensor_var = Reg(dataType)

    val div_cordic: CordicRotator = CordicRotator(div_cordic_config)
    div_cordic.io.iter_limit := dataTypeResolution
    div_cordic.io.rotate_mode := False
    div_cordic.io.x_u := 1

    div_cordic.io.raw_data.x := var_sum
    div_cordic.io.raw_data.y := p_pre
    div_cordic.io.raw_data.z := 0
    div_cordic.io.raw_data.valid := RegNext(cnt === 3)
    val K: SFix = div_cordic.io.result.z
    switch(cnt){
        is(0){
            p_pre := 0
            x_est := io.raw_data.payload
        }
        is(1){
            raw_data := io.raw_data.payload
        }
        is(2){
            p_pre := p_pre + Q1
            var_sum := p_pre + Q1 + Q2
            x_est_diff := (raw_data - x_est)
        }
        is(delay - 2){
            sensor_bias := (K * x_est_diff).truncated
            sensor_var := (K * p_pre).truncated
        }
        is(delay - 1){
            x_est := x_est + sensor_bias
            p_pre := p_pre - sensor_var
        }
    }

    io.raw_data.ready := (cnt === 0) || (cnt === 1)
    io.filtered_data.valid := (cnt === delay)
    io.filtered_data.payload := x_est

}

object KalmanFilterBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/KalmanFilter").generateSystemVerilog(new KalmanFilter(15, 16)).printPruned()
    }
}