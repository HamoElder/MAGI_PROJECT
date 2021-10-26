package magiRF.packages.PackageGen

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SpecRenamer}

case class StreamPackageGenConfig(
                                 rawDataWidth       : Int,
                                 pkgDataWidth       : Int,
                                 cfgDataWidth       : Int     = 32
                                 ) {
	// use Little-endian: right shift
	def rawDataType: Bits = Bits(rawDataWidth bits)
	def pkgDataType: Bits = Bits(pkgDataWidth bits)
	def addressWidth = 8
//	def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, cfgDataWidth)
}

case class StreamPackageGen(config: StreamPackageGenConfig) extends Component {
	val io = new Bundle{
//		val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
		val raw_data = slave(Stream(config.rawDataType))
		val pkg_data = master(Stream(config.pkgDataType))

		val rf_clk = in Bool()
		val rf_resetn = in Bool()
	}
	noIoPrefix()
//	AxiLite4SpecRenamer(io.axil4Ctrl)
//	val cnt = Counter()

}
