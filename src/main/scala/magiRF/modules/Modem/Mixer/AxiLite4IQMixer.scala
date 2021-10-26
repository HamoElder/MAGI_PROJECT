package magiRF.modules.Modem.Mixer

import magiRF.modules.DSP.PowerAdjustor.{PowerAdjustor, PowerAdjustorConfig}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.IQBundle.IQBundle

case class AxiLite4IQMixerConfig(
	                                dataIfWidth        : Int,
	                                dataCarrierWidth   : Int,
	                                dataBaseWidth      : Int,
	                                channelsNum        : Int     = 2,
                                    cfgDataWidth       : Int     = 32
                                ) {
	def iqmixer_config: IQMixerConfig = IQMixerConfig(dataIfWidth, dataCarrierWidth, dataBaseWidth, channelsNum)
	def base_power_adjust_config: PowerAdjustorConfig = PowerAdjustorConfig(dataBaseWidth, dataBaseWidth, 4)
	def carrier_power_adjust_config: PowerAdjustorConfig = PowerAdjustorConfig(dataCarrierWidth, dataCarrierWidth, 8)

    def addressWidth = 8
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}

case class AxiLite4IQMixer(config: AxiLite4IQMixerConfig) extends Component{
	val io = new Bundle{
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
		val base_iq = Vec(slave(Flow(IQBundle(config.iqmixer_config.dataBaseType))), config.channelsNum)
		val carries_iq = slave(Flow(IQBundle(config.iqmixer_config.dataCarrierType)))
		// Intermediate Frequency
		val if_iq = Vec(master(Flow(config.iqmixer_config.dataIfType)), config.channelsNum)

		val rf_clk = in Bool()
		val rf_resetn = in Bool()
	}
	noIoPrefix()
	AxiLite4SpecRenamer(io.axil4Ctrl)

	val rfClockDomain = ClockDomain(
		clock  = io.rf_clk,
		reset  = io.rf_resetn,
		config = ClockDomainConfig(
            clockEdge = RISING,
            resetKind = SYNC,
            resetActiveLevel = LOW
        )
	)

	val rfClockArea = new ClockingArea(rfClockDomain){

		val carrier_power_adjustor = PowerAdjustor(config.carrier_power_adjust_config)
		var base_power_adjustor_list = List[PowerAdjustor]()
		val iqmixer_mod = IQMixer(config.iqmixer_config)
		// Input
		carrier_power_adjustor.io.raw_data.payload := io.carries_iq.payload
		carrier_power_adjustor.io.raw_data.valid := io.carries_iq.valid
		iqmixer_mod.io.carries_iq.payload := carrier_power_adjustor.io.adjusted_data.payload
		iqmixer_mod.io.carries_iq.valid := carrier_power_adjustor.io.adjusted_data.valid
		for(idx <- 0 until config.channelsNum){
			val base_power_adjustor = PowerAdjustor(config.base_power_adjust_config)
			base_power_adjustor_list = base_power_adjustor_list :+ base_power_adjustor

			base_power_adjustor.io.raw_data.payload := io.base_iq(idx).payload
			base_power_adjustor.io.raw_data.valid := io.base_iq(idx).valid
			// Input
			iqmixer_mod.io.base_iq(idx).valid := base_power_adjustor.io.adjusted_data.valid
			iqmixer_mod.io.base_iq(idx).payload := base_power_adjustor.io.adjusted_data.payload

			// Output
			io.if_iq(idx).valid := iqmixer_mod.io.if_iq(idx).valid
			io.if_iq(idx).payload := iqmixer_mod.io.if_iq(idx).payload
		}
	}
	val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
	val _ = rfClockArea.carrier_power_adjustor.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
	for(idx <- 0 until config.channelsNum){
		val _ = rfClockArea.base_power_adjustor_list(idx).driveFrom(axil4busCtrl, idx * 0x10 + 0x10, this.clockDomain, rfClockDomain)
	}
	axil4busCtrl.printDataModel()
}

object AxiLite4IQMixerBench{
	def main(args: Array[String]): Unit = {
		val iqMixerConfig = AxiLite4IQMixerConfig(32, 16, 16, 1)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/AxiLite4IQMixer").generateSystemVerilog(new AxiLite4IQMixer(iqMixerConfig)).printPruned()
	}
}

//Sim
object AxiLite4IQMixerSimApp extends App{
	import spinal.core.sim._
	import utils.bus.AxiLite.sim.AxiLite4Driver
	import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
	import scala.util.Random

	val iqMixerConfig = AxiLite4IQMixerConfig(32, 16, 16, 1)
	SimConfig.withWave.doSim(new AxiLite4IQMixer(iqMixerConfig)){ dut =>
		dut.clockDomain.forkStimulus(5)
		dut.rfClockDomain.forkStimulus(3)
		//        SimTimeout(10*50000)
		val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
		aliteDrv.reset()
		dut.io.base_iq(0).valid #= false
		dut.io.carries_iq.valid #= false

		dut.clockDomain.waitSampling(10)
		dut.io.carries_iq.valid #= true
		dut.io.base_iq(0).valid #= true

		for(idx <- 0 until 4096){
			dut.io.base_iq(0).cha_i #= (10000 * Math.cos(2 * Math.PI * 5 * idx / 4096)).toInt
			dut.io.base_iq(0).cha_q #= (10000 * Math.cos(2 * Math.PI * 5 * idx / 4096)).toInt
			dut.io.carries_iq.cha_i #= (127 * Math.sin(2 * Math.PI * 100 * idx / 4096)).toInt
			dut.io.carries_iq.cha_q #= (127 * Math.cos(2 * Math.PI * 100 * idx / 4096)).toInt
			dut.clockDomain.waitSampling(1)
		}
//		aliteDrv.write(0x04, 0x1)
		aliteDrv.write(0x00, 0x3)
		for(idx <- 0 until 4096){
			dut.io.base_iq(0).cha_i #= (10000 * Math.cos(2 * Math.PI * 5 * idx / 4096)).toInt
			dut.io.base_iq(0).cha_q #= (10000 * Math.cos(2 * Math.PI * 5 * idx / 4096)).toInt
			dut.io.carries_iq.cha_i #= (127 * Math.sin(2 * Math.PI * 100 * idx / 4096)).toInt
			dut.io.carries_iq.cha_q #= (127 * Math.cos(2 * Math.PI * 100 * idx / 4096)).toInt
			dut.clockDomain.waitSampling(1)
		}
		dut.io.carries_iq.valid #= false
		dut.clockDomain.waitSampling(10000)
	}
}