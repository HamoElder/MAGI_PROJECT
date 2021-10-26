package magiRF.packages.Coder.Convolutional.Decoder

import spinal.core._
import spinal.lib._

case class AddCompareSelect(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle{
        val last_state_weight = in(Vec(config.nodeWeightType, 2))
        val dist = in(Vec(config.nodeWeightType, 2))
        val state_weight = out(config.nodeWeightType)
        val decision = out(Bool())
    }

    noIoPrefix()
    val branch_weight_0 = io.last_state_weight(0) + io.dist(0)
    val branch_weight_1 = io.last_state_weight(1) + io.dist(1)
    when(branch_weight_0 <= branch_weight_1){
        io.state_weight := branch_weight_0
        io.decision := False
    }.otherwise{
        io.state_weight := branch_weight_1
        io.decision := True
    }

}
