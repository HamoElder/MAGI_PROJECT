package magiSOC.plugins

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config, Axi4ReadOnly, Axi4SpecRenamer}

object Axi4RamStates extends SpinalEnum {
	val IDLE, BURST, RESP = newElement()
}

case class Axi4RamConfig(
							dataWidth: Int,
							byteCount: Int = 0,
							genFunc: () => Seq[Bits] = null,
							outStanding: Int = 4
							//                          useReadOnly       : Boolean = false
						) {
	def initialContent: Seq[Bits] = if (genFunc == null) null else genFunc()

	def bytePerWord: Int = (dataWidth / 8)

	def bytesCnt: Int = if (initialContent == null) byteCount else initialContent.length * bytePerWord

	def idWidth = 8

	def addressWidth: Int = log2Up(bytesCnt)

	def wordCount: Int = bytesCnt / bytePerWord

	def burstCntType: UInt = UInt(8 bits)

	def burstSize: Int = log2Up(bytePerWord)

	def rFifoSize: Int = 256

	def axi4Config: Axi4Config = Axi4Config(
		addressWidth = addressWidth,
		dataWidth = dataWidth,
		idWidth = idWidth,
		useLock = false,
		useRegion = false,
		useCache = false,
		useProt = false,
		useQos = false
	)

}

case class Axi4Ram(config: Axi4RamConfig) extends Component {
	val io = new Bundle {
		val axi4 = slave(Axi4(config.axi4Config))
	}
	noIoPrefix()
	Axi4SpecRenamer(io.axi4)
	val ram = if (config.initialContent == null) Mem(config.axi4Config.dataType, wordCount = config.wordCount) else Mem(config.axi4Config.dataType, initialContent = config.initialContent)


	val ar_fifo = StreamFifo(
		dataType = io.axi4.ar.payload,
		depth = config.outStanding
	)
	ar_fifo.io.push << io.axi4.ar

	val aw_fifo = StreamFifo(
		dataType = io.axi4.aw.payload,
		depth = config.outStanding
	)
	aw_fifo.io.push << io.axi4.aw

	val b_fifo = StreamFifo(
		dataType = io.axi4.b.payload,
		depth = config.outStanding
	)
	io.axi4.b << b_fifo.io.pop

	val r_fifo = StreamFifo(
		dataType = io.axi4.r.payload,
		depth = config.rFifoSize
	)
	io.axi4.r << r_fifo.io.pop
	/**
	 * Read Channel
	 */
	// State Register
	val axi4_r_state = Reg(Axi4RamStates()) init (Axi4RamStates.IDLE)

	val rd_cnt = Reg(config.burstCntType)
	val rd_addr = Reg(config.axi4Config.addressType)
	val rd_id = Reg(config.axi4Config.idType)
	val rd_size = Reg(UInt(3 bits))
	val rd_burst = Reg(Bits(2 bits))

	r_fifo.io.push.data := ram.readSync(address = rd_addr(config.axi4Config.wordRange))

	switch(axi4_r_state) {
		is(Axi4RamStates.IDLE) {
			when(ar_fifo.io.pop.valid) {
				axi4_r_state := Axi4RamStates.BURST

				rd_id := ar_fifo.io.pop.id
				rd_cnt := ar_fifo.io.pop.len
				rd_addr := ar_fifo.io.pop.addr
				rd_burst := ar_fifo.io.pop.burst
				rd_size := (ar_fifo.io.pop.size < config.burstSize) ? ar_fifo.io.pop.size | config.burstSize
			}
		}
		is(Axi4RamStates.BURST) {
			when(r_fifo.io.push.ready) {
				rd_addr := (rd_burst === 0) ? rd_addr | (rd_addr + (1 << rd_size))
				rd_cnt := rd_cnt - 1
				when(rd_cnt === 0) {
					axi4_r_state := Axi4RamStates.IDLE
				}
			}
		}
		//		is(Axi4RamStates.RESP){
		//			when(r_fifo.io.occupancy === 0 && !r_fifo.io.push.valid){
		//				axi4_r_state := Axi4RamStates.IDLE
		//			}
		//		}
	}

	ar_fifo.io.pop.ready := axi4_r_state === Axi4RamStates.IDLE
	r_fifo.io.push.id := rd_id
	r_fifo.io.push.setOKAY()
	r_fifo.io.push.last := RegNext(rd_cnt === 0)
	r_fifo.io.push.valid := RegNext(axi4_r_state === Axi4RamStates.BURST)

	/**
	 * Write Channel
	 */
	val axi4_w_state = Reg(Axi4RamStates()) init (Axi4RamStates.IDLE)
	val wr_addr = Reg(config.axi4Config.addressType)
	ram.write(
		address = wr_addr(config.axi4Config.wordRange),
		data = io.axi4.writeData.data,
		enable = io.axi4.writeData.fire,
		mask = io.axi4.writeData.strb
	)
	val wr_cnt = Reg(config.burstCntType)
	switch(axi4_w_state) {
		is(Axi4RamStates.IDLE) {
			when(aw_fifo.io.pop.valid) {
				axi4_w_state := Axi4RamStates.BURST
			}
		}
		is(Axi4RamStates.BURST) {
			when(wr_cnt === 0 && io.axi4.w.fire) {
				axi4_w_state := Axi4RamStates.RESP
			}
		}
		is(Axi4RamStates.RESP) {
			when(b_fifo.io.push.ready) {
				axi4_w_state := Axi4RamStates.IDLE
			}
		}
	}
	val wr_size = Reg(UInt(3 bits))
	val wr_burst = Reg(Bits(2 bits))

	val b_valid = Reg(Bool()) init (False)
	val b_id = Reg(config.axi4Config.idType)
	switch(axi4_w_state) {
		is(Axi4RamStates.IDLE) {
			b_id := aw_fifo.io.pop.id
			wr_cnt := aw_fifo.io.pop.len
			wr_addr := aw_fifo.io.pop.addr
			wr_burst := aw_fifo.io.pop.burst
			wr_size := (aw_fifo.io.pop.size < config.burstSize) ? aw_fifo.io.pop.size | config.burstSize

			b_valid := False
		}
		is(Axi4RamStates.BURST) {
			when(io.axi4.w.fire) {
				wr_addr := (wr_burst === 0) ? wr_addr | (wr_addr + (1 << wr_size))
				wr_cnt := wr_cnt - 1
			}
		}
		is(Axi4RamStates.RESP) {
			b_valid := True
		}
	}
	aw_fifo.io.pop.ready := (axi4_w_state === Axi4RamStates.IDLE)
	io.axi4.w.ready := (axi4_w_state === Axi4RamStates.BURST)
	b_fifo.io.push.valid := b_valid
	b_fifo.io.push.id := b_id
	b_fifo.io.push.setOKAY()

}


