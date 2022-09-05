package magiRF.packages.CDMA

import magiRF.packages.CDMA.Despreador.{AxiLite4CDMADespread, AxiLite4CDMADespreadConfig}
import magiRF.packages.CDMA.Spreador.{AxiLite4CDMASpread, AxiLite4CDMASpreadConfig}
import utils.bus.AxiLite.sim.AxiLite4Driver
import spinal.core.sim._
import spinal.core._
import spinal.lib.{Flow, Stream, master, slave}
import utils.bus.AxiLite.AxiLite4
import utils.bus.IQBundle.IQBundle

case class CombCDMABench(spread_config: AxiLite4CDMASpreadConfig, despread_config: AxiLite4CDMADespreadConfig) extends Component {

    val io = new Bundle{
        val axil4Ctrl_spread = slave(AxiLite4(spread_config.axiLite4Config))
        val axil4Ctrl_despread = slave(AxiLite4(despread_config.axiLite4Config))

        val base_iq_in =  slave(Stream(Vec(IQBundle(spread_config.modDataType), spread_config.codeSize)))

        val base_sub_iqs = Vec(master(Flow(IQBundle(despread_config.modDataType))), despread_config.codeSize)

        val rf_clk = in Bool()
        val rf_resetn = in(Bool())
    }
    noIoPrefix()
    val cdma_spread = AxiLite4CDMASpread(spread_config)
    val rfClockDomain = ClockDomain(
        clock = io.rf_clk,
        reset = io.rf_resetn,
        config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW
        )
    )
    cdma_spread.io.axil4Ctrl << io.axil4Ctrl_spread
    cdma_spread.io.base_iq << io.base_iq_in
    cdma_spread.io.rf_clk := io.rf_clk
    cdma_spread.io.rf_resetn := io.rf_resetn
    val cdma_despread = AxiLite4CDMADespread(despread_config)
    cdma_despread.io.mod_iq << cdma_spread.io.mod_iq.toStream
    cdma_despread.io.axil4Ctrl << io.axil4Ctrl_despread
    cdma_despread.io.rf_clk := io.rf_clk
    cdma_despread.io.rf_resetn := io.rf_resetn
    (io.base_sub_iqs, cdma_despread.io.base_sub_iqs).zipped.foreach(_ << _)
}

object CombCDMASimApp extends App {
    val walsh_8_order = Seq[BigInt](0xff, 0xaa, 0xcc, 0x99, 0xf0, 0xa5, 0xc3, 0x96)
    val axiLite4_cdma_spreading_config = AxiLite4CDMASpreadConfig(16, 8, 8, 32, useDynamic = true, walsh_8_order)
    val axiLite4_cdma_despread_config = AxiLite4CDMADespreadConfig(16, 8, 8, 32, useDynamic = true, walsh_8_order)
    SimConfig.withWave.allOptimisation.doSim(new CombCDMABench(axiLite4_cdma_spreading_config, axiLite4_cdma_despread_config)) { dut =>
        dut.clockDomain.forkStimulus(5)
        dut.rfClockDomain.forkStimulus(3)

        val aliteDrv_spread = AxiLite4Driver(dut.io.axil4Ctrl_spread, dut.clockDomain)
        val aliteDrv_despread = AxiLite4Driver(dut.io.axil4Ctrl_despread, dut.clockDomain)
        aliteDrv_spread.reset()
        aliteDrv_despread.reset()
        aliteDrv_spread.write(0x00, 0x3)
        aliteDrv_spread.write(0x0c, 0x7)
        aliteDrv_despread.write(0x00, 0x3)
        aliteDrv_despread.write(0x0c, 0x7)
        dut.io.base_iq_in.valid #= false
        for (cha <- 0 until 8) {
            dut.io.base_iq_in.payload(cha).cha_i #= 0
            dut.io.base_iq_in.payload(cha).cha_q #= 0
        }
        for (idx <- 0 until 8) {
            aliteDrv_spread.write(0x04, idx)
            aliteDrv_spread.write(0x08, walsh_8_order(idx))
            aliteDrv_despread.write(0x04, idx)
            aliteDrv_despread.write(0x08, walsh_8_order(idx))
        }
        aliteDrv_spread.write(0x00, 0x0)
        aliteDrv_despread.write(0x00, 0x0)
        dut.rfClockDomain.waitSampling(10)

        for (idx <- 100 until 250) {
            dut.io.base_iq_in.valid #= true
//            dut.io.base_iq_in.valid.randomize()
            for (cha <- 0 until 8) {
                dut.io.base_iq_in.payload(cha).cha_i #= (idx + cha) * 8
                dut.io.base_iq_in.payload(cha).cha_q #= (idx + cha + 1) * 8
            }
            dut.rfClockDomain.waitSampling(1)
        }
        dut.io.base_iq_in.valid #= false
        dut.rfClockDomain.waitSampling(20)
        aliteDrv_spread.write(0x00, 0x1)
        aliteDrv_despread.write(0x00, 0x1)
        dut.rfClockDomain.waitSampling(30)
    }
}
