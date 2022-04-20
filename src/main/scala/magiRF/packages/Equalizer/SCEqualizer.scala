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
    def seqSize: Int = refSeqArray.length
    def dataType: SInt = SInt(dataWidth bits)
    def cntDataWidth: Int = log2Up(seqSize)
    def cntDataType: UInt = UInt(cntDataWidth bits)
    val io = new Bundle{
        val raw_data = slave(Flow(IQBundle(dataType)))
        val equalized_data = master(Flow(IQBundle(dataType)))
        val train_en = in(Bool())
        val train_finish = out(Bool())
    }
    noIoPrefix()

    val cha_i_scale = Reg(dataType)
    val cha_q_scale = Reg(dataType)

    val cha_i_ref = Vec(Reg(dataType), seqSize)
    val cha_q_ref = Vec(Reg(dataType), seqSize)

    for(idx <- 0 until seqSize){
        cha_i_ref(idx) := refSeqArray(idx).re.toInt
        cha_q_ref(idx) := refSeqArray(idx).im.toInt
    }

    val cnt = Reg(cntDataType) init(0)
    when(io.train_en){

    }.elsewhen(io.raw_data.fire){
        cnt := cnt + 1
    }.otherwise{

    }


}
