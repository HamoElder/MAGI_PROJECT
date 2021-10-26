package utils.common.ClkCrossing

import spinal.core._
import spinal.lib._

//             _____                        _____             _____
//            |     |  (crossClockDomain)  |     |           |     |
//  dataIn -->|     |--------------------->|     |---------->|     |--> dataOut
//            | FF  |                      | FF  |           | FF  |
//  clkA   -->|     |              clkB -->|     |   clkB -->|     |
//  rstA   -->|_____|              rstB -->|_____|   rstB -->|_____|

case class ClkCrossing[T <: Data](dataType: T, clkI : ClockDomain,clkO : ClockDomain) extends Component {
	val io = new Bundle{
		val dataIn = in cloneOf(dataType)
		val dataOut = out cloneOf(dataType)
	}
	noIoPrefix()

	val area_clkI = new ClockingArea(clkI) {
		val reg = RegNext(io.dataIn)
	}

	val area_clkO = new ClockingArea(clkO) {
		val buf0   = RegNext(area_clkI.reg)  addTag(crossClockDomain)
		val buf1   = RegNext(buf0)
	}

	io.dataOut := area_clkO.buf1
}

object ClkCrossing{
	def apply[T <: Data](clkI : ClockDomain,clkO : ClockDomain, data: T): T ={
		val clk_cross = ClkCrossing(data, clkI = clkI, clkO = clkO)
		clk_cross.io.dataIn := data
		clk_cross.io.dataOut
	}
}
