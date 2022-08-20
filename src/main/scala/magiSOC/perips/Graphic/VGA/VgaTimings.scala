package magiSOC.perips.Graphic.VGA

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.common.ClkCrossing.FFSynchronizer

case class VgaTimingsHV(timingsWidth: Int) extends Bundle {
    val syncStart = UInt(timingsWidth bit)
    val syncEnd = UInt(timingsWidth bit)
    val colorStart = UInt(timingsWidth bit)
    val colorEnd = UInt(timingsWidth bit)
    val polarity = Bool()
}

case class VgaTimings(timingsWidth: Int) extends Bundle {
    val h = VgaTimingsHV(timingsWidth)
    val v = VgaTimingsHV(timingsWidth)

    def setAs_h640_v480_r60: Unit = {
        h.syncStart := 95
        h.syncEnd := 799
        h.colorStart := 143
        h.colorEnd := 783
        v.syncStart := 1
        v.syncEnd := 524
        v.colorStart := 34
        v.colorEnd := 514
        h.polarity := False
        v.polarity := False
    }
    def setAs_h64_v64_r60: Unit = {
        h.syncStart := 96 - 1
        h.syncEnd := 800 - 1
        h.colorStart := 96 + 16 - 1 + 288
        h.colorEnd := 800 - 48 - 1 - 288
        v.syncStart := 2 - 1
        v.syncEnd := 525 - 1
        v.colorStart := 2 + 10 - 1 + 208
        v.colorEnd := 525 - 33 - 1 - 208
        h.polarity := False
        v.polarity := False
    }

    def setAs(hPixels : Int,
              hSync : Int,
              hFront : Int,
              hBack : Int,
              hPolarity : Boolean,
              vPixels : Int,
              vSync : Int,
              vFront : Int,
              vBack : Int,
              vPolarity : Boolean): Unit = {
        h.syncStart := hSync - 1
        h.colorStart := hSync + hBack - 1
        h.colorEnd := hSync + hBack + hPixels - 1
        h.syncEnd := hSync + hBack + hPixels + hFront - 1
        v.syncStart := vSync - 1
        v.colorStart := vSync + vBack - 1
        v.colorEnd := vSync + vBack + vPixels - 1
        v.syncEnd := vSync + vBack + vPixels + vFront - 1
        h.polarity := Bool(hPolarity)
        v.polarity := Bool(vPolarity)
    }


    def setAs_h1920_v1080_r60: Unit = setAs(
        hPixels    = 1920,
        hSync      = 44,
        hFront     = 88,
        hBack      = 148,
        hPolarity  = true,
        vPixels    = 1080,
        vSync      = 5,
        vFront     = 4,
        vBack      = 36,
        vPolarity  = true
    )

    def setAs_h1280_v1024_r60: Unit = setAs(
        hPixels    = 1280,
        hSync      = 112,
        hFront     = 48,
        hBack      = 248,
        hPolarity  = true,
        vPixels    = 1024,
        vSync      = 3,
        vFront     = 1,
        vBack      = 38,
        vPolarity  = true
    )

    def setAs_h800_v600_r60: Unit = setAs(
        hPixels    = 800,
        hSync      = 128,
        hFront     = 40,
        hBack      = 88,
        hPolarity  = true,
        vPixels    = 600,
        vSync      = 4,
        vFront     = 1,
        vBack      = 23,
        vPolarity  = true
    )


    def driveFrom(busCtrl : BusSlaveFactory, baseAddress : BigInt, coreClockDomain: ClockDomain, vgaClockDomain: ClockDomain): Area = new Area {
        require(busCtrl.busDataWidth == 32)
        val h_syncStart = cloneOf(h.syncStart)
        val h_syncEnd = cloneOf(h.syncEnd)
        val h_colorStart = cloneOf(h.colorStart)
        val h_colorEnd = cloneOf(h.colorEnd)

        val v_syncStart = cloneOf(v.syncStart)
        val v_syncEnd = cloneOf(v.syncEnd)
        val v_colorStart = cloneOf(v.colorStart)
        val v_colorEnd = cloneOf(v.colorEnd)

        val h_polarity = cloneOf(h.polarity)
        val v_polarity = cloneOf(v.polarity)

        busCtrl.drive(h_syncStart  ,baseAddress + 0x00, bitOffset = 0, documentation = s"VGA Timing Horizontal Sync Start Setting.(${h_syncStart.getBitsWidth} bits)")
        busCtrl.drive(h_syncEnd    ,baseAddress + 0x04, bitOffset = 0, documentation = s"VGA Timing Horizontal Sync End Setting.(${h_syncEnd.getBitsWidth} bits)")
        busCtrl.drive(h_colorStart ,baseAddress + 0x08, bitOffset = 0, documentation = s"VGA Timing Horizontal Color Start Setting.(${h_colorStart.getBitsWidth} bits)")
        busCtrl.drive(h_colorEnd   ,baseAddress + 0x0C, bitOffset = 0, documentation = s"VGA Timing Horizontal Color End Setting.(${h_colorEnd.getBitsWidth} bits)")
        busCtrl.drive(v_syncStart  ,baseAddress + 0x10, bitOffset = 0, documentation = s"VGA Timing Vertical Sync Start Setting.(${v_syncStart.getBitsWidth} bits)")
        busCtrl.drive(v_syncEnd    ,baseAddress + 0x14, bitOffset = 0, documentation = s"VGA Timing Vertical Sync End Setting.(${v_syncEnd.getBitsWidth} bits)")
        busCtrl.drive(v_colorStart ,baseAddress + 0x18, bitOffset = 0, documentation = s"VGA Timing Vertical Color Start Setting.(${v_colorStart.getBitsWidth} bits)")
        busCtrl.drive(v_colorEnd   ,baseAddress + 0x1C, bitOffset = 0, documentation = s"VGA Timing Vertical Color End Setting.(${v_colorEnd.getBitsWidth} bits)")
        busCtrl.drive(h_polarity   ,baseAddress + 0x20, bitOffset = 0, documentation = s"VGA Timing Horizontal Polarity Setting.(${h_polarity.getBitsWidth} bits)") init(False)
        busCtrl.drive(v_polarity   ,baseAddress + 0x20, bitOffset = 1, documentation = s"VGA Timing Vertical Polarity Setting.(${v_polarity.getBitsWidth} bits)") init(False)


        h.syncStart  := FFSynchronizer(coreClockDomain, vgaClockDomain, h_syncStart)
        h.syncEnd    := FFSynchronizer(coreClockDomain, vgaClockDomain, h_syncEnd)
        h.colorStart := FFSynchronizer(coreClockDomain, vgaClockDomain, h_colorStart)
        h.colorEnd   := FFSynchronizer(coreClockDomain, vgaClockDomain, h_colorEnd)
        v.syncStart  := FFSynchronizer(coreClockDomain, vgaClockDomain, v_syncStart)
        v.syncEnd    := FFSynchronizer(coreClockDomain, vgaClockDomain, v_syncEnd)
        v.colorStart := FFSynchronizer(coreClockDomain, vgaClockDomain, v_colorStart)
        v.colorEnd   := FFSynchronizer(coreClockDomain, vgaClockDomain, v_colorEnd)
        h.polarity   := FFSynchronizer(coreClockDomain, vgaClockDomain, h_polarity)
        v.polarity   := FFSynchronizer(coreClockDomain, vgaClockDomain, v_polarity)

    }
}


