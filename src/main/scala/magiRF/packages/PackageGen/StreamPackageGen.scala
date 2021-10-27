package magiRF.packages.PackageGen

import magiRF.interface.misc.BaseInterface.DataWithStrb
import spinal.core._
import spinal.lib._
import utils.common.DataSplitUnite.StreamSplitUnite.StreamPayloadSplit

case class StreamPkgGenConfig(
                                 rawDataWidth       : Int,
                                 pkgDataWidth       : Int,
//								 maxPkgCnt          : Int,
								 useLittleEndian    : Boolean = true
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
	val bit_valid = if(config.useLittleEndian) strb_buf(0) else strb_buf(config.pkgBytesNum - 1)
	val split_core = StreamPayloadSplit(io.raw_data.payload.data, io.pkg_data.payload, config.useLittleEndian)
	split_core.io.raw_data.valid := io.raw_data.valid
	split_core.io.raw_data.payload := io.raw_data.payload.data
	io.raw_data.ready := split_core.io.raw_data.ready

	split_core.io.split_data.ready := io.pkg_data.ready
	io.pkg_data.valid := split_core.io.split_data.valid && bit_valid
	io.pkg_data.payload := split_core.io.split_data.payload


	when(io.raw_data.fire){
		strb_buf := io.raw_data.strb
	}.elsewhen(split_core.io.split_data.fire){
		if(config.useLittleEndian){
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

object StreamPkgGenSimApp extends App{
	import spinal.core.sim._
	val pkg_gen_config = StreamPkgGenConfig(32, 8, useLittleEndian = false)
	SimConfig
		.withWave
		.allOptimisation
		.doSim(new StreamPkgGen(pkg_gen_config)){ dut =>
			dut.clockDomain.forkStimulus(5)
			dut.io.raw_data.valid #= false
			dut.io.pkg_data.ready #= true
			dut.clockDomain.waitSampling(1)
			for(idx <- 0 until 100){
//				dut.io.raw_data.valid #= true
				dut.io.raw_data.valid.randomize()
				dut.io.pkg_data.ready.randomize()
				dut.io.raw_data.payload.data #= 0x04030201
				dut.io.raw_data.payload.strb.randomize()
				dut.clockDomain.waitSampling(1)
			}
			dut.io.raw_data.valid #= false
			dut.clockDomain.waitSampling(10)
		}
}