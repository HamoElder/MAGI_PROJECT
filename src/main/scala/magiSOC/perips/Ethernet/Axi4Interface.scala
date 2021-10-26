package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.Axi4
import spinal.lib.bus.misc.BusSlaveFactory

import scala.math.pow

object ProcessStates extends SpinalEnum {
    val ADDRESS, TRANS_DATA, RESP = newElement()
}

case class Axi4Interface(config: Axi4MacEthConfig) extends Area {
    // Global
    val axi4Slave = Axi4(config.axi4Config)
    val status2PhyPush = Stream(Bits(50 bits))
    val intrIO = if(config.useInterrupt) Bool()  else null
    // Inner Connection (Crossing Clock Domain Port)
    val rxStagingFifoCcPop = Stream(PhyPayload(config.phyConfig))
    val txStagingFifoCcPush = Stream(PhyPayload(config.phyConfig))
    // Stream Fifo
    val txPayloadFifo = StreamFifo(
        dataType = PhyPayload(config.phyConfig),
        depth = config.bufDepth
    )
    val rxPayloadFifo = StreamFifo(
        dataType = PhyPayload(config.phyConfig),
        depth = config.bufDepth
    )
    val rxStatusFifo = StreamFifo(
        dataType = UInt(log2Up(config.bufByteCount) bits),
        depth = config.statusFifoDepth
    )
    // Look-up Table
    val strb2num = Vec(UInt(log2Up(config.bufByteCount) bits), pow(2, config.axi4Config.bytePerWord).toInt)
    for(i <- 0 until pow(2, config.axi4Config.bytePerWord).toInt){
        strb2num(i) := Hamming_Width(i)
    }
    // Config Registers
    val InterruptEnable = Bool()
    val InterruptPolarity = Bool()
    val FifoReset = Bool()

    val TxFifoOccupancy = txPayloadFifo.io.occupancy
    val RxFifoOccupancy = rxPayloadFifo.io.occupancy
    val RxStatusFifoOccupancy = rxStatusFifo.io.occupancy

    val RecvBytesNum = Reg(UInt(log2Up(config.bufByteCount) bits)) init(0)

    val MacAddress = Reg(Bits(48 bits))

    // status2PhyPush
    val rx_full_stall =  (RxFifoOccupancy > config.rxFifoFullThreshold)
    status2PhyPush.valid := True
    status2PhyPush.payload := FifoReset ## rx_full_stall ## MacAddress
    // rxStatus Push
    val recv_bytes_counter = Reg(UInt(log2Up(config.bufByteCount) bits)) init(0)
    val rx_status_fifo_push_valid = Reg(Bool) init(False)
    val rx_status_fifo_push_data = Reg(UInt(log2Up(config.bufByteCount) bits))
    rxStatusFifo.io.push.valid := rx_status_fifo_push_valid
    rxStatusFifo.io.push.payload := rx_status_fifo_push_data
    when(rxPayloadFifo.io.push.fire){
        when(rxPayloadFifo.io.push.last){
            rx_status_fifo_push_valid := True
            rx_status_fifo_push_data := recv_bytes_counter + strb2num(rxPayloadFifo.io.push.strb.asUInt)
            recv_bytes_counter := 0
        }.otherwise{
            recv_bytes_counter := recv_bytes_counter + strb2num(rxPayloadFifo.io.push.strb.asUInt)
        }
    }.otherwise{
        rx_status_fifo_push_valid := False
    }
    // rxStatus Pop
    when(axi4Slave.readRsp.last){
        rxStatusFifo.io.pop.ready := True
    }.otherwise{
        rxStatusFifo.io.pop.ready := False
    }
    RecvBytesNum := rxStatusFifo.io.pop.payload

    // Interrupt Processing
    if(config.useInterrupt) {
        when(rxStatusFifo.io.pop.valid){
            intrIO := InterruptEnable & InterruptPolarity
        }.otherwise{
            intrIO := InterruptEnable & (~InterruptPolarity)
        }
    }

    // States Machine Registers Configs
    val rx_en = Reg(Bool) init(False)
    val tx_en = Reg(Bool) init(False)

    val w_id = Reg(config.axi4Config.idType) init(0)
    val r_id = Reg(config.axi4Config.idType) init(0)
    val ar_len = Reg(config.axi4Config.lenType) init(0)

    val writeCmd_ready = Reg(Bool) init(True)
    val readCmd_ready = Reg(Bool) init(True)
    val writeRsp_valid = Reg(Bool) init(False)


    // Connections
    axi4Slave.writeCmd.ready := writeCmd_ready
    axi4Slave.readCmd.ready := readCmd_ready

    txPayloadFifo.io.push.data := axi4Slave.writeData.data
    txPayloadFifo.io.push.strb := axi4Slave.writeData.strb
    txPayloadFifo.io.push.last := axi4Slave.writeData.last
    txPayloadFifo.io.push.valid := axi4Slave.writeData.valid & tx_en
    axi4Slave.writeData.ready := txPayloadFifo.io.push.ready & tx_en

    axi4Slave.readRsp.valid := rxPayloadFifo.io.pop.valid  & rx_en
    axi4Slave.readRsp.data := rxPayloadFifo.io.pop.data
    rxPayloadFifo.io.pop.ready := axi4Slave.readRsp.ready & rx_en
    axi4Slave.readRsp.resp := Axi4.resp.OKAY
    axi4Slave.readRsp.id := r_id
    axi4Slave.readRsp.last := (ar_len === 0) & axi4Slave.readRsp.fire

    axi4Slave.writeRsp.valid := writeRsp_valid
    axi4Slave.writeRsp.resp := Axi4.resp.OKAY
    axi4Slave.writeRsp.id := w_id

    // FSM
    import ProcessStates._
    val axi4_r_states = Reg(ProcessStates()) init(ADDRESS)
    switch(axi4_r_states){
        is(ADDRESS){
            when(axi4Slave.readCmd.addr === 0x04){
                when(axi4Slave.readCmd.fire){
                    rx_en := True
                    r_id := axi4Slave.readCmd.id
                    readCmd_ready := False
                    ar_len := axi4Slave.readCmd.len
                    axi4_r_states := TRANS_DATA
                }.otherwise{
                    readCmd_ready := True
                }
            }
        }
        is(TRANS_DATA){
            when(axi4Slave.readRsp.last){
                rx_en:= False
                axi4_r_states := RESP
            }

            when(axi4Slave.readRsp.fire){
                ar_len := ar_len - 1
            }
        }
        is(RESP){
            axi4_r_states := ADDRESS
        }
    }

    // FSM
    val axi4_w_states = Reg(ProcessStates()) init(ADDRESS)

    switch(axi4_w_states){
        is(ADDRESS){
            when(axi4Slave.writeCmd.addr === 0x00 & axi4Slave.writeCmd.fire){
                tx_en := True
                w_id := axi4Slave.writeCmd.id
                writeCmd_ready := False
                writeRsp_valid := False
                axi4_w_states := TRANS_DATA
            }
        }
        is(TRANS_DATA){
            when(axi4Slave.writeData.last && axi4Slave.writeData.fire){
                tx_en:= False
                writeRsp_valid := True
                axi4_w_states := RESP
            }
        }
        is(RESP){
            when(axi4Slave.writeRsp.fire){
                writeCmd_ready := True
                writeRsp_valid := False
                axi4_w_states := ADDRESS
            }
        }
    }

    // Reset
    rxPayloadFifo.io.flush := FifoReset
    txPayloadFifo.io.flush  := FifoReset
    rxStatusFifo.io.flush := FifoReset

    rxPayloadFifo.io.push << rxStagingFifoCcPop

    val txPayload2StagingSink = Reg(Bool) init(False)
    when(axi4Slave.writeData.last){
        txPayload2StagingSink := True
    }.elsewhen(txPayloadFifo.io.occupancy === 0){
        txPayload2StagingSink := False
    }

    txStagingFifoCcPush.payload := txPayloadFifo.io.pop.payload
    txStagingFifoCcPush.valid := txPayloadFifo.io.pop.valid & txPayload2StagingSink
    txPayloadFifo.io.pop.ready := txStagingFifoCcPush.ready & txPayload2StagingSink

    // Bus interface function module
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt) = new Area {
        // inst
        busCtrl.read(TxFifoOccupancy, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Ethernet TxFifo Occupancy (32 bits)")
        busCtrl.read(RxFifoOccupancy, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Ethernet RxFifo Occupancy (32 bits)")
        busCtrl.read(RecvBytesNum, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Ethernet Received Bytes Num (32 bits)")
        busCtrl.read(RxStatusFifoOccupancy, address = baseAddress + 0x0c, bitOffset = 0,
            documentation = "Ethernet Rx Status Fifo Occupancy (32 bits)")
        //        busCtrl.driveAndRead(RecvThreshold, address = baseAddress + 0x10, bitOffset = 0,
        //            documentation = "Threshold of Ethernet Receive Channel and Interrupt Devices(32 bits)") init(1)
        busCtrl.driveAndRead(InterruptEnable, address = baseAddress + 0x14, bitOffset = 0,
            documentation = "Ethernet GPIO Interrupt Output Enable (1 bit)") init(True)
        busCtrl.driveAndRead(InterruptPolarity, address = baseAddress + 0x14, bitOffset=1,
            documentation = "Ethernet GPIO Interrupt Output Polarity (1 bit)") init(True)
        busCtrl.driveAndRead(FifoReset, address = baseAddress + 0x14, bitOffset = 2,
            documentation = "Ethernet Payload Fifo Clean up and Hold -- High Enable (1 bits)") init(False)
        if(config.useInterrupt){
            busCtrl.read(intrIO, address = baseAddress + 0x14, bitOffset = 3,
                documentation = "Ethernet Payload Fifo Recv Interrupt Status (1 bits)")
        }
        busCtrl.write(MacAddress(31 downto 0), address = baseAddress + 0x18, bitOffset = 0,
            documentation = "Ethernet Local Mac Address Lower Bits (32 bits)")
        busCtrl.write(MacAddress(47 downto 32), address = baseAddress + 0x1C, bitOffset = 0,
            documentation = "Ethernet Local Mac Address Higher Bits (16 bits)")
    }

    def Hamming_Width(sequence : Int): Int ={
        var i = sequence
        i = (i & 0x55555555) + ((i >> 1) & 0x55555555)
        i = (i & 0x33333333) + ((i >> 2) & 0x33333333)
        i = (i & 0x0F0F0F0F) + ((i >> 4) & 0x0F0F0F0F)
        i = (i * (0x01010101) >> 24)
        i
    }
}
