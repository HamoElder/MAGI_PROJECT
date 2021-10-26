package magiRF.modules.DSP.PowerAdjustor

import spinal.core._
import spinal.lib._

case class AGCConfig(
                    dataWidth : Int,
                    upperThreshold : Int,
                    lowerThreshold : Int
                    ){
    val dataType = SInt(dataWidth bits)
    val RSSIDataType = UInt(2 * dataWidth bits)
}

case class AGCCore[T <: SInt](dataType: T) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(dataType))
        val aligned_data = master(Flow(dataType))

        val ratio = in(dataType)
    }
    noIoPrefix()

    io.aligned_data.payload := RegNext(io.ratio * io.raw_data.payload)
    io.aligned_data.valid := RegNext(io.raw_data.valid)
}

case class AGC(config: AGCConfig) extends Component{
    val io = new Bundle{
        val raw_data = slave(Flow(config.dataType))
        val aligned_data = master(Flow(config.dataType))
    }
    noIoPrefix()

    val feed_back_ratio = Reg(config.dataType) init(1)
    val signal_energy = Reg(config.RSSIDataType) init(0)
    when(io.raw_data.valid){
        signal_energy := io.raw_data.payload.abs
    }
}