object Axi4RamBench {
	def main(args: Array[String]): Unit = {
		val axi4RamConfig = Axi4RamConfig(32, 65536)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/Axi4Ram").generateSystemVerilog(new Axi4Ram(axi4RamConfig)).printPruned()
	}
}

object Axi4RamSimApp extends App {

	import spinal.core.sim._
	import utils.bus.AxiLite.sim.AxiLite4Driver
	import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
	import scala.util.Random

	def linearGen(): Seq[Bits] = {
		var linearTable = Seq[Bits]()
		for (idx <- 0 until 2048) {
			linearTable = linearTable :+ B(idx, 32 bits)
		}
		linearTable
	}

	val axi4RamConfig = Axi4RamConfig(32, genFunc = linearGen, outStanding = 4)
	SimConfig
		.withWave
		.allOptimisation
		.doSim(new Axi4Ram(axi4RamConfig)) { dut =>
			dut.clockDomain.forkStimulus(5)

			// Init
			dut.io.axi4.ar.valid #= false
			dut.io.axi4.r.ready #= false
			dut.io.axi4.aw.valid #= false
			dut.io.axi4.w.valid #= false
			dut.io.axi4.w.strb #= 0
			dut.io.axi4.w.last #= false
			dut.io.axi4.b.ready #= true
			dut.clockDomain.waitSampling(10)
			// Write
			dut.io.axi4.r.ready #= true

			dut.io.axi4.aw.valid #= true
			dut.io.axi4.aw.addr #= 0
			dut.io.axi4.aw.burst #= 1
			dut.io.axi4.aw.len #= 255
			dut.io.axi4.aw.size #= 2
			dut.clockDomain.waitSampling(1)
			dut.io.axi4.aw.valid #= false
			dut.clockDomain.waitSamplingWhere(dut.io.axi4.w.ready.toBoolean)
			for (idx <- 0 until 255) {
				dut.io.axi4.w.valid #= true
				dut.io.axi4.w.data #= 255 - idx
				dut.io.axi4.w.strb #= 15
				dut.clockDomain.waitSampling(1)
			}
			dut.io.axi4.w.data #= 255
			dut.io.axi4.w.last #= true
			dut.clockDomain.waitSampling(1)
			dut.io.axi4.w.last #= false
			dut.io.axi4.w.valid #= false

			dut.clockDomain.waitSampling(1)
			// Read
			dut.io.axi4.ar.valid #= true
			dut.io.axi4.ar.addr #= 0
			dut.io.axi4.ar.burst #= 1
			dut.io.axi4.ar.len #= 15
			dut.io.axi4.ar.size #= 2

			dut.clockDomain.waitSampling(1)
			dut.io.axi4.ar.addr #= 1024
			dut.io.axi4.ar.burst #= 1
			dut.io.axi4.ar.len #= 0
			dut.io.axi4.ar.size #= 2
			dut.clockDomain.waitSampling(1)
			dut.io.axi4.ar.addr #= 2048
			dut.io.axi4.ar.burst #= 1
			dut.io.axi4.ar.len #= 255
			dut.io.axi4.ar.size #= 2
			dut.clockDomain.waitSampling(1)
			dut.io.axi4.ar.addr #= 4096
			dut.io.axi4.ar.burst #= 0
			dut.io.axi4.ar.len #= 255
			dut.io.axi4.ar.size #= 2
			dut.clockDomain.waitSampling(1)
			dut.io.axi4.ar.addr #= 7168
			dut.io.axi4.ar.burst #= 1
			dut.io.axi4.ar.len #= 255
			dut.io.axi4.ar.size #= 2
			dut.clockDomain.waitSampling(1)
			dut.io.axi4.ar.valid #= false
			dut.clockDomain.waitSampling(10)

			// Write
			dut.io.axi4.aw.valid #= true
			dut.io.axi4.aw.addr #= 0
			dut.io.axi4.aw.burst #= 1
			dut.io.axi4.aw.len #= 0
			dut.io.axi4.aw.size #= 2
			dut.clockDomain.waitSampling(1)
			dut.io.axi4.aw.valid #= false
			dut.clockDomain.waitSamplingWhere(dut.io.axi4.w.ready.toBoolean)

			dut.io.axi4.w.valid #= true
			dut.io.axi4.w.data #= 255
			dut.io.axi4.w.strb #= 15
			dut.io.axi4.w.last #= true
			dut.clockDomain.waitSampling(1)
			dut.io.axi4.w.last #= false
			dut.io.axi4.w.valid #= false

			dut.clockDomain.waitSampling(2000)
		}
}