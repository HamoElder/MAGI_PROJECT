package magiRF.modules.DSP.PowerAdjustor

import spinal.lib._
import spinal.core._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.FFSynchronizer


case class PowerAdjustorConfig(
                              dataInWidth  : Int,
                              dataOutWidth : Int,
                              ratio         : Int
                              ) {
	def dataInType: IQBundle[SInt] = IQBundle(SInt(dataInWidth bits))
	def dataOutType: IQBundle[SInt] = IQBundle(SInt(dataOutWidth bits))
	def ratioType: UInt = UInt(log2Up(ratio) bits)

	override def equals(that: Any): Boolean = that == this
}

case class PowerAdjustor(config: PowerAdjustorConfig) extends Component{
	val io = new Bundle{
		val raw_data = slave(Flow(config.dataInType))
		val adjusted_data = master(Flow(config.dataOutType))
		val shift_bias = in(config.ratioType)
		val shift_dir = in(Bool())
	}
	noIoPrefix()
	val shifted_data = Reg(config.dataOutType)

	when(io.raw_data.valid){
		when(io.shift_dir){
			shifted_data.cha_i := (io.raw_data.cha_i |>> io.shift_bias).resized
			shifted_data.cha_q := (io.raw_data.cha_q |>> io.shift_bias).resized
		}.otherwise{
			shifted_data.cha_i := (io.raw_data.cha_i |<< io.shift_bias).resized
			shifted_data.cha_q := (io.raw_data.cha_q |<< io.shift_bias).resized
		}
		io.adjusted_data.valid := True
	}.otherwise{
		io.adjusted_data.valid := False
	}
	io.adjusted_data.payload := shifted_data

	// Bus interface function module
	def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
		val shift_bias: UInt = cloneOf(io.shift_bias)
		val shift_dir: Bool = cloneOf(io.shift_dir)

		busCtrl.driveAndRead(shift_bias, address = baseAddress + 0x00, bitOffset = 0,
			documentation = "Power Adjustor Shift Value.") init(0)
		busCtrl.driveAndRead(shift_dir, address = baseAddress + 0x04, bitOffset = 0,
			documentation = "Power Adjustor Shift Direction.(1 right shift, 0 left shift)") init(False)

		io.shift_bias := FFSynchronizer(coreClockDomain, rfClockDomain, shift_bias)
		io.shift_dir := FFSynchronizer(coreClockDomain, rfClockDomain, shift_dir)
	}
}

object PowerAdjustorBench {
	def main(args: Array[String]): Unit = {
		val power_adjustor_config = PowerAdjustorConfig(16, 16, 4)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/PowerAdjustor").generateSystemVerilog(new PowerAdjustor(power_adjustor_config)).printPruned()
	}
}

