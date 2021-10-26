package magiRF.packages.Coder.Convolutional.Decoder

import spinal.core._
import spinal.lib._
import utils.common.Distance.HammingDistance



case class BranchMetric(config: ViterbiDecoderConfig) extends Component {
    val io = new Bundle {
        val trellis_unit = in(Vec(config.rawDataType, 2))
        val raw_data = in(config.rawDataType)
        val dist = out(Vec(config.distType, 2))
    }
    noIoPrefix()

    io.dist(0) := calDistance(io.trellis_unit(0), io.raw_data).as(config.distType)
    io.dist(1) := calDistance(io.trellis_unit(1), io.raw_data).as(config.distType)

    def calDistance(trellis_unit: Bits, data: Bits): Bits ={
        if(config.softWidth == 1){
            HammingDistance(trellis_unit, data).resize(config.distWidth).asBits
        }else{
            val trellis_parity = trellis_unit.asUInt.subdivideIn(config.codeRate slices)
            val data_parity = data.asUInt.subdivideIn(config.codeRate slices)
            slicesSum(trellis_parity, data_parity, config.codeRate - 1).asBits
        }
    }

    def slicesSum(trellis_parity: Vec[UInt], data_parity: Vec[UInt], slice_cursor: Int): UInt ={
        val dist = (trellis_parity(slice_cursor) === 0) ?
            (data_parity(slice_cursor) - trellis_parity(slice_cursor)) |
            (trellis_parity(slice_cursor) - data_parity(slice_cursor))
        if(slice_cursor == 0) dist else dist + slicesSum(trellis_parity, data_parity, slice_cursor - 1).resize(config.distWidth)
    }

}
