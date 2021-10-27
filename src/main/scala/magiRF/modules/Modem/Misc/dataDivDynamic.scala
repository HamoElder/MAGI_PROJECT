package magiRF.modules.Modem.Misc

import spinal.core._
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib._
import utils.common.ClkCrossing.ClkCrossing

case class dataDivConfig(
							baseDataWidth      : Int,
							unitDataWidth      : Int
						){
	def baseDataType: UInt = UInt(baseDataWidth bits)
	def unitDataType: UInt = if(unitDataWidth == 0) baseDataType else UInt(unitDataWidth bits)
	def cntType: UInt = UInt(cntWidth bits)

	def cntWidth: Int = log2Up(baseDataWidth)
	def cntStep: Int = if(unitDataWidth == 0) 0 else unitDataWidth
	def cntInit: Int = (1 << cntWidth) - baseDataWidth
	def cntLimit: Int = if(unitDataWidth == 0) 0 else (1 << cntWidth) - cntStep
}

case class dataDivDynamic(config: dataDivConfig) extends Component {
	val io = new Bundle {
		val base_data = slave(Stream(config.baseDataType))
		val enable = in Bool()

		val cnt_step = in(config.cntType)
		val cnt_limit = in(config.cntType)

		val unit_data = master(Flow(config.unitDataType))
	}

	noIoPrefix()

	val unit_valid = Reg(Bool) init (False)
	val base_cnt = Reg(config.cntType) init (0)
	val base_ready = (io.cnt_limit === base_cnt) && io.enable
	val base_buffer = Reg(config.unitDataType) init (0)

	when(~io.enable) {
		base_cnt := io.cnt_limit
		unit_valid := False
	}.elsewhen(io.base_data.fire) {
		base_cnt := (base_cnt + io.cnt_step + config.cntInit).resized
		base_buffer := io.base_data.payload
		unit_valid := True
	}.elsewhen(base_cnt === io.cnt_limit) {
		base_buffer := base_buffer |>> io.cnt_step
		unit_valid := False
	}.otherwise {
		base_cnt := (base_cnt + io.cnt_step).resized
		base_buffer := base_buffer |>> io.cnt_step
		unit_valid := True
	}

	io.base_data.ready := base_ready
	io.unit_data.payload := base_buffer
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
		io.enable := ClkCrossing(coreClockDomain, rfClockDomain, enable)
		io.cnt_step := ClkCrossing(coreClockDomain, rfClockDomain, cnt_step)
		io.cnt_limit := ClkCrossing(coreClockDomain, rfClockDomain, cnt_limit)
	}
}
