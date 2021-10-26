package utils.bus.AxiLite

import spinal.core._
import spinal.lib._

case class AxiLite4ReadDmaCmd(axiLite4Config: AxiLite4Config) extends Bundle{
    val offset = UInt(axiLite4Config.addressWidth bits)
    val endAt = UInt(axiLite4Config.addressWidth bits)
}

class AxiLite4ReadDma(axiLite4Config: AxiLite4Config) extends Component {
    val io = new Bundle {
        val run = slave Stream (AxiLite4ReadDmaCmd(axiLite4Config))
        val axi = master(AxiLite4ReadOnly(axiLite4Config))
        val read = master Stream (Bits(axiLite4Config.dataWidth bit))
    }
    noIoPrefix()

    val active = RegInit(False)
    val counter = Reg(UInt(axiLite4Config.addressWidth bit))
    io.run.ready := False
    when(!active) {
        when(io.run.valid) {
            counter := io.run.offset
            active := True
        }
    } otherwise {
        when(io.axi.readCmd.ready) {
            counter := counter + axiLite4Config.bytePerWord
            when(counter === io.run.endAt) {
                active := False
                io.run.ready := True
            }
        }
    }

    io.axi.readCmd.valid := active
    io.axi.readCmd.addr := counter
    io.axi.readCmd.setUnprivileged()

    io.read.translateFrom(io.axi.readRsp)((to,from) => {
        to := from.data
    })
}

object AxiLite4ReadDmaBranch {
    def main(args: Array[String]): Unit ={
        val config = AxiLite4Config(addressWidth= 32, dataWidth = 32)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC),
            targetDirectory = "rtl").generateSystemVerilog(new AxiLite4ReadDma(config))
    }

}
