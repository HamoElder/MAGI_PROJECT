package magiRF.packages.CFO

import magiRF.modules.DSP.CORDIC.{CordicConfig, CordicRotator}
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class PhaseRotatorConfig(
                             iqWidth               : Int,
                             iterations            : Int,
                             dataTypePeak          : ExpNumber = 10 exp,
                             dataTypeResolution    : ExpNumber = -5 exp
                             ){
    require((dataTypePeak.value - dataTypeResolution.value) == (iqWidth - 1), "The dataWidth of IQ Channel must equal to the dataWidth of Cordic data channel.")
    def dataType: SInt = SInt(iqWidth bits)
    def phiDataType: SFix = SFix(dataTypePeak, dataTypeResolution)
    def cordicConfig: CordicConfig = CordicConfig(dataTypePeak, dataTypeResolution, iterations = iterations, usePipeline = true)
}

case class PhaseRotator(config: PhaseRotatorConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(config.dataType)))
        val rotated_data = master(Stream(IQBundle(config.dataType)))
        val phiCorrect = in(config.dataType)
    }
    noIoPrefix()

    val cordic_pipeline_core = CordicRotator(config.cordicConfig)

    val phi = Reg(config.dataType)
    val phiNext = config.dataType
    val math_pi = config.phiDataType
    val math_2_pi = config.phiDataType
    math_pi := Math.PI
    math_2_pi := 2 * Math.PI

    when((phi + io.phiCorrect) > math_pi.raw){
        phiNext := phi - math_2_pi.raw + io.phiCorrect
    }.elsewhen((phi + io.phiCorrect) < (-math_pi.raw)){
        phiNext := phi + math_2_pi.raw + io.phiCorrect
    }.otherwise{
        phiNext := phi + io.phiCorrect
    }

    when(io.raw_data.valid){
        phi := phiNext
    }.otherwise{
        phi := 0
    }

    cordic_pipeline_core.io.rotate_mode := True
    cordic_pipeline_core.io.x_u := 0

    cordic_pipeline_core.io.raw_data.valid := io.raw_data.valid
    cordic_pipeline_core.io.raw_data.x.raw := io.raw_data.cha_i
    cordic_pipeline_core.io.raw_data.y.raw := io.raw_data.cha_q
    cordic_pipeline_core.io.raw_data.z.raw := phi


    io.rotated_data.valid := cordic_pipeline_core.io.result.valid
    io.rotated_data.cha_i := cordic_pipeline_core.io.result.x.raw
    io.rotated_data.cha_q := cordic_pipeline_core.io.result.y.raw
    cordic_pipeline_core.io.result.ready := io.rotated_data.ready
}


object PhaseRotatorBench{
    def main(args: Array[String]): Unit={
        val phase_rotator_config = PhaseRotatorConfig(16, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/PhaseRotator").generateSystemVerilog(new PhaseRotator(phase_rotator_config)).printPruned()
    }
}

