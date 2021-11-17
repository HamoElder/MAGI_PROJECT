package magiRF.packages.PackageGen

import magiRF.interface.misc.BaseInterface.DataWithStrb
import spinal.core._
import spinal.lib._
import utils.common.DataSplitUnite.StreamSplitUnite.StreamPayloadSplit

case class StreamPkgGenConfig(
                                 rawDataWidth       : Int,
                                 pkgDataWidth       : Int,
//								 maxPkgCnt          : Int,
								 endianness         : Endianness = LITTLE
                                 ) {
	// use Little-endian: right shift
	def rawDataType: Bits = Bits(rawDataWidth bits)
	def pkgDataType: Bits = Bits(pkgDataWidth bits)
	def pkgBytesNum: Int = rawDataWidth / 8
//	def pkgCntWidth: Int = log2Up(maxPkgCnt + 1)
//	def pkgCntType: UInt = UInt(pkgCntWidth bits)

}

case class StreamPkgGen(config: StreamPkgGenConfig) extends Component {
	val io = new Bundle{
		val raw_data = slave(Stream(DataWithStrb(config.rawDataType, useStrb = true)))
		val pkg_data = master(Stream(config.pkgDataType))
	}
	noIoPrefix()

	val strb_buf = Reg(cloneOf(io.raw_data.strb))
	val bit_valid = if(config.endianness == LITTLE) strb_buf(0) else strb_buf(config.pkgBytesNum - 1)
	val split_core = StreamPayloadSplit(io.raw_data.payload.data, io.pkg_data.payload, config.endianness == LITTLE)
	split_core.io.raw_data.valid := io.raw_data.valid
	split_core.io.raw_data.payload := io.raw_data.payload.data
	io.raw_data.ready := split_core.io.raw_data.ready

	split_core.io.split_data.ready := io.pkg_data.ready
	io.pkg_data.valid := split_core.io.split_data.valid && bit_valid
	io.pkg_data.payload := split_core.io.split_data.payload


	when(io.raw_data.fire){
		strb_buf := io.raw_data.strb
	}.elsewhen(split_core.io.split_data.fire){
		if(config.endianness == LITTLE){
			strb_buf := strb_buf |>> 1
		}else{
			strb_buf := strb_buf |<< 1
		}
	}

}

object StreamPkgGenBench {
	def main(args: Array[String]): Unit = {
		val pkg_gen_config = StreamPkgGenConfig(32, 8)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/StreamPkgGen").generateSystemVerilog(new StreamPkgGen(pkg_gen_config)).printPruned()
	}
}
