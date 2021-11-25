package magiRF.packages.Coder.Convolutional.Decoder

import spinal.core._
import spinal.lib._
import utils.common.Distance.HammingDistance



case class BranchMetric(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle {
        val trellis_unit = in(Vec(config.rawDataType, 2))
        val raw_data = in(config.rawDataIndicateType)
        val dist = out(Vec(config.distType, 2))
    }
    noIoPrefix()

    io.dist(0) := calcDistance(io.trellis_unit(0), io.raw_data.data, io.raw_data.indicate).as(config.distType)
    io.dist(1) := calcDistance(io.trellis_unit(1), io.raw_data.data, io.raw_data.indicate).as(config.distType)

    def calcDistance(trellisUnit: Bits, data: Bits, indicate: Bits): Bits ={
        if(config.usePuncturing){
            indicate.muxList(U(0), genMaskPunctured(trellisUnit, data, config.punctureMask, config.codeRate)).resize(config.distWidth).asBits
        } else {
            if(config.softWidth == 1) {
                HammingDistance(trellisUnit, data).resize(config.distWidth).asBits
            } else {
                val trellis_parity = trellisUnit.asUInt.subdivideIn(config.codeRate slices)
                val data_parity = data.asUInt.subdivideIn(config.codeRate slices)
                slicesSum(trellis_parity, data_parity, config.codeRate - 1).asBits
            }
        }
    }

    def slicesSum(trellisParity: Vec[UInt], dataParity: Vec[UInt], slice_cursor: Int): UInt ={
        val dist = (trellisParity(slice_cursor) === 0) ?
            (dataParity(slice_cursor) - trellisParity(slice_cursor)) |
            (trellisParity(slice_cursor) - dataParity(slice_cursor))
        if(slice_cursor == 0) dist else dist + slicesSum(trellisParity, dataParity, slice_cursor - 1).resize(config.distWidth)
    }

    def genMaskPunctured(trellisUnit: Bits, dataUnit: Bits, mask: Seq[Int], codeRate: Int): Seq[(Int, UInt)] ={
        def genSum(distParity: Vec[UInt], mask: Int, cursor: Int): UInt ={
            if(cursor == (codeRate - 1)){
                if((mask & (1 << cursor)) != 0) distParity(cursor) else U(0)
            }
            else{
                if((mask & (1 << cursor)) != 0)distParity(cursor) + genSum(distParity, mask, cursor + 1)
                else genSum(distParity, mask, cursor + 1)
            }
        }
        val dist_vec = Vec(config.distType, config.codeRate)
        val trellis_parity = trellisUnit.asUInt.subdivideIn(config.codeRate slices)
        val data_parity = dataUnit.asUInt.subdivideIn(config.codeRate slices)
        for(idx <- 0 until config.codeRate){
            if(config.softWidth == 1){
                dist_vec(idx) := HammingDistance(trellis_parity(idx), data_parity(idx)).resized
            }else{
                dist_vec(idx) := (trellis_parity(idx) === 0) ?
                    (data_parity(idx) - trellis_parity(idx)).resized |
                    (trellis_parity(idx) - data_parity(idx)).resized
            }
        }
        mask.distinct.map(i => {(i, genSum(dist_vec, i, 0))})
    }


}
