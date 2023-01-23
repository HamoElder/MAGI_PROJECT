package magiRF.top.WideBandAdHoc.Transmitter

import magiRF.modules.Modem.Modulator.ModulatorRTL
import magiRF.packages.Puncher.Puncturing
import magiRF.top.WideBandAdHoc.Config._
import magiRF.top.WideBandAdHoc.Transmitter.PhysicalChannel._
import spinal.core._
import spinal.lib._

case class TX() extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
        val block_msg_ctrl = slave(Stream(BlockMessage()))
//        val rf_data = master(Stream)
    }
    noIoPrefix()
    /**
     * Crc Component
     */
    val tx_crc_extender: TxCrcAttachment = TxCrcAttachment()
    tx_crc_extender.io.block_msg_ctrl_in << io.block_msg_ctrl
    tx_crc_extender.io.raw_data << io.raw_data

    /**
     * Code Block Segmentation
     */
    val code_block_segment = CrcBlockSegmentation()
    code_block_segment.io.raw_data << tx_crc_extender.io.result_data
    code_block_segment.io.block_msg << tx_crc_extender.io.block_msg_ctrl_out

    /**
     * Channel Code Component
     */
    val channel_code = ChannelCoding()
    channel_code.io.raw_data << code_block_segment.io.result_data
    channel_code.io.segment_msg << code_block_segment.io.segment_msg

    /**
     * Rate Matching Component
     */
    val rate_match = ConvolutionalRateMatchUnit()
    rate_match.io.raw_data << channel_code.io.result_data
    rate_match.io.segment_length.valid := channel_code.io.coded_msg.valid
    rate_match.io.segment_length.payload := channel_code.io.coded_msg.segment_length
    channel_code.io.coded_msg.ready := rate_match.io.segment_length.ready

    rate_match.io.vector_length := 200
    io.result_data << rate_match.io.result_data
    //    val config = genModulatorConfig
//    val mod_rtl = ModulatorRTL(genModulatorConfig)
//    val scrambler = GoldSeqScrambler()
//    scrambler.io.scrambler_1_init_state := 127
//    scrambler.io.raw_data << io.raw_data
//    io.result_data << scrambler.io.result_data
}

object WidebandAdHocTXBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/WidebandAdHocTX").generateSystemVerilog(new TX()).printPruned()
    }
}

object  WidebandAdHocTXSimApp extends App{

    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    val raw_data = (0 until  40).map(_=>1)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new TX()) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.raw_data.valid #= false
            dut.io.raw_data.last #= false
            dut.io.result_data.ready #= true
            dut.io.raw_data.fragment #= 0
            dut.io.block_msg_ctrl.valid #= true
            dut.io.block_msg_ctrl.pkg_length #= raw_data.length
            dut.io.block_msg_ctrl.pkg_type #= PCCH
            dut.io.block_msg_ctrl.rnti_scramble #= 0x0000
            dut.clockDomain.waitSampling(1)
            dut.io.block_msg_ctrl.valid #= false
            for (idx <- 0 until (raw_data.length - 1)){
                dut.io.raw_data.valid #= true
                dut.io.raw_data.fragment #= raw_data(idx)
//                dut.clockDomain.waitSampling(1)
                dut.clockDomain.waitSamplingWhere(dut.io.raw_data.ready.toBoolean)
            }
            dut.io.raw_data.fragment #=  raw_data.last
            dut.io.raw_data.last #= true
//            dut.clockDomain.waitSampling(1)
            dut.clockDomain.waitSamplingWhere(dut.io.raw_data.ready.toBoolean)
            dut.io.raw_data.last #= false
            dut.io.raw_data.valid #= false
            for(idx <- 0 until 500){
//                dut.io.result_data.ready.randomize()
                dut.clockDomain.waitSampling(1)
            }
            dut.clockDomain.waitSampling(50)
        }
}