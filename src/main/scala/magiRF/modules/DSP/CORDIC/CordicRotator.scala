package magiRF.modules.DSP.CORDIC

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib.fsm._

/******************************************************************************
 * ---------------------------------------------------------------------------------------------------------------------------
 * | Coordinate System | Rotation Mode: d_i = sign(z^{i}); z^{i} => 0 | Vectoring Mode: d_i = -sign(x^{i}*y^{i}); y^{i} => 0 |
 * ---------------------------------------------------------------------------------------------------------------------------
 * |                   |         ----                                 |         ----                                         |
 * |      Circular     |  x --> |    | --> K(x.cos(z) - y.sin(z))     |  x --> |    | --> K(x^2 + y^2)^{1/2}                 |
 * |       u = 1       |  y --> |    | --> K(y.cos(z) - x.sin(z))     |  y --> |    | --> 0                                  |
 * |e^{i}=atan(2^{-i}) |  z --> |    | --> 0                          |  z --> |    | --> z + atan(y / x)                    |
 * |                   |         ----                                 |         ----                                         |
 * |                   |    For cos(z) & sin(z), set x = 1/K, y = 0   |    For atan(y), set x = 1, z = 0                     |
 * ---------------------------------------------------------------------------------------------------------------------------
 * |                   |         ----                                 |         ----                                         |
 * |       Linear      |  x --> |    | --> x                          |  x --> |    | --> x                                  |
 * |       u = 0       |  y --> |    | --> y + (x.z)                  |  y --> |    | --> 0                                  |
 * |    e^{i}=2^{-i}   |  z --> |    | --> 0                          |  z --> |    | --> z + y / x                          |
 * |                   |         ----                                 |         ----                                         |
 * |                   |    For multiplication, set y = 0             |    For division, set z = 0                           |
 * ---------------------------------------------------------------------------------------------------------------------------
 * |                   |         ----                                 |         ----                                         |
 * |     Hyperbolic    |  x --> |    | --> K^{*}(x.cosh(z)-y.sinh(z)) |  x --> |    | --> K^{*}*(x^2 - y^2)^{1/2}            |
 * |       u = -1      |  y --> |    | --> K^{*}(y.cosh(z)+x.sinh(z)) |  y --> |    | --> 0                                  |
 * |e^{i}=atanh(2^{-i})|  z --> |    | --> 0                          |  z --> |    | --> z + atanh(y / x)                   |
 * |                   |         ----                                 |         ----                                         |
 * |                   | For cosh(z) & sinh(z), set x= 1/ K^{*}, y= 0 |    For atanh(y), set x = 1, z = 0                    |
 * ---------------------------------------------------------------------------------------------------------------------------
 *
 * Notes: When using the CORDIC algorithm for Hyperbolic rotations the scaling factor K is different from the one used
 *   for Circular rotations.
 *
 *   The Hyperbolic scaling factor is denoted K^{*} and is calculated using the equation:
 *       K^{*}_n = prod^{n}sqrt(1 - 2^(-2i))
 *       K^{*}_n = 0.82816                when n -> inf
 *       1 / (K^{*}_n) = 1.20750          when n -> inf
 *       n = number of iterations
 *
 */

case class CordicIO(config: CordicConfig) extends Bundle with IMasterSlave {
	val x = config.dataType
	val y = config.dataType
	val z = config.dataType

	override def asMaster(): Unit = {
		out(x, y, z)
	}

	override type RefOwnerType = this.type
}


