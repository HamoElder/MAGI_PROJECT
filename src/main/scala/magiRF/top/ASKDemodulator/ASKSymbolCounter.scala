package magiRF.top.ASKDemodulator

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.common.ClkCrossing.FFSynchronizer

case class ASKSymbolCounter(rawDataWidth: Int = 40) extends Component {
    val io = new Bundle{
        val raw_data = slave(Flow(SInt(rawDataWidth bits)))
        val pos_threshold = in(SInt(rawDataWidth bits))
        val neg_threshold = in(SInt(rawDataWidth bits))
        val cnt_limit = in(UInt(16 bits))
        val symbol_cnt = out(UInt(16 bits))
    }
    noIoPrefix()
    val raw_valid = RegNext(io.raw_data.valid) init(False)
    val raw_data = RegNext(io.raw_data.payload)

    val cnt = Reg(UInt(16 bits)) init(0)
    val symbol_counter = Reg(UInt(16 bits)) init(0)
    val symbol_counter_buffer = Reg(UInt(16 bits)) init(0)
    // Demodulator
    val symbol = Reg(Bool()) init(False)
    when(raw_valid){
        when(raw_data > io.pos_threshold){
            symbol := True
        }.elsewhen(raw_data < io.neg_threshold){
            symbol := False
        }
        cnt := (cnt === io.cnt_limit)? U(0) | (cnt + 1)
        when(cnt === io.cnt_limit){
            symbol_counter_buffer := symbol_counter
            symbol_counter := 0
        }.elsewhen(symbol.rise()){
            symbol_counter := symbol_counter + 1
        }
    }
    io.symbol_cnt := symbol_counter_buffer

    // Bus interface function module
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val pos_threshold = cloneOf(io.pos_threshold)
        val neg_threshold = cloneOf(io.neg_threshold)
        val cnt_limit = cloneOf(io.cnt_limit)

        busCtrl.driveAndRead(pos_threshold, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "ASK Symbol Positive Threshold.") init(0)
        busCtrl.driveAndRead(neg_threshold, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "ASK Symbol Negative Threshold.") init(0)
        busCtrl.driveAndRead(cnt_limit, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "ASK Symbol Counter Limit.") init(0)
        val symbol_cnt = FFSynchronizer(rfClockDomain, coreClockDomain, io.symbol_cnt)
        busCtrl.read(symbol_cnt, address = baseAddress + 0x0C, bitOffset = 0,
            documentation = "ASK Symbol Symbol Counter.")
        io.pos_threshold := FFSynchronizer(coreClockDomain, rfClockDomain, pos_threshold)
        io.neg_threshold := FFSynchronizer(coreClockDomain, rfClockDomain, neg_threshold)
        io.cnt_limit := FFSynchronizer(coreClockDomain, rfClockDomain, cnt_limit)
    }
}


//object ASKDemodulatorBench{
//    def main(args: Array[String]): Unit ={
//        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
//            targetDirectory = "rtl/ASKDemodulator").generateSystemVerilog(new ASKDemodulator(8, 32)).printUnused()
//    }
//}