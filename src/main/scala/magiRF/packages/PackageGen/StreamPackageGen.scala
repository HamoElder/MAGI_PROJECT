package magiRF.packages.PackageGen

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SpecRenamer}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config, AxiStream4SpecRenamer}
import utils.common.ClkCrossing.ClkCrossing
import utils.common.DataSplitUnite.StreamSplitUnite.StreamPayloadSplit

case class StreamPkgGenConfig(
                                 rawDataWidth       : Int,
                                 pkgDataWidth       : Int,
								 maxSlicesCnt       : Int,
								 endianness         : Endianness = LITTLE
                                 ) {
	// use Little-endian: right shift
	def rawDataType: Bits = Bits(rawDataWidth bits)
	def pkgDataType: Bits = Bits(pkgDataWidth bits)
	def pkgBytesNum: Int = rawDataWidth / 8

	def slicesCntWidth: Int = log2Up(maxSlicesCnt)
	def slicesCntDataType: UInt = UInt(slicesCntWidth bits)
	def axisConfig: AxiStream4Config = AxiStream4Config(
		dataWidth = rawDataWidth,
		idWidth = 0,
		userWidth = -1,
		useID = false, useKeep = false
	)
}

case class StreamPkgGen(config: StreamPkgGenConfig) extends Component {
	val io = new Bundle{
		val slices_limit = in(config.slicesCntDataType)
		val slices_cnt = out(config.slicesCntDataType)
		val raw_data = slave(AxiStream4(config.axisConfig))
		val pkg_data = master(Stream(Fragment(config.pkgDataType)))
	}
	noIoPrefix()
	AxiStream4SpecRenamer(io.raw_data)
	val strb_buf = Reg(config.axisConfig.strbType)
	val pkg_slices_cnt = Reg(config.slicesCntDataType) init(0)
	val bit_valid = if(config.endianness == LITTLE) strb_buf(0) else strb_buf(config.pkgBytesNum - 1)
	val split_core = StreamPayloadSplit(io.raw_data.stream.data, io.pkg_data.fragment, config.endianness == LITTLE)

	split_core.io.raw_data.valid := io.raw_data.stream.valid
	split_core.io.raw_data.payload := io.raw_data.stream.payload.data
	io.raw_data.stream.ready := split_core.io.raw_data.ready

	split_core.io.split_data.ready := io.pkg_data.ready
	io.pkg_data.valid := split_core.io.split_data.valid && bit_valid
	io.pkg_data.fragment := split_core.io.split_data.payload
	io.pkg_data.last := (pkg_slices_cnt === (io.slices_limit - 1))


	when(io.raw_data.stream.fire){
		strb_buf := io.raw_data.stream.strb
	}.elsewhen(split_core.io.split_data.fire){
		if(config.endianness == LITTLE){
			strb_buf := strb_buf |>> 1
		}else{
			strb_buf := strb_buf |<< 1
		}
		pkg_slices_cnt := (pkg_slices_cnt === (io.slices_limit - 1)) ? U(0) | (pkg_slices_cnt + 1)
	}

	io.slices_cnt := pkg_slices_cnt

	// Bus interface function module
	def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
		val slices_limit = cloneOf(io.slices_limit)
		val slices_cnt = cloneOf(io.slices_cnt)

		busCtrl.driveAndRead(slices_limit, address = baseAddress + 0x00, bitOffset = 0,
			documentation = "Slices Size Limit Per Package")
		busCtrl.read(slices_cnt, address = baseAddress + 0x04, bitOffset = 0,
			documentation = "Slices Counter Indicator.")

		io.slices_limit := ClkCrossing(coreClockDomain, rfClockDomain, slices_limit)
		slices_cnt := ClkCrossing(rfClockDomain, coreClockDomain, io.slices_cnt)
	}
}

object StreamPkgGenBench {
	def main(args: Array[String]): Unit = {
		val pkg_gen_config = StreamPkgGenConfig(32, 8, 4096)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/StreamPkgGen").generateSystemVerilog(new StreamPkgGen(pkg_gen_config)).printPruned()
	}
}