case class CordicRotator(config: CordicConfig) extends Component {
	val io = new Bundle{
		val iter_limit = if(config.usePipeline) null else in(config.iterCntType)
		val rot_mode = in(Bool())
		val x_u = in(UInt(2 bits))

		val w_en = in(Bool())
		val w_addr = in(UInt(config.addressWidth bits))
		val w_data = in(config.dataType)

		val raw_data = slave(Stream(CordicIO(config)))
		val result = master(Stream(CordicIO(config)))
	}
	noIoPrefix()
	if(config.usePipeline){
		val x_n = Vec(Reg(config.dataType), config.iterations)
		val y_n = Vec(Reg(config.dataType), config.iterations)
		val z_n = Vec(Reg(config.dataType), config.iterations)
		val valid_bypass = Vec(Reg(Bool()) init(False), config.iterations)

		val rot_mem = Vec(Reg(config.dataType), config.iterations)
		when(io.w_en){
			rot_mem(io.w_addr.resized) := io.w_data
		}
		when(io.raw_data.fire){
			x_n(0) := io.raw_data.x
			y_n(0) := io.raw_data.y
			z_n(0) := io.raw_data.z
			valid_bypass(0) := True
		}.otherwise{
			valid_bypass(0) := False
		}

		for (idx <- 1 until config.iterations){
			val d_n = io.rot_mode ? (z_n(idx - 1) >= 0) | (y_n(idx - 1) < 0)
			val sx = config.dataType
			sx.raw := (x_n(idx - 1).raw |>> (idx - 1))
			val sy = config.dataType
			sy.raw := (y_n(idx - 1).raw |>> (idx - 1))
			when(valid_bypass(idx - 1)){
				switch(io.x_u){
					is(0){
						x_n(idx) := (d_n ? (x_n(idx - 1) - sy) | (x_n(idx - 1) + sy))  // Circular Rotations:
					}
					is(2){
						x_n(idx) := (d_n ? (x_n(idx - 1) + sy) | (x_n(idx - 1) - sy)) // Hyperbolic Rotations
					}
					default{
						x_n(idx) := x_n(idx - 1)
					}
				}
				y_n(idx) := d_n ? (y_n(idx - 1) + sx) | (y_n(idx - 1) - sx)
				z_n(idx) := d_n ? (z_n(idx - 1) - rot_mem(idx - 1)) | (z_n(idx - 1) + rot_mem(idx - 1))
			}
			valid_bypass(idx) := valid_bypass(idx - 1)
		}
		io.result.valid := valid_bypass(config.iterations - 1)
		io.result.x := x_n(config.iterations - 1)
		io.result.y := y_n(config.iterations - 1)
		io.result.z := z_n(config.iterations - 1)

		io.raw_data.ready := io.result.ready
	}
	else {
		val iterCnt = Reg(config.iterCntType) init(0)
		val iterCnt_Next = RegNext(iterCnt)

		val x_n = Reg(config.dataType)
		val y_n = Reg(config.dataType)
		val z_n = Reg(config.dataType)

		val result_x = Reg(config.dataType)
		val result_y = Reg(config.dataType)
		val result_z = Reg(config.dataType)
		val result_valid = Reg(Bool()) init(False)

		val sx = config.dataType
		sx.raw := (x_n.raw |>> iterCnt_Next)
		val sy = config.dataType
		sy.raw := (y_n.raw |>> iterCnt_Next)

		val rot_mem = Mem(config.dataType, initialContent  = config.cordicRamGen()).addAttribute("ram_style", "block")
		rot_mem.write(address = io.w_addr.resized, data = io.w_data, enable = io.w_en)
		val at = rot_mem.readSync(address = iterCnt.resized)

		val d_n = io.rot_mode ? (z_n >= 0) | (y_n < 0)
		//	val d_n = io.rot_mode ? (z_n >= 0) | ((y_n < 0) ^ (x_n < 0))
		val busy = iterCnt =/= 0
		val raw_data_ready = Reg(Bool()) init(True)

		val fsm = new StateMachine{

			val IDLE : State = new State with EntryPoint{
				whenIsActive {
					when(io.raw_data.fire) {
						x_n := io.raw_data.x
						y_n := io.raw_data.y
						z_n := io.raw_data.z
						iterCnt := iterCnt + 1
						raw_data_ready := False
						goto(DEALING)
					}
				}
			}
			val DEALING : State = new State{
				whenIsActive {
					iterCnt := iterCnt + 1
					switch(io.x_u){
						is(0){
							x_n := (d_n ? (x_n - sy) | (x_n + sy))  // Circular Rotations:
						}
						is(2){
							x_n := (d_n ? (x_n + sy) | (x_n - sy)) // Hyperbolic Rotations
						}
						default{
							x_n := x_n
						}
					}
					y_n := d_n ? (y_n + sx) | (y_n - sx)
					z_n := d_n ? (z_n - at) | (z_n + at)
					raw_data_ready := False
					when(iterCnt >= io.iter_limit){
						goto(PUSH)
					}
				}
			}
			val PUSH : State = new State{
				whenIsActive {
					result_x := x_n
					result_y := y_n
					result_z := z_n
					iterCnt := 0
					when(io.result.fire){
						result_valid := False
						raw_data_ready := True
						goto(IDLE)
					}.otherwise{
						result_valid := True
					}

				}
			}
		}

		io.raw_data.ready := raw_data_ready && io.result.ready

		io.result.x := result_x
		io.result.y := result_y
		io.result.z := result_z
		io.result.valid := result_valid
	}


//	def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt): Area = new Area{
//		busCtrl.driveFlow()
//	}
}


object CordicRotatorBench {
	def main(args: Array[String]): Unit = {
		val cordic_config = CordicConfig(16 exp, -15 exp, 16, false)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl").generateSystemVerilog(new CordicRotator(cordic_config)).printPruned()
	}
}

object CordicRotatorSimApp extends App{
	import spinal.core.sim._

	val cordic_config = CordicConfig(16 exp, -15 exp, 16, false)

	SimConfig
		.withWave
		//        .allOptimisation
		.doSim(new CordicRotator(cordic_config)){ dut =>
			dut.clockDomain.forkStimulus(5)
			dut.io.iter_limit #= 15
			dut.io.rot_mode #= false
			dut.io.w_en #= false
			dut.io.x_u #= 1
			dut.io.raw_data.valid #= false
			dut.io.result.ready #= true
			dut.clockDomain.waitSampling(10)
			dut.io.w_en #= true
			for (idx <- 0 until cordic_config.iterations){
				dut.io.w_addr #= idx
				dut.clockDomain.waitSampling(1)
				dut.io.w_data.raw #= (Math.pow(2, -(idx) ) * ( 1 << 15)).toInt
				dut.clockDomain.waitSampling(1)
			}
			dut.io.w_en #= false
			dut.clockDomain.waitSampling(10)
			dut.io.raw_data.x.raw #= (5 << 15)
			dut.io.raw_data.y.raw #= (3 << 15)
			dut.io.raw_data.z.raw #= (0 << 13)
			dut.io.raw_data.valid #= true
			dut.clockDomain.waitSampling(1)
			for (idx <- 1 until 10){
				dut.io.raw_data.x.raw #= (10 << 15)
				dut.io.raw_data.y.raw #= (idx << 15)
				dut.io.raw_data.z.raw #= (0 << 13)
				dut.clockDomain.waitSampling(1)
			}
			dut.io.raw_data.valid #= false

			dut.clockDomain.waitSampling(100)

		}
}