object VgaTimingPrint extends App{
    def show( hPixels : Int,
              hSync : Int,
              hFront : Int,
              hBack : Int,
              hPolarity : Boolean,
              vPixels : Int,
              vSync : Int,
              vFront : Int,
              vBack : Int,
              vPolarity : Boolean): Unit = {
        val h_syncStart = hSync - 1
        val h_colorStart = hSync + hBack - 1
        val h_colorEnd = hSync + hBack + hPixels - 1
        val h_syncEnd = hSync + hBack + hPixels + hFront - 1
        val v_syncStart = vSync - 1
        val v_colorStart = vSync + vBack - 1
        val v_colorEnd = vSync + vBack + vPixels - 1
        val v_syncEnd = vSync + vBack + vPixels + vFront - 1

        println(
            s"""    .hSyncStart  = $h_syncStart,
               |    .hSyncEnd    = $h_syncEnd,
               |    .hColorStart = $h_colorStart,
               |    .hColorEnd   = $h_colorEnd,
               |    .vSyncStart  = $v_syncStart,
               |    .vSyncEnd 	 = $v_syncEnd,
               |    .vColorStart = $v_colorStart,
               |    .vColorEnd 	 = $v_colorEnd,
               |    .polarities  = ${(if(hPolarity) 1 else 0) | (if(vPolarity) 2 else 0)},
               |""".stripMargin)
    }

    def show( hPixels : Int,
              hSync : Int,
              hFront : Int,
              hBack : Int,
              hPolarity : Boolean,
              vPixels : Int,
              vSync : Int,
              vFront : Int,
              vBack : Int,
              vPolarity : Boolean,
              refreshRate: Int): Unit = {
        val h_syncStart = hSync - 1
        val h_colorStart = hSync + hBack - 1
        val h_colorEnd = hSync + hBack + hPixels - 1
        val h_syncEnd = hSync + hBack + hPixels + hFront - 1
        val v_syncStart = vSync - 1
        val v_colorStart = vSync + vBack - 1
        val v_colorEnd = vSync + vBack + vPixels - 1
        val v_syncEnd = vSync + vBack + vPixels + vFront - 1

        println(
            s"""    .hSyncStart  = $h_syncStart,
               |    .hSyncEnd    = $h_syncEnd,
               |    .hColorStart = $h_colorStart,
               |    .hColorEnd   = $h_colorEnd,
               |    .vSyncStart  = $v_syncStart,
               |    .vSyncEnd 	 = $v_syncEnd,
               |    .vColorStart = $v_colorStart,
               |    .vColorEnd 	 = $v_colorEnd,
               |    .polarities  = ${(if(hPolarity) 1 else 0) | (if(vPolarity) 2 else 0)},
               |    .frequency   = ${(hPixels + hSync + hFront + hBack) * (vPixels + vSync + vFront + vBack) * refreshRate},
               |""".stripMargin)
    }

    show(
        hPixels    = 1920,
        hSync      = 44,
        hFront     = 88,
        hBack      = 148,
        hPolarity  = true,
        vPixels    = 1080,
        vSync      = 5,
        vFront     = 4,
        vBack      = 36,
        vPolarity  = true,
        refreshRate = 60
    )
}
