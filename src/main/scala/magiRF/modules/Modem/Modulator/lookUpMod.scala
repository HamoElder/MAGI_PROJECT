package magiRF.modules.Modem.Modulator

import magiRF.modules.Modem.Misc.modUnitInterface
import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config}

case class LookUpModConfig(
                              modDataWidth       : Int,
                              iqWidth            : Int = 8,
                              tWidth             : Int = 3,
                              genFunc            : (Int, Int) => Seq[SInt] = null
                          ){

    def unitDataType: UInt = UInt(iqWidth + tWidth bits)
    def modDataType: SInt = SInt(modDataWidth bits)

    def memorySize: Int = (1 << (iqWidth + tWidth))
    def addrType: UInt = UInt(iqWidth + tWidth bits)
    def memoryType: SInt = SInt(2  * modDataWidth bits)
    println("Ram size: " ,memorySize)

    var codeTableIQ: Seq[SInt] = if(genFunc == null) null else genFunc(modDataWidth, memorySize)
}

case class LookUpMod(config: LookUpModConfig) extends Component {
    val io = new Bundle{
        val w_en = if(config.codeTableIQ == null) in(Bool()) else null
        val w_addr = if(config.codeTableIQ == null) in(config.addrType) else null
        val w_data = if(config.codeTableIQ == null) in(config.memoryType) else null

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

    val iq_mod_div = code_map.readSync(
        enable  = ~io.w_en,
        address = unit_data.resized
    ).subdivideIn(2 slices)

    when(unit_valid && ~io.w_en){
        io.data_flow.mod_iq.cha_i := iq_mod_div(1).resized
        io.data_flow.mod_iq.cha_q := iq_mod_div(0).resized
        io.data_flow.mod_iq.valid := True
    }.otherwise{
        io.data_flow.mod_iq.cha_i := 0
        io.data_flow.mod_iq.cha_q := 0
        io.data_flow.mod_iq.valid := False
    }

    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt): Area = new Area {
        busCtrl.drive(io.w_en, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Enable.") init(False)
        busCtrl.drive(io.w_addr, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Address Set.") init(0)
        busCtrl.drive(io.w_data, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "Look Up Modulator Ram Write Data Set.") init(0)
    }
}

object LookUpModBench{
    def main(args: Array[String]) {
        val lookUpMod_config = LookUpModConfig(16, 6, 3)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new LookUpMod(lookUpMod_config)).printPruned()
    }
}
