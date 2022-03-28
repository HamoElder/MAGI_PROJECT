package utils.debugger

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.sim.AxiLite4Driver
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}


case class StreamPlayerConfig(
                             dataWidth    : Int,
                             fifoDepth    : Int,
                             dataList     : Array[Int] = null
                             ){
	require(fifoDepth >= 0)
	def addressWidth = 8
	def dataType: Bits = Bits(dataWidth bits)
	def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, dataWidth)
	def useDynamic: Boolean = (dataList == null)
	def dataSize: Int = if(useDynamic) 0 else dataList.length
	def cntType: UInt = UInt(log2Up(dataSize) bits)

	def payloadList: Array[Bits] = dataList.map(i => B(i, dataWidth bits))
}

case class StreamPlayer(config: StreamPlayerConfig) extends Component {
	val io = new Bundle{
		val axil4Ctrl = if(config.useDynamic) slave(AxiLite4(config.axiLite4Config)) else null
		val data_master = master(Stream(config.dataType))
	}
	noIoPrefix()

	val dataFifo: StreamFifo[Bits] = StreamFifo(
		dataType = config.dataType,
		depth = config.fifoDepth
	)

	if(config.useDynamic){
		AxiLite4SpecRenamer(io.axil4Ctrl)
		val axil4busCtrl = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
		dataFifo.io.push << axil4busCtrl.createAndDriveFlow(config.dataType, address = 0x00, bitOffset = 0).toStream
		axil4busCtrl.read(dataFifo.io.availability, address = 0x04, bitOffset = 0, documentation = "The remain space for data fifo.")
		axil4busCtrl.driveAndRead(dataFifo.io.flush, address = 0x08, bitOffset = 0, documentation = "Execute data fifo flush operation.")
	}
	else{
		val dataMem = Mem(config.dataType, initialContent = config.payloadList).addAttribute("rom_style", "block")

		val cnt = Reg(config.cntType) init(0)
		when(dataFifo.io.push.fire){
			cnt := (cnt === config.dataSize - 1) ? U(0) | cnt + 1
		}
		dataFifo.io.push.payload := dataMem.readSync(address = cnt)
		dataFifo.io.push.valid := True
	}

	io.data_master << dataFifo.io.pop

}

object StreamPlayerBench {
	def main(args: Array[String]): Unit = {
		val player_config = StreamPlayerConfig(32, 128)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/StreamPlayer").generateSystemVerilog(new StreamPlayer(player_config)).printPruned()
	}
}

object StreamPlayerSimApp extends App{
	import spinal.core.sim._

	val player_config = StreamPlayerConfig(32, 64)
	SimConfig
		.withWave
		.allOptimisation
		.doSim(new StreamPlayer(player_config)){ dut =>
			dut.clockDomain.forkStimulus(5)
			val aliteDrv = AxiLite4Driver(dut.io.axil4Ctrl, dut.clockDomain)
			dut.io.data_master.ready #= false
			aliteDrv.reset()
			dut.clockDomain.waitSampling(10)
			for (idx <- 1 until 1000){
				dut.io.data_master.ready.randomize()
				aliteDrv.write(0x00, idx)
			}
			dut.clockDomain.waitSampling(100)
		}
}