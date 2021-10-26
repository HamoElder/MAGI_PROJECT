package magiSOC.perips.DMA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config, Axi4Shared}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config}

case class Axi4TOStreamDMAConfig(
	                                axiAddressWidth         : Int,
	                                cfgDataWidth            : Int,
	                                axiDataWidth            : Int,
	                                maxBurstSize            : Int
                                ){

	def idWidth = 3
	def axi4Config: Axi4Config = Axi4Config(
		addressWidth = axiAddressWidth,
		dataWidth = axiDataWidth,
		idWidth = idWidth,
		useLock = false,
		useRegion = false,
		useCache = false,
		useProt = false,
		useQos = false
	)

	def cfgAddressWidth: Int = 8
	def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)
}

case class Axi4TOStreamDMA(config:Axi4TOStreamDMAConfig) extends Component {
	val io = new Bundle{
		val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
		val axi4Master =master(Axi4(config.axi4Config))
	}

	noIoPrefix()
	io.axi4Master.readCmd

}
