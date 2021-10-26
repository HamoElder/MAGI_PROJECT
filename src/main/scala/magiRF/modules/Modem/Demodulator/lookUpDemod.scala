package magiRF.modules.Modem.Demodulator

import magiRF.modules.Modem.Misc.{demodUnitConfig, modUnitInterface}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiLite.AxiLite4

case class LookUpDemodConfig(
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


case class lookUpDemod(config: LookUpDemodConfig) extends Component {

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

    val unit_data_i = Reg(config.codeTableType)
    val unit_data_q = Reg(config.codeTableType)
    val unit_valid = Reg(Bool) init(False)

    when(demod_valid){
        unit_valid := True
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
        unit_data_i := 0
        unit_data_q := 0
    }

    io.data_flow.unit_data.payload := ((unit_data_i << io.iq_shift) | unit_data_q.resized).resized
    io.data_flow.unit_data.valid := unit_valid

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt): Area = new Area {
        busCtrl.driveAndRead(io.w_en, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Enable.") init(False)
        busCtrl.driveAndRead(io.w_sel, address = baseAddress + 0x00, bitOffset = 8,
            documentation = "Look Up Demodulator Ram Write Channels Select.") init(0)
        busCtrl.driveAndRead(io.iq_shift, address = baseAddress + 0x00, bitOffset = 16,
            documentation = "Look Up Demodulator Ram IQ Shift.") init(0)
        busCtrl.drive(io.w_addr, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Address Set.") init(0)
        busCtrl.drive(io.w_data, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Look Up Demodulator Ram Write Data Set.") init(0)
    }
}


object lookUpDemodBench{
    def main(args: Array[String]): Unit ={
        val lookup_demod_bench = LookUpDemodConfig(8, 16)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new lookUpDemod(lookup_demod_bench)).printPruned().printUnused()
    }
}

object lookUpDemodSimpApp extends App{
    import spinal.core.sim._

    val lookup_demod_bench = LookUpDemodConfig(8, 16)
    SimConfig.withWave.doSim(new lookUpDemod(lookup_demod_bench)){ dut =>

        dut.clockDomain.forkStimulus(5)
        dut.io.data_flow.mod_iq.valid #= false

    }
}