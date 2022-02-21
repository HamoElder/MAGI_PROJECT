package magiSOC.perips.Memory.Sdr

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi._


object Axi4SdramCtrl{
    def getAxiConfig(dataWidth : Int,idWidth : Int,layout : SdramLayout) : Axi4Config = {
        val widthFactor = dataWidth/layout.dataWidth
        Axi4Config(
            addressWidth = layout.byteAddressWidth,
            dataWidth = dataWidth,
            idWidth = idWidth,
            useLock = false,
            useRegion = false,
            useCache = false,
            useProt = false,
            useQos = false
        )
    }
}


case class Axi4SdramCtrl(axiDataWidth : Int, axiIdWidth : Int, layout : SdramLayout, timing : SdramTimings, CAS : Int) extends Component{
    val dataWidthFactor = axiDataWidth/layout.dataWidth
    require(dataWidthFactor != 0)
    require(isPow2(dataWidthFactor))
    val axiConfig = Axi4SdramCtrl.getAxiConfig(axiDataWidth,axiIdWidth,layout)

    val io = new Bundle{
        val axi   = slave(Axi4(axiConfig))
        val sdram = master(SdramInterface(layout))
    }

    val ctrl = SdramCtrl(layout,timing,CAS,SdramCtrlAxi4SharedContext(axiConfig.idWidth))
    val ctrlBusAdapted = dataWidthFactor match {
        case 1 => ctrl.io.bus
        case _ => ctrl.io.bus.genScaledUpDriver(dataWidthFactor)
    }

    val bridge = ctrlBusAdapted.driveFrom(io.axi.toShared())

    io.sdram <> ctrl.io.sdram
}

object Axi4SdramCtrlBench{
    def main(args: Array[String]): Unit = {
        val device = IS42x320D
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            defaultClockDomainFrequency = FixedFrequency(100 MHz), targetDirectory = "rtl/Axi4SdramCtrl").
            generateSystemVerilog(new Axi4SdramCtrl(32, 3, device.layout,device.timingGrade7, 3)).printPruned()
    }
}
