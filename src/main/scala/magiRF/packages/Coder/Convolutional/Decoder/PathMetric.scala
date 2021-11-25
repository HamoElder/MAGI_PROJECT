package magiRF.packages.Coder.Convolutional.Decoder

import spinal.lib._
import spinal.core._
import utils.common.ValOP.MinVal

case class PathMetric(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(config.rawDataIndicateType)))
        val tbu_finished = in(Bool())

        val min_idx = out(config.statesType)
        val s_path = master(Flow(Fragment(config.survivalPathDataType)))
    }
    noIoPrefix()

    val node_weight = Vec(Reg(config.nodeWeightType), size = config.statesNum)
    val candidate_branches = Vec(Reg(config.distType), size = config.trellisSize)
    val survival_path = Reg(config.survivalPathDataType)

    val raw_data_next = RegNext(io.raw_data.valid) init(False)
    val raw_data_last_next = RegNext(io.raw_data.last) init(False)
    val survival_path_valid = Reg(Bool()) init(False)
    val survival_path_last = Reg(Bool()) init(False)

    val raw_data_ready = Reg(Bool()) init(False)
    when(io.tbu_finished){
        raw_data_ready := True
    }.elsewhen(io.raw_data.last && io.raw_data.valid){
        raw_data_ready := False
    }
    for (idx <- 0 until config.trellisSize by 2){
        val bmu = BranchMetric(config)
        bmu.io.trellis_unit(0) := ViterbiGen.TrellisGen(config)._3(idx)
        bmu.io.trellis_unit(1) := ViterbiGen.TrellisGen(config)._3(idx + 1)
        bmu.io.raw_data := io.raw_data.fragment
        candidate_branches(idx) := bmu.io.dist(0)
        candidate_branches(idx + 1) := bmu.io.dist(1)

        val acs = AddCompareSelect(config)
        acs.io.last_state_weight(0) := node_weight(ViterbiGen.TrellisGen(config)._2(idx))
        acs.io.last_state_weight(1) := node_weight(ViterbiGen.TrellisGen(config)._2(idx + 1))
        acs.io.dist(0) := candidate_branches(idx).resized
        acs.io.dist(1) := candidate_branches(idx + 1).resized
        when(io.tbu_finished){
            node_weight(ViterbiGen.TrellisGen(config)._1(idx)) := 0
            survival_path := 0
            survival_path_valid := False
            survival_path_last := False
        }.elsewhen(raw_data_next){
            node_weight(ViterbiGen.TrellisGen(config)._1(idx)) := acs.io.state_weight
            survival_path(ViterbiGen.TrellisGen(config)._1(idx)) := acs.io.decision
            survival_path_valid := True
            survival_path_last := raw_data_last_next
        }.otherwise{
            survival_path_valid := False
            survival_path_last := False
        }
    }

    io.raw_data.ready := raw_data_ready
    io.s_path.payload := survival_path
    io.s_path.valid := survival_path_valid
    io.s_path.last := survival_path_last

    val min_idx_val = MinVal(node_weight, useSign = false, useIndex= true, useCombLogic = config.useCombLogic)
    io.min_idx := min_idx_val._1
}
