package magiSOC.system.JtagBoundaryScan

import spinal.core._
import spinal.lib._
import utils.debugger.Jtag.{Jtag, JtagTap}

/**
 * define SimpleJtagTap
 */

class SimpleJtagTap extends Component {
    val io = new Bundle {
        val jtag    = slave(Jtag())
        val switchs = in  Bits(8 bit)
        val keys    = in  Bits(4 bit)
        val leds    = out Bits(8 bit)
    }

    val ctrl = new ClockingArea(ClockDomain(io.jtag.tck)) {
        val tap = new JtagTap(io.jtag, 8)
        val idcodeArea = tap.idcode(B"x87654321")(instructionId = 4)
        val switchsArea = tap.read(io.switchs)(instructionId = 5)
        val keysArea = tap.read(io.keys)(instructionId = 6)
        val ledsArea = tap.write(io.leds)(instructionId = 7)
    }
}

/**
 * define SimpleJtagTap object
 */
object SimpleJtagTapBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new SimpleJtagTap()).printPruned()
    }
}
