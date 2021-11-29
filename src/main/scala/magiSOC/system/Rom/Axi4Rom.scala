package magiSOC.system.Rom

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4ReadOnly, Axi4SpecRenamer}

object Axi4RomStates extends SpinalEnum {
    val IDLE, BURST = newElement()
}

case class Axi4RomConfig(
                        genFunc: () => Seq[Bits] = null,
                        outStanding: Int = 4
                        ){
    require(genFunc != null, "ROM Generator Function must not be null.")

    def initialContent: Seq[Bits] = genFunc()
    def dataWidth : Int = initialContent.head.getBitsWidth
    def bytePerWord: Int = (dataWidth / 8)
    def bytesCnt: Int = initialContent.length * bytePerWord
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

case class Axi4Rom(config: Axi4RomConfig) extends Component {
    val io = new Bundle{
        val axi4 = slave(Axi4ReadOnly(config.axi4Config))
    }
    noIoPrefix()
    Axi4SpecRenamer(io.axi4)
    val rom = Mem(config.axi4Config.dataType, initialContent = config.initialContent)

    val ar_fifo = StreamFifo(
        dataType = io.axi4.ar.payload,
        depth = config.outStanding
    )
    ar_fifo.io.push << io.axi4.ar

    val r_fifo = StreamFifo(
        dataType = io.axi4.r.payload,
        depth = config.outStanding
    )
    io.axi4.r << r_fifo.io.pop
    /**
     * Read Channel
     */
    // State Register
    val axi4_r_state = Reg(Axi4RomStates()) init(Axi4RomStates.IDLE)

    val rd_cnt = Reg(config.burstCntType)
    val rd_addr = Reg(config.axi4Config.addressType)
    val rd_id = Reg(config.axi4Config.idType)
    val rd_size = Reg(UInt(3 bits))
    val rd_burst = Reg(Bits(2 bits))

    r_fifo.io.push.data := rom.readSync(address = rd_addr(config.axi4Config.wordRange))

    switch(axi4_r_state){
        is(Axi4RomStates.IDLE){
            when(ar_fifo.io.pop.valid){
                axi4_r_state := Axi4RomStates.BURST

                rd_id := ar_fifo.io.pop.id
                rd_cnt := ar_fifo.io.pop.len
                rd_addr := ar_fifo.io.pop.addr
                rd_burst := ar_fifo.io.pop.burst
                rd_size := (ar_fifo.io.pop.size < config.burstSize) ? ar_fifo.io.pop.size | config.burstSize
            }
        }
        is(Axi4RomStates.BURST) {
            when(r_fifo.io.push.ready) {
                rd_addr := (rd_burst === 0) ? rd_addr | (rd_addr + (1 << rd_size))
                rd_cnt := rd_cnt - 1
                when(rd_cnt === 0) {
                    axi4_r_state := Axi4RomStates.IDLE
                }
            }
        }
    }

    ar_fifo.io.pop.ready := axi4_r_state === Axi4RomStates.IDLE
    r_fifo.io.push.id := rd_id
    r_fifo.io.push.setOKAY()
    r_fifo.io.push.last := RegNext(rd_cnt === 0)
    r_fifo.io.push.valid := RegNext(axi4_r_state === Axi4RomStates.BURST)
}


object Axi4RomBench{
    def main(args: Array[String]): Unit = {
        def linearGen(): Seq[Bits] = {
            var linearTable = Seq[Bits]()
            for (idx <- 0 until 2048) {
                linearTable = linearTable :+ B(idx, 32 bits)
            }
            linearTable
        }
        val axi4RomConfig = Axi4RomConfig(linearGen)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/Axi4Rom").generateSystemVerilog(new Axi4Rom(axi4RomConfig)).printPruned()
    }
}