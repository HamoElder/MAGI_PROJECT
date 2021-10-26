package magiRF.packages.Coder.Convolutional.Decoder

import spinal.lib._
import spinal.core._
import utils.common.ValOP.MinVal

case class PathMetric(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(config.rawDataType))
        val clc = in(Bool())

        val min_idx = out(config.minIndexDataType)
        val s_path = master(Flow(config.survivalPathDataType))
    }
    noIoPrefix()

    val node_weight = Vec(Reg(config.nodeWeightType), size = config.statesNum)
    val candidate_branches = Vec(Reg(config.distType), size = config.trellisSize)
    val survival_path = Reg(config.survivalPathDataType)

    val raw_data_next = RegNext(io.raw_data.valid)
    val survival_path_valid = Reg(Bool()) init(False)
    for (idx <- 0 until config.trellisSize by 2){
        val bmu = BranchMetric(config)
        bmu.io.trellis_unit(0) := ViterbiGen.TrellisGen(config)._3(idx)
        bmu.io.trellis_unit(1) := ViterbiGen.TrellisGen(config)._3(idx + 1)
        bmu.io.raw_data := io.raw_data.payload
        candidate_branches(idx) := bmu.io.dist(0)
        candidate_branches(idx + 1) := bmu.io.dist(1)

        val acs = AddCompareSelect(config)
        acs.io.last_state_weight(0) := node_weight(ViterbiGen.TrellisGen(config)._2(idx))
        acs.io.last_state_weight(1) := node_weight(ViterbiGen.TrellisGen(config)._2(idx + 1))
        acs.io.dist(0) := candidate_branches(idx).resized
        acs.io.dist(1) := candidate_branches(idx + 1).resized
        when(io.clc){
            node_weight(ViterbiGen.TrellisGen(config)._1(idx)) := 0
            survival_path := 0
            survival_path_valid := False
        }.elsewhen(raw_data_next){
            node_weight(ViterbiGen.TrellisGen(config)._1(idx)) := acs.io.state_weight
            survival_path(ViterbiGen.TrellisGen(config)._1(idx)) := acs.io.decision
            survival_path_valid := True
        }.otherwise{
            survival_path_valid := False
        }
    }

    io.s_path.payload := survival_path
    io.s_path.valid := survival_path_valid

    val min_idx_val = MinVal(node_weight, useSign = false, useIndex= true, useCombLogic = config.useCombLogic)
    io.min_idx := min_idx_val._1
}
