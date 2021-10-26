package magiSOC.perips.RTC

import Misc.math._
import spinal.core._
import spinal.lib.bus.misc.BusSlaveFactory

case class RTCConfig(
                        width: Int = 32,
                        RTCClkFreq: HertzNumber = 100 MHz
                    ) {
    def PreDivideAsynchronousWidth: Int = 32
    def PreDivideSynchronousWidth: Int = 32
    val solver_result: (Int, Int) = Factors.clock_solver(RTCClkFreq.toInt)
    require(U(solver_result._1).getWidth <= PreDivideAsynchronousWidth &&
        U(solver_result._2).getWidth <= PreDivideSynchronousWidth,
        "Preset clock value must less than the width of reg")
    def AsyncPresetValue: Int = solver_result._1 - 1
    def SyncPresetValue: Int = solver_result._2 - 1
}


case class PreClockDivider(width: Int) extends Area {
    val PreDivideCounter = Reg(UInt(width bits)) init (0)
    val limit = UInt(width bits)
    val full = limit === PreDivideCounter
    val step = UInt(width bits)
    when(full) {
        PreDivideCounter := 0
    }.otherwise {
        PreDivideCounter := PreDivideCounter + step
    }
}

case class RTC(config: RTCConfig) extends Area {
    /**
     * CFG Registers
     */
    // CONFIG
    val TICK_EN = Bool()
    val TICK_RESET = Bool()
    val PRELOAD_TIMESTAMP = UInt(config.width bits)
    val DIV_LIMIT_ASYNC = UInt(config.PreDivideAsynchronousWidth bits)
    val DIV_LIMIT_SYNC = UInt(config.PreDivideSynchronousWidth bits)
    // Calendar
    val CLOCK_JIFFIES = Reg(UInt(config.width bits)) init(0)
    val INTERNAL_TIMING = Reg(UInt(config.width bits)) init(0)
    val UNIX_TIMESTAMP = Reg(UInt(config.width bits)) init(0)
    // Alarm
    val ALARM_EN = Bool()
    val ALARM_POLARITY = Bool()
    val ALARM_STAMP = UInt(config.width bits)
    // Interrupt
    val RTC_ALARM = Bool()
    /**
     * Prescalers modules and connections
     */
    val clockDividerAsync = PreClockDivider(config.PreDivideAsynchronousWidth)
    val clockDividerSync = PreClockDivider(config.PreDivideSynchronousWidth)
    clockDividerAsync.limit := DIV_LIMIT_ASYNC
    clockDividerAsync.step := 1
    clockDividerSync.limit := DIV_LIMIT_SYNC
    clockDividerSync.step := clockDividerAsync.full.asUInt.resized

    /**
     * Local hardware logic
     */
    when(TICK_EN){
        CLOCK_JIFFIES := CLOCK_JIFFIES + 1
    }.otherwise{
        CLOCK_JIFFIES := 0
    }

    when(clockDividerAsync.full && TICK_EN) {
        INTERNAL_TIMING := INTERNAL_TIMING + 1
    }.elsewhen(TICK_RESET){
        INTERNAL_TIMING := 0
    }

    when(clockDividerSync.full && TICK_EN) {
        UNIX_TIMESTAMP := UNIX_TIMESTAMP + 1
    }.elsewhen(TICK_RESET){
        UNIX_TIMESTAMP := PRELOAD_TIMESTAMP
    }

    when(ALARM_EN) {
        RTC_ALARM := (UNIX_TIMESTAMP >= ALARM_STAMP) ? ALARM_POLARITY | ~ALARM_POLARITY
    }.otherwise {
        RTC_ALARM := ~ALARM_POLARITY
    }

    // Bus interface function module
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt) = new Area {
        busCtrl.driveAndRead(TICK_EN, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "RTC Chronography Enable (1 bits)") init(False)
        busCtrl.driveAndRead(TICK_RESET, address = baseAddress + 0x00, bitOffset = 1,
            documentation = "RTC Unix Timestamp Reset (1 bits)") init(False)
        busCtrl.driveAndRead(ALARM_EN, address = baseAddress + 0x00, bitOffset = 2,
            documentation = "RTC Alarm Interrupt Pin Enable (1 bits)") init(False)
        busCtrl.driveAndRead(ALARM_POLARITY, address = baseAddress + 0x00, bitOffset = 3,
            documentation = "RTC Alarm Interrupt Pin Active Level (1 bits)") init(True)

        busCtrl.driveAndRead(PRELOAD_TIMESTAMP, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "RTC Unix Timestamp Preset Value (32 bits)") init(0)
        busCtrl.driveAndRead(DIV_LIMIT_ASYNC, address = baseAddress + 0x08, bitOffset = 0,
            documentation = "RTC Asynchronous Prescale Clock Upper Limit (32 bits)") init(config.AsyncPresetValue)
        busCtrl.driveAndRead(DIV_LIMIT_SYNC, address = baseAddress + 0x0c, bitOffset = 0,
            documentation = "RTC Synchronous Prescale Clock Upper Limit (32 bits)") init(config.SyncPresetValue)

        busCtrl.read(UNIX_TIMESTAMP, address = baseAddress + 0x10, bitOffset = 0,
            documentation = "RTC Calendar Unix Timestamp Read Only (32 bits)")
        busCtrl.read(INTERNAL_TIMING, address = baseAddress + 0x14, bitOffset = 0,
            documentation = "RTC Asynchronous Clock Timing Counter Read Only (32 bits)")
        busCtrl.read(CLOCK_JIFFIES, address = baseAddress + 0x18, bitOffset = 0,
            documentation = "RTC Clock Ticks/Jiffies since Power up (32 bits)")
        busCtrl.driveAndRead(ALARM_STAMP, address = baseAddress + 0x1c, bitOffset = 0,
            documentation = "RTC Alarm Interrupt Timestamp Value (32 bits)") init(0)
    }

}


