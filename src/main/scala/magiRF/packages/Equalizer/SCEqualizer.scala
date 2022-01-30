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
