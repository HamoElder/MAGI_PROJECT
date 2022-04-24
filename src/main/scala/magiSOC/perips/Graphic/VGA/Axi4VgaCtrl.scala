package magiSOC.perips.Graphic.VGA

import magiSOC.perips.DMA.BlockDMA.AxiLite4BDMAConfig
import magiSOC.perips.DMA.VideoDMA.{VideoDMA, VideoDMAGeneric}
import magiSOC.perips.Graphic.{Rgb, RgbConfig}
import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4ReadOnly}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory, AxiLite4SpecRenamer}

case class Axi4VgaCtrlGenerics(axiAddressWidth : Int,
                               axiDataWidth : Int,
                               cfgDataWidth: Int,
                               burstLength : Int,
                               frameSizeMax : Int,
                               fifoSize : Int,
                               rgbConfig: RgbConfig,
                               timingsWidth: Int = 12,
                               pendingRequestMax : Int = 7, //Should be power of two minus one
                               vgaClock : ClockDomain = ClockDomain.current){
    require(isPow2(burstLength))

    def cfgAddressWidth: Int = 8
    def bytePerAddress: Int =  axiDataWidth/8 * burstLength
    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)
    def axi4Config: Axi4Config = dmaGenerics.getAxi4ReadOnlyConfig
    def dmaGenerics: VideoDMAGeneric[Rgb] = VideoDMAGeneric(
        addressWidth      = axiAddressWidth - log2Up(bytePerAddress),
        dataWidth         = axiDataWidth,
        beatPerAccess     = burstLength,
        sizeWidth         = log2Up(frameSizeMax) -log2Up(bytePerAddress),
        pendingRequetMax  = pendingRequestMax,
        fifoSize          = fifoSize,
        frameClock        = vgaClock,
        frameFragmentType = Rgb(rgbConfig)
    )
}

class Axi4VgaCtrl(config: Axi4VgaCtrlGenerics) extends Component {

    val io = new Bundle{
        val axi = master(Axi4ReadOnly(config.axi4Config))
        val axi4Ctrl = slave(AxiLite4(config.axiLite4Config))
        val vga = master(Vga(config.rgbConfig))
    }
    noIoPrefix()
    AxiLite4SpecRenamer(io.axi4Ctrl)
    val axil4busCtrl = new AxiLite4SlaveFactory(io.axi4Ctrl).setName("")
    val run = axil4busCtrl.createReadAndWrite(Bool,0x00) init(False)

    val dma  = VideoDMA(config.dmaGenerics)
    dma.io.mem.toAxi4ReadOnly <> io.axi
    axil4busCtrl.read(dma.io.busy,0x00,1)
    axil4busCtrl.drive(dma.io.size, 0x04,log2Up(config.bytePerAddress))
    axil4busCtrl.drive(dma.io.base, 0x08,log2Up(config.bytePerAddress))

    val vga = new ClockingArea(config.vgaClock) {
        val run = BufferCC(Axi4VgaCtrl.this.run)
        val ctrl = VgaCtrl(config.rgbConfig, config.timingsWidth)
        ctrl.feedWith(dma.io.frame,resync = run.rise)
        dma.io.frame.ready setWhen(!run) //Flush
        ctrl.io.softReset := !run

        ctrl.io.vga <> io.vga
    }


    vga.ctrl.io.timings.driveFrom(axil4busCtrl,0x40)
    vga.ctrl.io.timings.addTag(crossClockDomain)

    dma.io.start := PulseCCByToggle(vga.ctrl.io.frameStart,clockIn = config.vgaClock,clockOut = ClockDomain.current) && run
    axil4busCtrl.printDataModel()
}


object Axi4VgaCtrlBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/Axi4VgaCtrl").
            generateSystemVerilog(new Axi4VgaCtrl(Axi4VgaCtrlGenerics(
                axiAddressWidth = 32,
                axiDataWidth = 32,
                cfgDataWidth = 32,
                burstLength = 32,
                frameSizeMax = 2048*1512,
                fifoSize = 512,
                rgbConfig = RgbConfig(5,6,5),
                vgaClock = ClockDomain.external("vga")))).printPruned()
    }
}
