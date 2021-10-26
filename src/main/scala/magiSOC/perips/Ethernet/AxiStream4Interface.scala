package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiStream4.AxiStream4

import scala.math.pow


case class AxiStream4Interface(config: AxiStream4MacEthConfig) extends Area{
    // Global
    val axiStream4Tx = AxiStream4(config.axiStream4Config)
    val axiStream4Rx = AxiStream4(config.axiStream4Config)

    val status2PhyPush = Stream(Bits(50 bits))
    val intrIO = if(config.useInterrupt) Bool() else null
    // Inner Connection (Crossing CLock Domain Port)
    val rxStagingFifoCcPop = Stream(PhyPayload(config.phyConfig))
    val txStagingFifoCcPush = Stream(PhyPayload(config.phyConfig))
    // Stream Fifo
    val txPayloadFifo = StreamFifo(
        dataType = PhyPayload(config.phyConfig),
        depth = config.sendBufDepth
    )
    val rxPayloadFifo = StreamFifo(
        dataType = PhyPayload(config.phyConfig),
        depth = config.recvBufDepth
    )

    val rxStatusFifo = StreamFifo(
        dataType = UInt(log2Up(config.perPkgNum) bits),
        depth = config.statusFifoDepth
    )
    // Look-up Table
    val strb2num = Vec(UInt(log2Up(config.perPkgNum) bits), pow(2, config.axiStream4Config.bytePerWord).toInt)
    for(i <- 0 until pow(2, config.axiStream4Config.bytePerWord).toInt){
        strb2num(i) := Hamming_Width(i)
    }
    // Config Registers
    val InterruptEnable = Bool()
    val InterruptPolarity = Bool()
    val FifoReset = Bool()

    val TxFifoOccupancy = txPayloadFifo.io.occupancy
    val RxFifoOccupancy = rxPayloadFifo.io.occupancy
    val RxStatusFifoOccupancy = rxStatusFifo.io.occupancy

    val RecvBytesNum = Reg(UInt(log2Up(config.perPkgNum) bits)) init(0)

    val MacAddress = Reg(Bits(48 bits))

    // status2PhyPush
    val rx_full_stall =  (RxFifoOccupancy > config.rxFifoFullThreshold)
    status2PhyPush.valid := True
    status2PhyPush.payload := FifoReset ## rx_full_stall ## MacAddress
    // rxStatus Push
    val recv_bytes_counter = Reg(UInt(log2Up(config.perPkgNum) bits)) init(0)
    val rx_status_fifo_push_valid = Reg(Bool) init(False)
    val rx_status_fifo_push_data = Reg(UInt(log2Up(config.perPkgNum) bits))

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
    when(axiStream4Rx.transmitData.last){
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

    // Reset
    rxPayloadFifo.io.flush := FifoReset
    txPayloadFifo.io.flush  := FifoReset
    rxStatusFifo.io.flush := FifoReset
    // axis to module RX Valve
    axiStream4Rx.transmitData.valid := rxPayloadFifo.io.pop.valid
    rxPayloadFifo.io.pop.ready := axiStream4Rx.transmitData.ready
    axiStream4Rx.transmitData.data := rxPayloadFifo.io.pop.data
    axiStream4Rx.transmitData.last := rxPayloadFifo.io.pop.last & axiStream4Rx.transmitData.fire
    if(config.axiStream4Config.useKeep){
        axiStream4Rx.transmitData.keep_ := rxPayloadFifo.io.pop.strb
    }

    // axis to module TX Valve
    txPayloadFifo.io.push.valid := axiStream4Tx.transmitData.valid
    axiStream4Tx.transmitData.ready := txPayloadFifo.io.push.ready
    txPayloadFifo.io.push.data := axiStream4Tx.transmitData.data
    txPayloadFifo.io.push.last := axiStream4Tx.transmitData.last
    if(config.axiStream4Config.useKeep){
        txPayloadFifo.io.push.strb := axiStream4Tx.transmitData.keep_
    }

    // module to phy TX Valve
    val txPayload2StagingSink = Reg(Bool) init(False)
    when(axiStream4Tx.transmitData.last){
        txPayload2StagingSink := True
    }.elsewhen(txPayloadFifo.io.occupancy === 0){
        txPayload2StagingSink := False
    }
    txStagingFifoCcPush.payload := txPayloadFifo.io.pop.payload
    txStagingFifoCcPush.valid := txPayloadFifo.io.pop.valid & txPayload2StagingSink
    txPayloadFifo.io.pop.ready := txStagingFifoCcPush.ready & txPayload2StagingSink
//    txStagingFifoCcPush << txPayloadFifo.io.pop
    // module to phy RX Valve
    rxPayloadFifo.io.push << rxStagingFifoCcPop


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
        busCtrl.driveAndRead(InterruptPolarity, address = baseAddress + 0x14, bitOffset = 1,
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
