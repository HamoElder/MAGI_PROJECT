package magiRF.packages.PackageGen

import spinal.core._
import spinal.lib._

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

		val raw_data = slave(Stream(config.rawDataType))
		val pkg_data = master(Stream(config.pkgDataType))


	}
	noIoPrefix()
//	AxiLite4SpecRenamer(io.axil4Ctrl)
//	val cnt = Counter()

}
