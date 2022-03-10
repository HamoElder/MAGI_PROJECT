package magiRF.modules.Modem.Demodulator.extensions

import magiRF.modules.Modem.Misc.modUnitInterface
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.common.ClkCrossing.ClkCrossing

case class lookUpDemodConfig(
                            unitDataWidth      : Int,
                            modDataWidth       : Int,
                            cfgDataWidth       : Int = 32
                            ){
    def unitDataType: UInt = UInt(unitDataWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)

    def iqDataWidth: Int = (unitDataWidth >> 1)

    def compTableSize: Int = (1 << iqDataWidth) - 1
    def compTableType: SInt = SInt(modDataWidth bits)

    def codeTableSize: Int = (1 << iqDataWidth)
    def codeTableType: UInt = UInt(iqDataWidth bits)

}


case class lookUpDemod(config: lookUpDemodConfig) extends Component {

    val io = new Bundle{
        val w_en = in Bool()
        val w_addr = in(UInt(log2Up(config.codeTableSize) bits))
        val w_data = in(Bits(config.cfgDataWidth bits))
        val w_sel = in(Bits(2 bits))

        val iq_shift = in(UInt(log2Up(config.iqDataWidth) bits))

        val data_flow = master(modUnitInterface(config.unitDataType, config.modDataType))
    }
    noIoPrefix()

    val demod_data_i: SInt = RegNext(io.data_flow.mod_iq.cha_i) init(0)
    val demod_data_q: SInt =  RegNext(io.data_flow.mod_iq.cha_q) init(0)
    val demod_valid_iq: Bool = RegNext(io.data_flow.mod_iq.valid && (~io.w_en)) init(False)
    val demod_last_iq: Bool = RegNext(io.data_flow.mod_iq.last) init(False)

    val comp_mem_i: Vec[SInt] = Vec(Reg(config.compTableType), config.compTableSize)
    val comp_mem_q: Vec[SInt] = Vec(Reg(config.compTableType), config.compTableSize)

    val code_mem_i: Vec[UInt] = Vec(Reg(config.codeTableType), config.codeTableSize)
    val code_mem_q: Vec[UInt] = Vec(Reg(config.codeTableType), config.codeTableSize)

    when(io.w_en){
        switch(io.w_sel){
            is(0){
                comp_mem_i(io.w_addr.resized) := io.w_data.asSInt.resized
            }
            is(1){
                code_mem_i(io.w_addr.resized) := io.w_data.asUInt.resized
            }
            is(2){
                comp_mem_q(io.w_addr.resized) := io.w_data.asSInt.resized
            }
            is(3){
                code_mem_q(io.w_addr.resized) := io.w_data.asUInt.resized
            }
        }
    }

    val comp_cmp_i: Bits = Bits(config.compTableSize bits)
    val comp_cmp_q: Bits = Bits(config.compTableSize bits)

    for(idx <- 0 until config.compTableSize){
        comp_cmp_i(idx) := (demod_data_i > comp_mem_i(idx))
        comp_cmp_q(idx) := (demod_data_q > comp_mem_q(idx))
    }


    val compTable_i = RegNext(comp_cmp_i) init(0)
    val compTable_q = RegNext(comp_cmp_q) init(0)

    val demod_valid = RegNext(demod_valid_iq) init(False)
    val demod_last = RegNext(demod_last_iq) init(False)
    val unit_data_i = Reg(config.codeTableType)
    val unit_data_q = Reg(config.codeTableType)
    val unit_valid = Reg(Bool) init(False)
    val unit_last = Reg(Bool()) init(False)

    when(demod_valid){
        unit_valid := True
        unit_last := demod_last
        switch(compTable_i){
            for(idx <- 0 until config.codeTableSize){
                is((1 << idx) - 1){
                    unit_data_i := code_mem_i(idx)
                }
            }
        }

        switch(compTable_q){
            for(idx <- 0 until config.codeTableSize){
                is((1 << idx) - 1){
                    unit_data_q := code_mem_q(idx)
                }
            }
        }
    }.otherwise{
        unit_valid := False
        unit_last := False
        unit_data_i := 0
        unit_data_q := 0
    }

    io.data_flow.unit_data.fragment := ((unit_data_i << io.iq_shift) | unit_data_q.resized).resized
    io.data_flow.unit_data.valid := unit_valid
    io.data_flow.unit_data.last := unit_last
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val w_en = cloneOf(io.w_en)
        val w_sel = cloneOf(io.w_sel)
        val iq_shift = cloneOf(io.iq_shift)
        val w_addr = cloneOf(io.w_addr)
        val w_data = cloneOf(io.w_data)

        busCtrl.driveAndRead(w_en, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Enable.") init(False)
        busCtrl.driveAndRead(w_sel, address = baseAddress + 0x00, bitOffset = 8,
            documentation = "Look Up Demodulator Ram Write Channels Select.") init(0)
        busCtrl.driveAndRead(iq_shift, address = baseAddress + 0x00, bitOffset = 16,
            documentation = "Look Up Demodulator Ram IQ Shift.") init(0)
        busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Address Set.") init(0)
        busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Data Set.") init(0)

        io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
        io.w_sel := ClkCrossing(coreClockDomain, rfClockDomain, w_sel)
        io.iq_shift := ClkCrossing(coreClockDomain, rfClockDomain, iq_shift)
        io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
        io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
    }
}


object lookUpDemodBench{
    def main(args: Array[String]): Unit ={
        val lookup_demod_bench = lookUpDemodConfig(8, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new lookUpDemod(lookup_demod_bench)).printPruned().printUnused()
    }
}
