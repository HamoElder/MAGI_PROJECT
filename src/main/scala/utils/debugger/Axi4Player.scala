package utils.debugger

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4SpecRenamer, Axi4WriteOnly}
import spinal.lib.fsm._

object Axi4States extends SpinalEnum {
    val IDLE, BURST, RESP = newElement()
}

case class Axi4PlayerConfig(
                               dataWidth   : Int,
                               outStanding : Int = 4
                           ) {
    def idWidth = 8
    def addressWidth: Int = 32

    def burstCntType: UInt = UInt(8 bits)
    def bytePerWord: Int = (dataWidth / 8)
    def burstSize: Int = log2Up(bytePerWord)

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


case class Axi4Player(config: Axi4PlayerConfig) extends Component {
    val io = new Bundle{
        val axi4 = slave(Axi4WriteOnly(config.axi4Config))
        val data_out = master(Stream(config.axi4Config.dataType))
    }
    noIoPrefix()
    Axi4SpecRenamer(io.axi4)

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

    /**
     * Write Channel
     */

    val axi4_w_state = Reg(Axi4States()) init (Axi4States.IDLE)
    val wr_cnt = Reg(config.burstCntType)
    switch(axi4_w_state) {
        is(Axi4States.IDLE) {
            when(aw_fifo.io.pop.valid) {
                axi4_w_state := Axi4States.BURST
            }
        }
        is(Axi4States.BURST) {
            when(wr_cnt === 0 && io.axi4.w.fire) {
                axi4_w_state := Axi4States.RESP
            }
        }
        is(Axi4States.RESP) {
            when(b_fifo.io.push.ready) {
                axi4_w_state := Axi4States.IDLE
            }
        }
    }

    val b_valid = Reg(Bool()) init (False)
    val b_id = Reg(config.axi4Config.idType)

    switch(axi4_w_state) {
        is(Axi4States.IDLE) {
            b_id := aw_fifo.io.pop.id
            wr_cnt := aw_fifo.io.pop.len
            b_valid := False
        }
        is(Axi4States.BURST) {
            when(io.axi4.w.fire) {
                wr_cnt := wr_cnt - 1
            }
        }
        is(Axi4States.RESP) {
            b_valid := True
        }
    }
    aw_fifo.io.pop.ready := (axi4_w_state === Axi4States.IDLE)
    b_fifo.io.push.valid := b_valid
    b_fifo.io.push.id := b_id
    b_fifo.io.push.setOKAY()

    io.data_out.valid := io.axi4.writeData.valid
    io.data_out.payload := io.axi4.writeData.data
    io.axi4.writeData.ready := io.data_out.ready
}

object Axi4PlayerBench {
    def main(args: Array[String]): Unit = {
        val axi4PlayerConfig = Axi4PlayerConfig(32, 3)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/Axi4Player").generateSystemVerilog(new Axi4Player(axi4PlayerConfig)).printPruned()
    }
}