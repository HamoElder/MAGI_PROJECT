package magiRF.packages.CFO

import magiRF.modules.DSP.CORDIC.{CordicConfig, CordicRotator}
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle
import utils.common.ShiftReg.ShiftRegister

case class PhaseRotatorConfig(
                             iqWidth               : Int,
                             iterations            : Int,
                             dataResolutionWidth   : Int = 0
                             ){
//    require((dataTypePeak.value - dataTypeResolution.value) == (iqWidth - 1), "The dataWidth of IQ Channel must equal to the dataWidth of Cordic data channel.")
    def dataType: SInt = SInt(iqWidth bits)
    def phiDataType: SFix = SFix(iqWidth - 1 exp, -dataResolutionWidth exp)
    def linearRam(n: Int):Seq[Double] = for (i <- 0 until n) yield Math.pow(2.0, -i)
    def arctanRam(n: Int):Seq[Double] = linearRam(n).map(Math.atan)
    def cordicConfig: CordicConfig = CordicConfig(iqWidth exp, -dataResolutionWidth exp, iterations = iterations, arctanRam, usePipeline = true)
}

case class PhaseRotator(config: PhaseRotatorConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(config.dataType)))
        val delta_phi = slave(Flow(config.phiDataType))
        val rotated_data: Flow[IQBundle[SInt]] = master(Flow(IQBundle(config.dataType)))
    }
    noIoPrefix()

    val cordic_pipeline_core = CordicRotator(config.cordicConfig)

    val xy_symbol = Reg(Bool()) init(False)
    val xy_symbol_delay = ShiftRegister(xy_symbol, config.iterations, enable = io.raw_data.valid, clear = ~io.raw_data.valid, useInitZero=true)

    val phi = Reg(config.phiDataType)  init(0)
    val phiNext = config.phiDataType

    val phiCorrect = Reg(config.phiDataType) init(0)

    val math_pi = config.phiDataType
    val math_pi_2 = config.phiDataType
    val neg_math_pi_2 = config.phiDataType
    math_pi := Math.PI
    math_pi_2 := Math.PI / 2
    neg_math_pi_2 := -Math.PI / 2

    when((phi + phiCorrect) >= math_pi_2){
        phiNext := phi - math_pi + phiCorrect
        xy_symbol := ~xy_symbol
    }.elsewhen((phi + phiCorrect) <= neg_math_pi_2){
        phiNext := phi + math_pi + phiCorrect
        xy_symbol := ~xy_symbol
    }.otherwise{
        phiNext := phi + phiCorrect
    }

    when(io.raw_data.valid){
        phi := phiNext
        when(io.delta_phi.valid){
            phiCorrect := io.delta_phi.payload
        }
    }.otherwise{
        phi := 0
        phiCorrect := 0
    }

    cordic_pipeline_core.io.rotate_mode := True
    cordic_pipeline_core.io.x_u := 0

    cordic_pipeline_core.io.raw_data.valid := io.raw_data.valid
    cordic_pipeline_core.io.raw_data.x.raw := (io.raw_data.cha_i ## B(0, config.dataResolutionWidth bits)).asSInt.resized
    cordic_pipeline_core.io.raw_data.y.raw := (io.raw_data.cha_q ## B(0, config.dataResolutionWidth bits)).asSInt.resized
    cordic_pipeline_core.io.raw_data.z := phi

    val rotated_x_raw: SInt = cordic_pipeline_core.io.result.x.raw.round(config.dataResolutionWidth + 1)
    val rotated_y_raw: SInt = cordic_pipeline_core.io.result.y.raw.round(config.dataResolutionWidth + 1)

    io.rotated_data.valid := cordic_pipeline_core.io.result.valid
    io.rotated_data.cha_i := xy_symbol_delay ? -rotated_x_raw | rotated_x_raw
    io.rotated_data.cha_q := xy_symbol_delay ? -rotated_y_raw | rotated_y_raw

}


object PhaseRotatorBench{
    def main(args: Array[String]): Unit={
        val phase_rotator_config = PhaseRotatorConfig(16, 16, 14)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/PhaseRotator").generateSystemVerilog(new PhaseRotator(phase_rotator_config)).printPruned()
    }
}

