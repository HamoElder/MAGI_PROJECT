package utils.debugger

import spinal.core._
import spinal.lib._

case class Ila(probeSigWidth:Seq[Int]) extends BlackBox {
	val io=new Bundle{
		val clk: Bool =in Bool()
		val probe = probeSigWidth.zipWithIndex.map{ case(w, i) =>
			val ret = in Bits(w bits)
			ret.setName(s"probe${i}")
			ret
		}
//		val probe: Vec[Bits] = in Vec(for(index<- probeSigWidth.indices) yield (Bits((probeSigWidth(index) bits))) setName(s"probe$index"))
	}
	this.setDefinitionName(s"ila${Ila.ilaIndex}")
	noIoPrefix()
	mapCurrentClockDomain(clock = io.clk)
}

object Ila {
	def apply[T <: Data](signals : Seq[T], depth: Int): Unit = {
		val ints_width: Seq[Int] = signals .map(B(_).getBitsWidth).toList
		val vivadoIla = Ila(ints_width)
		vivadoIla.io.probe.zip(signals).foreach{case(probe_i, s) =>
			probe_i := (s.asBits).setName(s.getName() + "_b")
		}
		genTclScript(ints_width, depth)
		ilaIndex = ilaIndex + 1
	}

	private var ilaIndex = 0

	private def genTclScript(probeSigWidth: Seq[Int], sampleDepth: Int = 1024): Unit = {
		import java.io._
		val createIlaCmd = s"set ilaExit [lsearch -exact [get_ips ila*] ila${Ila.ilaIndex}]\n" +
			s"if { $$ilaExit <0} {\n" +
			s"create_ip -name ila -vendor xilinx.com -library ip -version 6.2 -module_name ila${ilaIndex}\n" +
			s"}\n"
		val tclHeader = new PrintWriter(new File(s"tcl/generateIla$ilaIndex.tcl"))
		tclHeader.write(createIlaCmd)
		tclHeader.write(s"set_property CONFIG.C_NUM_OF_PROBES ${probeSigWidth.size} [get_ips ila${ilaIndex}]\n")
		tclHeader.write(s"set_property CONFIG.C_EN_STRG_QUAL {1} [get_ips ila${ilaIndex}]\n")
		tclHeader.write(s"set_property CONFIG.C_ADV_TRIGGER {true} [get_ips ila${ilaIndex}]\n")
		tclHeader.write(s"set_property CONFIG.C_DATA_DEPTH $sampleDepth [get_ips ila${ilaIndex}]\n")
		for (probeIndex <- probeSigWidth.indices) {
			tclHeader.write(s"set_property CONFIG.C_PROBE${probeIndex}_WIDTH {${probeSigWidth(probeIndex)}} [get_ips ila${ilaIndex}]\n")
		}
		tclHeader.close()
	}

}

case class add(dataWidth:Int) extends Component{
	val io=new Bundle{
		val data1 =in UInt(dataWidth bits)
		val data2=in UInt(dataWidth bits)
		val sum=out UInt(dataWidth bits) setAsReg() init(0)
	}
	noIoPrefix()
	val both=io.data1+1
	io.sum:=io.data1+io.data2+both
}

class Sum() extends Component{
	val io=new Bundle{
		val data1=in UInt(8 bits)
		val data2=in UInt(8 bits)
		val sum=out UInt(8 bits)
		val ilaClock = in Bool()
	}
	noIoPrefix()
	val sum=new add(8)
	io.data1<>sum.io.data1
	io.data2<>sum.io.data2
	io.sum<>sum.io.sum
	val ilaClockDomain = ClockDomain(io.ilaClock,
		config = ClockDomainConfig(
			clockEdge        = RISING
		))
	val debugArea = new ClockingArea(ilaClockDomain) {
		val ila_probe=Ila(Seq(sum.both.pull()),1024)
		val ila_probe1=Ila(Seq(io.data1,io.data2,io.sum),2048)
	}

}

object IlaTestBench{
	def main(args: Array[String]): Unit ={
		SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
			targetDirectory = "rtl").generateSystemVerilog(new Sum()).printPruned().printUnused()
	}
}
