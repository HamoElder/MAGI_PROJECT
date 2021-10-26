package magiSOC.plugins

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SpecRenamer}

case class AxiLite4RamConfig(
								dataWidth         : Int,
								byteCount         : Int         = 0,
								genFunc: () => Seq[Bits] = null
                            ) {
	def bytePerWord: Int = (dataWidth / 8)

	def initialContent: Seq[Bits] = if (genFunc == null) null else genFunc()

	def bytesCnt: Int = if (initialContent == null) byteCount else initialContent.length * bytePerWord

	def idWidth = 3

	def addressWidth: Int = log2Up(bytesCnt)

	def wordCount: Int = bytesCnt / bytePerWord

	def wordRange: Range.Inclusive = addressWidth - 1 downto log2Up(bytePerWord)

	def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, dataWidth)
}

case class AxiLite4Ram(config: AxiLite4RamConfig) extends Component{
	val io = new Bundle{
		val axil4Data = slave(AxiLite4(config.axiLite4Config))
	}
	noIoPrefix()
	AxiLite4SpecRenamer(io.axil4Data)

	val ram = if(config.initialContent == null) Mem(config.axiLite4Config.dataType, wordCount = config.wordCount) else Mem(config.axiLite4Config.dataType, initialContent = config.initialContent)
	val ram_w_address = Reg(config.axiLite4Config.addressType)

	io.axil4Data.readRsp.data := ram.readSync(
		address = io.axil4Data.ar.addr(config.wordRange),
		enable = io.axil4Data.readCmd.fire
	)

	ram.write(
		address = ram_w_address(config.wordRange),
		data = io.axil4Data.writeData.data,
		enable = io.axil4Data.writeData.fire,
		mask = io.axil4Data.writeData.strb
	)

	val axil4_ar_ready = Reg(Bool()) init(True)
	val axil4_aw_ready = Reg(Bool()) init(True)
	val axil4_w_ready = Reg(Bool()) init(False)
	val axil4_r_valid = Reg(Bool()) init(False)
	val axil4_b_valid = Reg(Bool()) init(False)

	io.axil4Data.readRsp.setOKAY()
	io.axil4Data.writeRsp.setOKAY()
	io.axil4Data.writeRsp.valid := axil4_b_valid

	io.axil4Data.readCmd.ready := axil4_ar_ready
	io.axil4Data.writeCmd.ready := axil4_aw_ready
	io.axil4Data.writeData.ready := axil4_w_ready
	io.axil4Data.readRsp.valid := axil4_r_valid

	when(io.axil4Data.ar.fire && axil4_ar_ready){
		axil4_ar_ready := False
		axil4_r_valid:= True
	}.elsewhen(io.axil4Data.r.fire){
		axil4_ar_ready := True
		axil4_r_valid := False
	}

	when(io.axil4Data.aw.fire && axil4_aw_ready){
		ram_w_address := io.axil4Data.aw.addr
		axil4_aw_ready := False
		axil4_w_ready := True
	}.elsewhen(io.axil4Data.w.fire){
		axil4_w_ready := False
		axil4_b_valid := True
	}.elsewhen(io.axil4Data.b.fire){
		axil4_b_valid := False
		axil4_aw_ready := True
	}

}


object AxiLite4RamBench {
	def main(args: Array[String]): Unit = {
		val axiLite4RamConfig = AxiLite4RamConfig(32, 8192)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/AxiLite4Ram").generateSystemVerilog(new AxiLite4Ram(axiLite4RamConfig)).printPruned()
	}
}

object AxiLite4RamApp extends App{
	import spinal.core.sim._
	import utils.bus.AxiLite.sim.AxiLite4Driver
	import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
	import scala.util.Random

	val axiLite4RamConfig = AxiLite4RamConfig(32, 8192)

	SimConfig
		.withWave
		.allOptimisation
		.doSim(new AxiLite4Ram(axiLite4RamConfig)){ dut =>
			dut.clockDomain.forkStimulus(5)
			SimTimeout(1000000*10)
			val aliteDrv = AxiLite4Driver(dut.io.axil4Data, dut.clockDomain)
			aliteDrv.reset()
			dut.clockDomain.waitSampling(10)
			for (idx <- 0 until 8192 by 4){
				aliteDrv.write(idx, 0, 15)
			}
			for (idx <- 0 until 8192 by 4){
				aliteDrv.write(idx, idx, 1)
			}
			for (idx <- 0 until 8192 by 4){
				println(aliteDrv.read(idx))
			}
			dut.clockDomain.waitSampling(10)

		}
}