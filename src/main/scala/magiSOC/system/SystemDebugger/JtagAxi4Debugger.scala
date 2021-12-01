package magiSOC.system.SystemDebugger

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.Axi4
import utils.debugger.Jtag.Jtag

case class JtagAxi4Debugger(c: SystemDebuggerConfig) extends Component {
    val io = new Bundle {
        val jtag = slave(Jtag())
        val axi = master(Axi4(c.getMemAxi4Config))
    }

    val jtagBridge = new JtagBridge(c)
    jtagBridge.io.jtag <> io.jtag

    val debugger = new SystemDebugger(c)
    debugger.io.remote <> jtagBridge.io.remote
    debugger.io.mem.toAxi4 <> io.axi
}

object JtagAxi4DebuggerBench {
    def main(args: Array[String]): Unit = {
        val debugger_config = SystemDebuggerConfig(
            memAddressWidth = 32,
            memDataWidth = 32,
            remoteCmdWidth = 1
        )
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/JtagAxi4Debugger").generateSystemVerilog(new JtagAxi4Debugger(debugger_config)).printPruned()
    }
}