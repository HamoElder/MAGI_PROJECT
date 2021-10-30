package magiRF.modules.Modem.Mixer

import magiRF.modules.DSP.PowerAdjustor.{PowerAdjustor, PowerAdjustorConfig}
import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}
import utils.bus.AxiLite.AxiLite4
import utils.bus.IQBundle.IQBundle

case class AxiLite4IQDemixerConfig(
	                                  dataIfWidth        : Int,
	                                  dataCarrierWidth   : Int,
	                                  dataBaseWidth      : Int,
	                                  channelsNum        : Int     = 2,
	                                  cfgDataWidth       : Int     = 32
                                  ) {
	def iq_demixer_config: IQDemixerConfig = IQDemixerConfig(dataIfWidth, dataCarrierWidth, dataBaseWidth, channelsNum)
	def carrier_power_adjust_config: PowerAdjustorConfig = PowerAdjustorConfig(dataCarrierWidth, dataCarrierWidth, 8)
	def addressWidth = 8
	def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}

case class AxiLite4IQDemixer(config: AxiLite4IQDemixerConfig) extends Component{
	val io = new Bundle{
		val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
		val if_iq = Vec(slave(Flow(config.iq_demixer_config.dataIfType)), config.channelsNum)

		val carries_iq = slave(Flow(IQBundle(config.iq_demixer_config.dataCarrierType)))
		val base_iq = Vec(master(Flow(IQBundle(config.iq_demixer_config.dataBaseType))), config.channelsNum)

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
		val demixer_module = IQDemixer(config.iq_demixer_config)
		val carrier_power_adjustor = PowerAdjustor(config.carrier_power_adjust_config)
		carrier_power_adjustor.io.raw_data.payload := io.carries_iq.payload
		carrier_power_adjustor.io.raw_data.valid := io.carries_iq.valid

		demixer_module.io.carries_iq.valid := carrier_power_adjustor.io.adjusted_data.valid
		demixer_module.io.carries_iq.payload := carrier_power_adjustor.io.adjusted_data.payload

		for(idx <- 0 until config.channelsNum){
			demixer_module.io.if_iq(idx).valid := io.if_iq(idx).valid
			demixer_module.io.if_iq(idx).payload := io.if_iq(idx).payload

			io.base_iq(idx).valid := demixer_module.io.base_iq(idx).valid
			io.base_iq(idx).payload := demixer_module.io.base_iq(idx).payload
		}
	}
	val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
	val _ = rfClockArea.carrier_power_adjustor.driveFrom(axil4busCtrl, 0x00, this.clockDomain, rfClockDomain)
	axil4busCtrl.printDataModel()
}

object AxiLite4IQDemixerBench{
	def main(args: Array[String]): Unit =  {
		val iqDeMixerConfig = AxiLite4IQDemixerConfig(32, 16, 8, 1, 32)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/AxiLite4IQDemixer").generateSystemVerilog(new AxiLite4IQDemixer(iqDeMixerConfig)).printPruned()
	}
}
