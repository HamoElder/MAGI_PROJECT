package magiRF.packages.Equalizer

import Misc.math.Complex
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class SCEqualizer(
                          dataTypePeak          : ExpNumber = 8 exp,
                          dataTypeResolution    : ExpNumber = -2 exp,
                          refSeqArray           : Array[Complex],
                          iterations: Int
                      ) extends Component{
    def dataWidth: Int = dataTypePeak.value - dataTypeResolution.value + 1
    def chaSize: Int = refSeqArray.length
    def dataType: SInt = SInt(dataWidth bits)
    def cntDataWidth: Int = log2Up(chaSize)
    def cntDataType: UInt = UInt(cntDataWidth bits)
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(IQBundle(dataType))))
        val equalized_data = master(Flow(Fragment(IQBundle(dataType))))
    }
    noIoPrefix()

    val cha_i_scale = Reg(dataType)
    val cha_q_scale = Reg(dataType)

}


object ZeroForcingSimApp extends App {
    import spinal.core.sim._

    SimConfig.withWave.allOptimisation
        .doSim(new ZeroForcing(3 exp, -12 exp, 16)) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.train_en #= false
            dut.clockDomain.waitSampling(10)

            /**
             * Train
             */
            dut.io.train_en #= true
            for(idx <- 1 until 100){
                dut.io.raw_data.payload #= (-idx << 6)
                dut.io.ref_data #= ((1.5*idx).toInt << 6)
                dut.io.raw_data.valid #= true
                //                dut.io.raw_data.valid.randomize()
                dut.clockDomain.waitSampling(1)
            }

            /**
             * Eq
             */
            dut.io.train_en #= false
            for(idx <- 1 until 100){
                dut.io.raw_data.payload #= (idx << 6)
                dut.io.scale #= (1 << 12) +  (1 << 11) + (1 << 10)
                dut.io.raw_data.valid #= true
                //                dut.io.raw_data.valid.randomize()
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(50)
        }
}