package magiRF.modules.Modem.Misc

import spinal.core._
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib._
import utils.common.ClkCrossing.FFSynchronizer

case class dataDivConfig(
							baseDataWidth      : Int,
							unitDataWidth      : Int = 0
						){
	def baseDataType: Bits = Bits(baseDataWidth bits)
	def unitDataType: Bits = if(unitDataWidth == 0) baseDataType else Bits(unitDataWidth bits)
	def cntType: UInt = UInt(cntWidth bits)

	def cntWidth: Int = log2Up(baseDataWidth)
	def cntStep: Int = if(unitDataWidth == 0) 0 else unitDataWidth
	def cntInit: Int = (1 << cntWidth) - baseDataWidth
	def cntLimit: Int = if(unitDataWidth == 0) 0 else (1 << cntWidth) - cntStep
}

case class dataDivDynamic(config: dataDivConfig) extends Component {
	val io = new Bundle {
		val base_data = slave(Stream(Fragment(config.baseDataType)))
		val enable = in Bool()

		val cnt_step = in(config.cntType)
		val cnt_limit = in(config.cntType)

		val unit_data = master(Flow(Fragment(config.unitDataType)))
	}

	noIoPrefix()

	val unit_valid = Reg(Bool) init (False)
	val base_last = Reg(Bool()) init(False)
	val base_cnt = Reg(config.cntType) init (0)
	val base_ready = (io.cnt_limit === base_cnt) && io.enable
	val base_buffer = Reg(config.unitDataType) init (0)
	val loaded = Reg(Bool()) init(False)

	when(~io.enable) {
		base_cnt := io.cnt_limit
		unit_valid := False
		loaded := False
	}.elsewhen(io.base_data.fire) {
		base_cnt := (base_cnt + io.cnt_step + config.cntInit).resized
		base_buffer := io.base_data.fragment
		base_last := io.base_data.last
		unit_valid := True
		loaded := True
	}.elsewhen(base_cnt === io.cnt_limit) {
		base_buffer := base_buffer |>> io.cnt_step
		unit_valid := False
		loaded := False
	}.elsewhen(loaded) {
		base_cnt := (base_cnt + io.cnt_step).resized
		base_buffer := base_buffer |>> io.cnt_step
		unit_valid := True
	}

	io.base_data.ready := base_ready
	io.unit_data.fragment := base_buffer
	io.unit_data.last := base_last && (base_cnt === io.cnt_limit)
	io.unit_data.valid := unit_valid

	def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
		val enable = cloneOf(io.enable)
		val cnt_step = cloneOf(io.cnt_step)
		val cnt_limit = cloneOf(io.cnt_limit)
		busCtrl.driveAndRead(enable, address = baseAddress + 0x00, bitOffset = 0,
			documentation = "Data Divide Dynamic Module Enable.") init (False)
		busCtrl.driveAndRead(cnt_step, address = baseAddress + 0x04, bitOffset = 0,
			documentation = "Data Divide Dynamic Module Counter Step.") init (0)
		busCtrl.driveAndRead(cnt_limit, address = baseAddress + 0x08, bitOffset = 0,
			documentation = "Data Divide Dynamic Module Counter Max Value.") init (0)
		io.enable := FFSynchronizer(coreClockDomain, rfClockDomain, enable)
		io.cnt_step := FFSynchronizer(coreClockDomain, rfClockDomain, cnt_step)
		io.cnt_limit := FFSynchronizer(coreClockDomain, rfClockDomain, cnt_limit)
	}
}
