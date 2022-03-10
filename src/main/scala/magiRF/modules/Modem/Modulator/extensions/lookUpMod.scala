package magiRF.modules.Modem.Modulator.extensions

import magiRF.modules.Modem.Misc.modUnitInterface
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.common.ClkCrossing.ClkCrossing

case class lookUpModConfig(
                              modDataWidth       : Int,
                              iqWidth            : Int = 8,
                              tWidth             : Int = 0,
                              genFunc            : (Int, Int) => Seq[SInt] = null
                          ){
//    require((iqWidth + tWidth) % 2 == 0, "iqWidth add tWidth must be the times of 2.")
    def unitDataType: UInt = UInt(iqWidth + tWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)

    def memorySize: Int = (1 << (iqWidth + tWidth))
    def addrType: UInt = UInt(iqWidth + tWidth bits)
    def memoryType: SInt = SInt(2  * modDataWidth bits)
    println("Ram size: " ,memorySize)

    def useTPlay: Boolean = tWidth != 0
    def cntDataType: UInt = UInt(tWidth bits)
    val codeTableIQ: Seq[SInt] = if(genFunc == null) null else genFunc(modDataWidth, memorySize)
}

case class lookUpMod(config: lookUpModConfig) extends Component {
    val io = new Bundle{
        val w_en = if(config.codeTableIQ == null) in(Bool()) else null
        val w_addr = if(config.codeTableIQ == null) in(config.addrType) else null
        val w_data = if(config.codeTableIQ == null) in(config.memoryType) else null
        val cnt_limit = if(config.useTPlay) in(config.cntDataType) else null

        val data_in_ready = if(config.useTPlay) out(Bool()) else null
        val data_flow = slave(modUnitInterface(config.unitDataType, config.modDataType))
    }

    noIoPrefix()

    val code_map = if(config.codeTableIQ == null) Mem(config.memoryType, wordCount = config.memorySize) else Mem(config.memoryType, initialContent = config.codeTableIQ)

    if(config.codeTableIQ == null){
        code_map.write(
            enable = io.w_en,
            address = io.w_addr,
            data = io.w_data
        )
    }

    val unit_data = RegNext(io.data_flow.unit_data.payload) init(0)
    val unit_valid = RegNext(io.data_flow.unit_data.valid) init(False)
    val unit_last = RegNext(io.data_flow.unit_data.last) init(False)
    if(config.useTPlay){
        val t_cnt = Reg(config.cntDataType) init(0)
        val data_ready = Reg(Bool()) init(True)
        when(io.data_flow.unit_data.valid && io.data_in_ready){
            data_ready := False
            t_cnt := t_cnt + 1
        }.elsewhen(t_cnt =/= 0){
            t_cnt := (t_cnt < io.cnt_limit) ? (t_cnt + 1) | U(0)
        }
        io.data_in_ready := t_cnt === 0

        val iq_mod_div = code_map.readSync(
            enable  = ~io.w_en,
            address = (unit_data @@ t_cnt).resized
        ).subdivideIn(2 slices)
        when((unit_valid || t_cnt =/= 0) && ~io.w_en){
            io.data_flow.mod_iq.cha_i := iq_mod_div(1).resized
            io.data_flow.mod_iq.cha_q := iq_mod_div(0).resized
            io.data_flow.mod_iq.valid := True
            io.data_flow.mod_iq.last := unit_last
        }.otherwise{
            io.data_flow.mod_iq.cha_i := 0
            io.data_flow.mod_iq.cha_q := 0
            io.data_flow.mod_iq.valid := False
            io.data_flow.mod_iq.last := False
        }
    }else{
        val iq_mod_div = code_map.readSync(
            enable  = ~io.w_en,
            address = unit_data
        ).subdivideIn(2 slices)

        when(unit_valid && ~io.w_en){
            io.data_flow.mod_iq.cha_i := iq_mod_div(1).resized
            io.data_flow.mod_iq.cha_q := iq_mod_div(0).resized
            io.data_flow.mod_iq.valid := True
            io.data_flow.mod_iq.last := unit_last
        }.otherwise{
            io.data_flow.mod_iq.cha_i := 0
            io.data_flow.mod_iq.cha_q := 0
            io.data_flow.mod_iq.valid := False
            io.data_flow.mod_iq.last := False
        }
    }

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val w_en = cloneOf(io.w_en)
        val w_addr = cloneOf(io.w_addr)
        val w_data = cloneOf(io.w_data)


        busCtrl.drive(w_en, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Enable.") init(False)
        busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Address Set.") init(0)
        busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Data Set.") init(0)
        if(config.useTPlay){
            val cnt_limit = cloneOf(io.cnt_limit)
            busCtrl.drive(cnt_limit, address = baseAddress + 0x0C, bitOffset = 0,
                documentation = "Look Up Modulator Play Mode T Limit.") init(0)
            io.cnt_limit := ClkCrossing(coreClockDomain, rfClockDomain, cnt_limit)
        }
        io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
        io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
        io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
    }
}

object lookUpModBench{
    def main(args: Array[String]): Unit = {
        val lookUpMod_config = lookUpModConfig(16, 6, 0)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new lookUpMod(lookUpMod_config)).printPruned()
    }
}
