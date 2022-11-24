package magiRF.modules.Modem.DDS

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.common.ClkCrossing.FFSynchronizer

case class DDS_Config(  dataWidth          : Int,
                        phaseWidth         : Int,
                        useRam             : Boolean         = false,
                        frequency          : HertzNumber     = 1 Hz,
                        usePhaseChannel    : Boolean         = true,
                        usePhaseIncProg    : Boolean         = true,
                        usePhaseOffsetProg : Boolean         = true,
                        useSysRef          : Boolean         = false){

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

        val sysref = if(config.useSysRef) in(Bool()) else null

    }
    noIoPrefix()

    val module_en = io.sync_en && io.channel_en

    val phase_cursor = Reg(config.phaseType) init(0)
    if(config.useSysRef){
        when(io.sysref.rise()){
            phase_cursor := 0
        }.elsewhen(module_en && io.data.fire){
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
        }
    }else{
        when(module_en && io.data.fire){
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
        }
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
    io.data.valid := RegNext(module_en) init(False)

    if(config.usePhaseChannel){
        val phase_o_buf = Reg(config.phaseType) init(0)
        io.phase.valid := RegNext(module_en) init(False)
        io.phase.payload := phase_o_buf
        when(module_en){
            phase_o_buf := phase_cursor
        }
    }

    // Bus interface function module
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, currentIndex: Int, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val channel_en = cloneOf(io.channel_en)
        val w_en = if(config.useRam) cloneOf(io.w_en) else null
        val w_addr = if(config.useRam) cloneOf(io.w_addr) else null
        val w_data = if(config.useRam) cloneOf(io.w_data) else null
        val phase_limit = cloneOf(io.phase_limit)
        val phase_offset = if(config.usePhaseOffsetProg) cloneOf(io.phase_offset) else null
        val phase_inc = if(config.usePhaseIncProg) cloneOf(io.phase_inc) else null

        var addr_offset = 0

        busCtrl.driveAndRead(channel_en, address = baseAddress + 0x00, bitOffset = 1,
            documentation = s"DDS${currentIndex} Local Channel enable") init(False)
        if(config.useRam){
            busCtrl.drive(w_en, address = baseAddress + 0x00, bitOffset = 2,
                documentation = s"DDS${currentIndex} Ram Write Enable") init(False)
            println(w_addr.getWidth, busCtrl.busDataWidth)
            for(idx <- 0 until w_addr.getWidth by busCtrl.busDataWidth){
                busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
                    documentation = s"DDS${currentIndex} Ram Address Value Set") init (0)
                addr_offset = addr_offset + busCtrl.addr
            }
            busCtrl.drive(w_addr, address = baseAddress + 0x04, bitOffset = 0,
                documentation = s"DDS${currentIndex} Ram Address Value Set") init(0)
            busCtrl.drive(w_data, address = baseAddress + 0x08, bitOffset = 0,
                documentation = s"DDS${currentIndex} Ram Data Value Set") init(0)
            io.w_en := FFSynchronizer(coreClockDomain, rfClockDomain, w_en)
            io.w_addr := FFSynchronizer(coreClockDomain, rfClockDomain, w_addr)
            io.w_data := FFSynchronizer(coreClockDomain, rfClockDomain, w_data)
        }

        busCtrl.driveAndRead(phase_limit, address = baseAddress + 0x0C, bitOffset = 0,
            documentation = s"DDS${currentIndex} phase max value") init(config.memorySize - 1)

        if(config.usePhaseOffsetProg){
            busCtrl.driveAndRead(phase_offset, address = baseAddress + 0x10, bitOffset = 0,
                documentation = s"DDS${currentIndex} phase offset Value") init(0)
            io.phase_offset := FFSynchronizer(coreClockDomain, rfClockDomain, phase_offset)
        }
        if(config.usePhaseIncProg){
            busCtrl.driveAndRead(phase_inc, address = baseAddress + 0x14, bitOffset = 0,
                documentation = s"DDS${currentIndex} phase increment Step") init(1)
            io.phase_inc := FFSynchronizer(coreClockDomain, rfClockDomain, phase_inc)
        }

        io.channel_en := FFSynchronizer(coreClockDomain, rfClockDomain, channel_en)
        io.phase_limit := FFSynchronizer(coreClockDomain, rfClockDomain, phase_limit)
    }

}


object DDSBench {
    def main(args: Array[String]): Unit = {
        val dds_config = DDS_Config(16, 10, useRam = true)
        SpinalConfig(targetDirectory = "rtl").generateSystemVerilog(new DDS(dds_config)).printPruned()
    }
}

