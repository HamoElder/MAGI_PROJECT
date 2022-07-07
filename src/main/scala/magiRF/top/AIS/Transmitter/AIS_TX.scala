package magiRF.top.AIS.Transmitter

import magiRF.packages.Preamble.PreambleExtender
import magiRF.top.AIS.Config.{crc16_config, interfaceIQDataType, phyDataType}
import spinal.core._
import spinal.lib._
import utils.common.DataSplitUnite.DataWidthConvert.StreamFragmentWidthConvert

case class AIS_TX() extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
//        val rf_data = master(Stream(interfaceIQDataType))
        val result_data = master(Stream(Fragment(Bits(1 bits))))
    }
    noIoPrefix()
    val crc16_adder = PhyTxCrc()
    crc16_adder.io.raw_data << io.raw_data.takeWhen(io.result_data.ready)
    val end_flag_adder = PhyTxEndFlag()
    end_flag_adder.io.raw_data << crc16_adder.io.result_data.queue(32)
    val buffer_adder = PhyTxBufferPadding()
    buffer_adder.io.raw_data << end_flag_adder.io.result_data.queue(32)
    val preamble_adder = PhyTxPreambleExtender()
    preamble_adder.io.raw_data << buffer_adder.io.result_data.queue(32)
    val nrzi_encoder = PhyTxNRZI()
    nrzi_encoder.io.raw_data << preamble_adder.io.result_data.queue(32)
    io.result_data << nrzi_encoder.io.result_data.queue(32)
}

object AIS_TXSimApp extends App{
    import spinal.core.sim._
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new AIS_TX()) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.raw_data.last #= false
            dut.io.result_data.ready #= false
            dut.clockDomain.waitSampling(10)

            for(idx <- 0 until 1){
                dut.io.raw_data.valid #= true
                dut.io.result_data.ready #= true
                dut.io.raw_data.fragment #= idx % 256
                dut.clockDomain.waitSampling(1)
            }
            dut.io.raw_data.valid #= true
            dut.io.raw_data.fragment #= 255
            dut.io.raw_data.last #= true
            dut.clockDomain.waitSampling(1)

            dut.io.raw_data.valid #= false
            dut.io.raw_data.last #= false
            dut.clockDomain.waitSampling(100)
        }
}
