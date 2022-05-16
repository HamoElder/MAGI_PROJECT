package magiRF.modules.Modem.DDS

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.common.ClkCrossing.ClkCrossing

case class DDS_Config(  dataWidth          : Int,
                        phaseWidth         : Int,
                        useRam             : Boolean         = false,
                        frequency          : HertzNumber     = 1 Hz,
                        usePhaseChannel    : Boolean         = true,
                        usePhaseIncProg    : Boolean         = true,
                        usePhaseOffsetProg : Boolean         = true){

    def dataType: SInt = SInt(dataWidth bits)
    def phaseType: UInt = UInt(phaseWidth bits)

    def peakValue: Int = (1<<(dataWidth - 1)) - 2
    def dataInitBias = 0
    def memorySize: Int = (1 << phaseWidth)

    def romTable: Seq[SInt] = for(idx <- 0 until memorySize)yield{
        val sin = Math.sin(2.0*Math.PI * frequency.toInt * idx / memorySize)
        val scalaSin = peakValue*sin + dataInitBias
        S(scalaSin.toInt, dataWidth bits)
    }
}

case class DDS(config: DDS_Config) extends Component {
    val io = new Bundle{
        val data = master(Stream(config.dataType))
        val phase = if(config.usePhaseChannel) master(Flow(config.phaseType)) else null
        val channel_en = in Bool()
        val sync_en = in Bool()

        val w_en = if(config.useRam) in Bool() else null
        val w_addr = if(config.useRam) in(config.phaseType) else null
        val w_data = if(config.useRam) in(config.dataType) else null

        val phase_limit = in(config.phaseType)
        val phase_offset = if(config.usePhaseOffsetProg) in(config.phaseType) else null
        val phase_inc = if(config.usePhaseIncProg) in(config.phaseType) else null

    }
    noIoPrefix()

    val module_en = io.sync_en && io.channel_en

    val phase_cursor = Reg(config.phaseType) init(0)
    val valid_buf = Reg(Bool) init(False)

    when(module_en && io.data.ready){
        when(phase_cursor >= io.phase_limit){
            phase_cursor := 0
        }.otherwise{
            if(config.usePhaseIncProg && config.usePhaseOffsetProg){
                phase_cursor := phase_cursor + io.phase_inc + io.phase_offset
            }else if(config.usePhaseIncProg){
                phase_cursor := phase_cursor + io.phase_inc
            }else{
                phase_cursor := phase_cursor + 1
            }
        }
        valid_buf := True
    }.otherwise{
        valid_buf := False
    }

    val mem = Mem(config.dataType, initialContent = config.romTable).addAttribute("ram_style", "block")

    if(config.useRam){
        mem.write(
            enable = io.w_en,
            address = io.w_addr,
            data = io.w_data
        )
    }

    io.data.payload := mem.readSync(phase_cursor)
    io.data.valid := RegNext(valid_buf) init(False)

    if(config.usePhaseChannel){
        val phase_o_buf = Reg(config.phaseType) init(0)
        io.phase.valid := RegNext(valid_buf) init(False)
        io.phase.payload := phase_o_buf
        when(module_en){
            phase_o_buf := phase_cursor
        }
    }

    // Bus interface function module
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val channel_en = cloneOf(io.channel_en)
        val w_en = if(config.useRam) cloneOf(io.w_en) else null
        val w_addr = if(config.useRam) cloneOf(io.w_addr) else null
        val w_data = if(config.useRam) cloneOf(io.w_data) else null
        val phase_limit = cloneOf(io.phase_limit)
        val phase_offset = if(config.usePhaseOffsetProg) cloneOf(io.phase_offset) else null
        val phase_inc = if(config.usePhaseIncProg) cloneOf(io.phase_inc) else null

        busCtrl.driveAndRead(channel_en, address = baseAddress + 0x00, bitOffset = 1,
            documentation = "DDS Local Channel enable") init(False)
        if(config.useRam){
            busCtrl.drive(w_en, address = baseAddress + 0x00, bitOffset = 2,
                documentation = "DDS Ram Write Enable") init(False)
            busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
                documentation = "DDS Ram Address Value Set") init(0)
            busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
                documentation = "DDS Ram Data Value Set") init(0)
            io.w_en := ClkCrossing(coreClockDomain, rfClockDomain, w_en)
            io.w_addr := ClkCrossing(coreClockDomain, rfClockDomain, w_addr)
            io.w_data := ClkCrossing(coreClockDomain, rfClockDomain, w_data)
        }

        busCtrl.driveAndRead(phase_limit, address = baseAddress + 0x0C, bitOffset = 0,
            documentation = "DDS phase max value") init(config.memorySize - 1)

        if(config.usePhaseOffsetProg){
            busCtrl.driveAndRead(phase_offset, address = baseAddress + 0x10, bitOffset = 0,
                documentation = "DDS phase offset Value") init(0)
            io.phase_offset := ClkCrossing(coreClockDomain, rfClockDomain, phase_offset)
        }
        if(config.usePhaseIncProg){
            busCtrl.driveAndRead(phase_inc, address = baseAddress + 0x14, bitOffset = 0,
                documentation = "DDS phase increment Step") init(1)
            io.phase_inc := ClkCrossing(coreClockDomain, rfClockDomain, phase_inc)
        }

        io.channel_en := ClkCrossing(coreClockDomain, rfClockDomain, channel_en)
        io.phase_limit := ClkCrossing(coreClockDomain, rfClockDomain, phase_limit)
    }

}


object DDSBench {
    def main(args: Array[String]): Unit = {
        val dds_config = DDS_Config(16, 10, useRam = true)
        SpinalConfig(targetDirectory = "rtl").generateSystemVerilog(new DDS(dds_config)).printPruned()
    }
}

