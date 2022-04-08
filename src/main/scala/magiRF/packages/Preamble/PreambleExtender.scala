package magiRF.packages.Preamble

import Misc.math.Complex
import magiRF.top.IEEE802_11.IEEE802_11
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

object PreambleExtenderStates extends SpinalEnum(defaultEncoding=binarySequential) {
	val IDLE, PREAMBLE, DATA = newElement()
}

case class PreambleConfig(
                         iqWidth: Int,
												 preamble: Array[Complex],
												 repeat: Int = 8,
                         scale: Double = 1.0
                         ){
	require(iqWidth > 0, "iqWidth must larger than 0")
	def dataType: SInt = SInt(iqWidth bits)
	def dataLength: Int = preamble.length
	def peakVal: Int = (1 << (iqWidth - 1)) - 1
	def cntType: UInt = UInt(log2Up(dataLength) bits)
	def repeatCntType: UInt = UInt(log2Up(repeat) + 1 bits)
	def preambleI_payload: Seq[SInt] = for(idx <- 0 until dataLength) yield {
		S((preamble(idx).re * peakVal * scale).toInt, iqWidth bits)
	}

	def preambleQ_payload: Seq[SInt] = for(idx <- 0 until dataLength) yield {
		S((preamble(idx).im * peakVal * scale).toInt, iqWidth bits)
	}
}

case class PreambleExtender(config: PreambleConfig) extends Component {
	val io = new Bundle{
        val raw_data: Stream[Fragment[IQBundle[SInt]]] = slave(Stream(Fragment(IQBundle(config.dataType))))
        val preamble_data: Stream[Fragment[IQBundle[SInt]]] = master(Stream(Fragment(IQBundle(config.dataType))))
    }
	noIoPrefix()

	val I_mem: Mem[SInt] = Mem(config.dataType, initialContent = config.preambleI_payload).addAttribute("rom_style", "block")
	val Q_mem: Mem[SInt] = Mem(config.dataType, initialContent = config.preambleQ_payload).addAttribute("rom_style", "block")
	val cnt: UInt = Reg(config.cntType) init(0)
	val repeatCnt = Reg(config.repeatCntType) init(0)
	val raw_ready = Reg(Bool()) init(False)
	val preamble_data_i = Reg(config.dataType)
	val preamble_data_q = Reg(config.dataType)
	val preamble_valid = Reg(Bool()) init(False)
	val preamble_last = Reg(Bool()) init(False)

	import PreambleExtenderStates._
	val preamble_states = Reg(PreambleExtenderStates()) init(IDLE)
	switch(preamble_states){
		is(IDLE){
			cnt := 0
			repeatCnt := 0
			raw_ready := False
			preamble_valid := False
			preamble_last := False
			when(io.raw_data.valid && io.preamble_data.ready){
				cnt := cnt + 1
				preamble_states := PREAMBLE
			}
			preamble_data_i := I_mem.readSync(cnt)
			preamble_data_q := Q_mem.readSync(cnt)
		}
		is(PREAMBLE){
			when(io.preamble_data.ready){
				cnt := (cnt === config.dataLength - 1) ? U(0) | cnt + 1
			}
			preamble_data_i := I_mem.readSync(cnt)
			preamble_data_q := Q_mem.readSync(cnt)
			preamble_valid := True
			when(cnt === config.dataLength - 1){
				repeatCnt := repeatCnt + 1
				when(repeatCnt === config.repeat - 1){
					raw_ready := True
					preamble_states := DATA
				}
			}
		}
		is(DATA){
			when(io.raw_data.fire){
				preamble_data_i := io.raw_data.cha_i
				preamble_data_q := io.raw_data.cha_q
				preamble_valid := True
			}.otherwise{
				preamble_valid := False
			}

			when(io.raw_data.lastFire){
				preamble_states := IDLE
				preamble_last := True
			}.otherwise{
				preamble_last := False
			}
		}
	}
	io.raw_data.ready := raw_ready && io.preamble_data.ready
	io.preamble_data.valid := preamble_valid
	io.preamble_data.cha_i := preamble_data_i
	io.preamble_data.cha_q := preamble_data_q
	io.preamble_data.last := preamble_last
}


object PreambleExtenderBench {
	def main(args: Array[String]): Unit = {
//		import magiRF.top.OAM_BETA.Config
		val preamble_config = PreambleConfig(16, IEEE802_11.ltf)
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl/PreambleExtender/PreambleExtender_802_11_ltf").generateSystemVerilog(new PreambleExtender(preamble_config)).printPruned()
	}
}
