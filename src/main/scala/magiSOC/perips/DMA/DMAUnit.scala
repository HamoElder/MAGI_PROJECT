package magiSOC.perips.DMA

import spinal.core.Component.pop
import spinal.core._
import spinal.lib._

case class DMAUnitConfig(
                        interfaceWidth : Int = 32,
                        fifoWidth      : Int = 32,
                        fifoSize       : BigInt = 2 KiB
                        ){
    def fifoType: Bits = Bits(fifoWidth bits)
    def interfaceType: Bits = Bits(interfaceWidth bits)

    def fifoDepth: Int = (fifoSize / (fifoWidth / 8)).toInt
    println(fifoDepth)
    assert(isPow2(fifoDepth) & fifoDepth >= 2,
        "The depth of the StreamFifo must be a power of 2 and equal or bigger than 2")
    assert(fifoWidth >= interfaceWidth, "The width of fifo mush wider than the interface")
}

object DMAUnitStates extends SpinalEnum{
    val IDLE, JOINT_SPLIT, PUSH_PULL, PAD = newElement()
}

case class DMAUnit(config: DMAUnitConfig) extends Component {
    val io = new Bundle{
        // Global
        val dma_flush = in Bool()
        val dma_occupancy = out UInt(log2Up(config.fifoDepth + 1) bits)
        // Read Channel
        val dma_recv = slave Stream(config.interfaceType)
        val dma_recv_size = in UInt(3 bits)
        val dma_recv_en = in Bool()
        // Write Channel
        val dma_trans = master Stream(config.interfaceType)
        val dma_trans_size = in UInt(3 bits)
        val dma_trans_en = in Bool()
    }

    noIoPrefix()

    val DMA_buffer = StreamFifo(
        dataType = config.fifoType,
        depth = config.fifoDepth
    )
    DMA_buffer.io.flush := io.dma_flush
    io.dma_occupancy := DMA_buffer.io.occupancy

    // Read
    import DMAUnitStates._
    val recv_state = Reg(DMAUnitStates()) init(IDLE)
    // Connections
    //// TO Fifo
    val recv_push_payload = Reg(config.fifoType)
    val recv_push_valid = Reg(Bool()) init(False)
    // Variable
    val recv_counter = Reg(UInt(8 bits)) init(0)
    val recv_width = Reg(UInt(8 bits))
    val recv_buffer = Reg(config.fifoType) init(0)

    DMA_buffer.io.push.valid := recv_push_valid
    io.dma_recv.ready := DMA_buffer.io.push.ready & io.dma_recv_en
    DMA_buffer.io.push.payload := recv_push_payload

    switch(recv_state){
        is(IDLE){
            recv_counter := 0
            recv_push_valid := False
            when(io.dma_recv_en){
                recv_state := JOINT_SPLIT
                recv_width := (U(1, 8 bits)  |<< (io.dma_recv_size + 3)).resized
            }
        }
        is(JOINT_SPLIT){
            when(~io.dma_recv_en) {
                recv_state := PAD
            }.elsewhen(io.dma_recv.fire){
                recv_buffer := ((io.dma_recv.payload ## recv_buffer) |>> recv_width).resized
            }
            when(recv_counter === config.fifoWidth){
                recv_push_payload := recv_buffer
                recv_push_valid := True
                recv_counter := io.dma_recv.fire ? (recv_counter + recv_width - config.fifoWidth) | (recv_counter - config.fifoWidth)
            }.otherwise{
                recv_counter := io.dma_recv.fire ? (recv_counter + recv_width) | recv_counter
                recv_push_valid := False
            }

        }
        is(PAD){
            when(recv_counter === 0){
                recv_state := IDLE
                recv_push_valid := False
            }.elsewhen(recv_counter === config.fifoWidth){
                recv_push_payload := recv_buffer
                recv_push_valid := True
                recv_counter := recv_counter - config.fifoWidth
            }.otherwise{
                recv_counter := recv_counter + recv_width
                recv_push_valid := False
            }
            recv_buffer := (recv_buffer |>> recv_width).resized
        }
    }


    // Write
    val trans_states = Reg(DMAUnitStates()) init(IDLE)
    // Connections
    //// From Fifo
    val trans_pop_payload = Reg(config.fifoType)
    val trans_pop_ready = Reg(Bool()) init(False)
    //// To Interface
    val trans_io_valid = Reg(Bool()) init(False)
    // Variable
    val trans_counter = Reg(UInt(8 bits)) init(0)
    val trans_width = Reg(UInt(8 bits))

    DMA_buffer.io.pop.ready := trans_pop_ready && io.dma_trans_en
    io.dma_trans.valid := trans_io_valid && DMA_buffer.io.pop.valid
    io.dma_trans.payload := trans_pop_payload.resized
    // TODO: WRITING PROCESSOR NEED TO BE RECONSTRUCTED (Eliminate bubbles)
    switch(trans_states){
        is(IDLE){
            trans_pop_ready := False
            trans_io_valid := False
            trans_counter := 0
            when(io.dma_trans_en){
                trans_states := PUSH_PULL
                trans_width := (U(1, 8 bits)  |<< (io.dma_recv_size + 3)).resized
            }
        }
        is(PUSH_PULL){
            when(~io.dma_trans_en){
                trans_pop_ready := False
                trans_states := IDLE
            }.elsewhen(DMA_buffer.io.pop.fire){
                trans_pop_ready := False
                trans_counter := config.fifoWidth
                trans_io_valid := True
                trans_states := JOINT_SPLIT
            }.otherwise{
                trans_pop_ready := True
                trans_pop_payload := DMA_buffer.io.pop.payload
            }
        }
        is(JOINT_SPLIT){
            when(io.dma_trans.fire){
                trans_counter := trans_counter - trans_width
                trans_pop_payload := trans_pop_payload |>> trans_width
                when(trans_counter === trans_width){
                    trans_io_valid := False
                    trans_states := io.dma_trans_en ? PUSH_PULL | IDLE
                }
            }.otherwise{
                trans_io_valid := True
            }
        }
    }
}

object DMAUnitBench {
    def main(args: Array[String]) {
        val dma_unit_config = DMAUnitConfig(32, 32, 2 KiB)
        SpinalConfig(targetDirectory = "rtl").generateSystemVerilog(new DMAUnit(dma_unit_config)).printPruned()
    }
}

object DMAUnitSimApp extends App{
    import spinal.core.sim._

    val dma_unit_config = DMAUnitConfig(32, 32, 2 KiB)
    SimConfig
        .withWave
        //        .allOptimisation
        .doSim(new DMAUnit(dma_unit_config)) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.dma_flush #= false
            dut.io.dma_recv_size #= 3
            dut.io.dma_trans_size #= 4

            dut.io.dma_recv.valid #= false
            dut.io.dma_trans.ready #= false
            dut.io.dma_recv_en #= false
            dut.io.dma_trans_en #= false

            dut.clockDomain.waitSampling(10)
            dut.io.dma_recv_en #= true
            dut.clockDomain.waitSampling()
            for(i <- 0 to 64){
                dut.io.dma_recv.valid.randomize()
                dut.io.dma_recv.valid #= true
//                dut.io.dma_recv.payload.randomize()
                dut.io.dma_recv.payload #= i
                dut.clockDomain.waitSampling()
            }
            dut.io.dma_recv_en #= false
            dut.io.dma_recv.valid #= false
            dut.clockDomain.waitSampling(20)

            println(dut.io.dma_occupancy.toInt)
            val fifo_occupancy = dut.io.dma_occupancy.toInt -1

            dut.io.dma_trans_en #= true
            dut.clockDomain.waitSampling()
            for(i <- 0 until fifo_occupancy){
                dut.io.dma_trans.ready.randomize()
//                dut.io.dma_trans.ready #= true
//                dut.clockDomain.waitActiveEdgeWhere(dut.io.dma_trans.valid.toBoolean)
                dut.clockDomain.waitSampling()
            }

            dut.io.dma_trans_en #= false
            dut.clockDomain.waitSampling()
            dut.io.dma_trans.ready #= true
            dut.clockDomain.waitSampling(40)
            dut.io.dma_trans.ready #= false
            dut.clockDomain.waitSampling(10)
        }
}