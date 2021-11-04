package magiRF.modules.DSP.CORDIC

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import spinal.lib.fsm._
import utils.common.ClkCrossing.ClkCrossing

/******************************************************************************
 * ---------------------------------------------------------------------------------------------------------------------------
 * | Coordinate System | Rotation Mode: d_i = sign(z^{i}); z^{i} => 0 | Vectoring Mode: d_i = -sign(x^{i}*y^{i}); y^{i} => 0 |
 * ---------------------------------------------------------------------------------------------------------------------------
 * |                   |         ----                                 |         ----                                         |
 * |      Circular     |  x --> |    | --> K(x.cos(z) - y.sin(z))     |  x --> |    | --> K(x^2 + y^2)^{1/2}                 |
 * |       u = 1       |  y --> |    | --> K(y.cos(z) + x.sin(z))     |  y --> |    | --> 0                                  |
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
		val rotate_mode = in(Bool())
		val x_u = in(UInt(2 bits))

		val w_en = if(config.useProgrammable) in(Bool()) else null
		val w_addr = if(config.useProgrammable) in(UInt(config.addressWidth bits)) else null
		val w_data = if(config.useProgrammable) in(config.dataType) else null

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
		if(config.useProgrammable){
			when(io.w_en){
				rot_mem(io.w_addr.resized) := io.w_data
			}
		}else{
			for(idx <- 0 until config.iterations){
				rot_mem(idx) := config.cordicRamGen()(idx)
			}
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
			val d_n = io.rotate_mode ? (z_n(idx - 1) >= 0) | (y_n(idx - 1) < 0)
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

		if(config.useProgrammable){
			rot_mem.write(address = io.w_addr.resized, data = io.w_data, enable = io.w_en)
		}

		val at = rot_mem.readSync(address = iterCnt.resized)

		val d_n = io.rotate_mode ? (z_n >= 0) | (y_n < 0)
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

	// Bus interface function module
	def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {

		val iter_limit = if(config.usePipeline) null else cloneOf(io.iter_limit)
		val rotate_mode = cloneOf(io.rotate_mode)
		val x_u = cloneOf(io.x_u)

		val w_en = if(config.useProgrammable) cloneOf(io.w_en) else null
		val w_addr = if(config.useProgrammable) cloneOf(io.w_addr) else null
		val w_data = if(config.useProgrammable) cloneOf(io.w_data) else null

		busCtrl.driveAndRead(rotate_mode, address = baseAddress + 0x00, bitOffset = 0,
			documentation = "Cordic Module Rotate Mode Enable. (1 bits)") init(True)
		busCtrl.driveAndRead(x_u, address = baseAddress + 0x00, bitOffset = 1,
			documentation = "Cordic Module Rotations Methods Select( 0-Circular / 1-Linear / 2-Hyperbolic).(2 bits)") init(0)

		if(!config.usePipeline){
			busCtrl.driveAndRead(iter_limit, address = baseAddress + 0x00, bitOffset = 8,
				documentation = s"Cordic Module Maximum Number of Iterations(Only Used in Iterative Mode). (${config.iterWidth} bits)") init(config.iterations)
			io.iter_limit := ClkCrossing(coreClockDomain, rfClockDomain, iter_limit)
		}
		if(config.useProgrammable){
			busCtrl.drive(w_en, address = baseAddress + 0x00, bitOffset = 3,
				documentation = "Cordic Module Ram Write Enable. (1 bits)") init(False)
			busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
				documentation = s"Cordic Module Ram Address Value Set. (${config.addressWidth} bits)") init(0)
			busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
				documentation = s"Cordic Module Ram Data Value Set. (${config.dataType.getBitsWidth} bits)") init(0)
			io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
			io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
			io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
		}

		io.rotate_mode := ClkCrossing(coreClockDomain, rfClockDomain, rotate_mode)
		io.x_u := ClkCrossing(coreClockDomain, rfClockDomain, x_u)
	}

}


object CordicRotatorBench {
	def main(args: Array[String]): Unit = {
		val cordic_config = CordicConfig(16 exp, -15 exp, 16, false)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/CordicRotator").generateSystemVerilog(new CordicRotator(cordic_config)).printPruned()
	}
}
