package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory}


case class Axi4MacEthConfig( cfgDataWidth      : Int,
                              payloadDataWidth  : Int,
                              bufByteCount      : BigInt  = 4 KiB,
                              stageDepth        : Int     = 4,
                              idWidth           : Int     = 3,
                              useInterrupt      : Boolean = false) {
    def cfgAddressWidth: Int = 8

    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)

    def axi4Config : Axi4Config = Axi4Config(
        addressWidth = log2Up(bufByteCount),
        dataWidth = payloadDataWidth,
        idWidth = idWidth,
        useLock = false,
        useRegion = false,
        useCache = false,
        useProt = false,
        useQos = false
    )
    def rxTimeout: Int = 6 // ticks
    def bufDepth: Int = (bufByteCount / axi4Config.bytePerWord).toInt
    def statusFifoDepth: Int = (bufByteCount / 64).toInt
    def rxFifoFullThreshold: Int = (0.8 * bufDepth).toInt
    // The depth of the StreamFifoCC must be a power of 2 and euqal or bigger than 2
    assert(isPow2(stageDepth) & stageDepth >= 2, "The depth of the StreamFifoCC must be a power of 2 and equal or bigger than 2")
    def phyConfig: PhyConfig = PhyConfig(
        dataWidth = payloadDataWidth,
        useStrb = true
    )
}

class Axi4MacEth(config : Axi4MacEthConfig) extends Component {
    val io = new Bundle{
        val axi_aclk = in Bool()
        val axi_aresetn = in Bool()
        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))

        val axi4Eth = slave(Axi4(config.axi4Config))

        val intr = if(config.useInterrupt) out Bool()  else null

        val phy_clk = in Bool()
        val phy_rst = in Bool()
        val gmii =  master(Gmii(config.phyConfig.gmiiConfig))
    }

    noIoPrefix()

    val axiClock = new ClockDomain(
        clock = io.axi_aclk,
        reset = io.axi_aresetn,
        config = ClockDomainConfig(resetKind = SYNC,
            resetActiveLevel = LOW)
    )

    val phyClock = new ClockDomain(
        clock = io.phy_clk,
        reset = io.phy_rst,
        config = ClockDomainConfig(resetKind = SYNC,
            resetActiveLevel = HIGH)
    )

    val txStagingFifoCc = new StreamFifoCC(
        dataType = PhyPayload(config.phyConfig),
        depth = config.stageDepth,
        pushClock = axiClock,
        popClock = phyClock
    )

    val rxStagingFifoCc = new StreamFifoCC(
        dataType = PhyPayload(config.phyConfig),
        depth = config.stageDepth,
        pushClock = phyClock,
        popClock = axiClock
    )

    val axi2PhyBridge = new StreamCCByToggle(
        dataType = Bits(50 bits),
        inputClock = axiClock,
        outputClock = phyClock
    )

    val phyClockArea = new ClockingArea(phyClock){
        val phy_interface = PhyInterface(config.phyConfig)
    }
    phyClockArea.phy_interface.io.txStagingFifoCcPop <> txStagingFifoCc.io.pop
    phyClockArea.phy_interface.io.rxStagingFifoCcPush <> rxStagingFifoCc.io.push
    phyClockArea.phy_interface.io.status2PhyPop <> axi2PhyBridge.io.output

    val axiClockArea = new ClockingArea(axiClock){
        val factory = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
        val axi4_mac_core = Axi4Interface(config)
        val bridge = axi4_mac_core.driveFrom(factory, 0x00)
    }
    axiClockArea.axi4_mac_core.rxStagingFifoCcPop <> rxStagingFifoCc.io.pop
    axiClockArea.axi4_mac_core.txStagingFifoCcPush <> txStagingFifoCc.io.push
    axiClockArea.axi4_mac_core.status2PhyPush <> axi2PhyBridge.io.input

    io.axi4Eth <> axiClockArea.axi4_mac_core.axi4Slave
    if(config.useInterrupt){
        io.intr <> axiClockArea.axi4_mac_core.intrIO
    }
    io.gmii <> phyClockArea.phy_interface.io.gmiiMaster
}


object Axi4MacEthBench {
    def main(args: Array[String]) {
        val axi4EthConfig = Axi4MacEthConfig(32, 32, 2 KiB, 4, 3, true)
        SpinalConfig(targetDirectory = "rtl").generateSystemVerilog(new Axi4MacEth(axi4EthConfig)).printPruned()
    }
}


//Sim

object Axi4MacEthSimApp extends App{
    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random

    val axi4EthConfig = Axi4MacEthConfig(32, 32, 2 KiB, 4, 3, true)

    SimConfig
        .withWave
        //        .allOptimisation
        .doSim(new Axi4MacEth(axi4EthConfig)){ dut =>
            dut.axiClock.forkStimulus(10)
            dut.phyClock.forkStimulus(10)

            dut.io.axi4Eth.writeRsp.ready #= true
            dut.io.axi4Eth.writeData.last #= false
            dut.io.axi4Eth.writeCmd.addr #= 0
            dut.io.axi4Eth.writeCmd.valid #= true
            dut.io.axi4Eth.writeData.strb #= 7
            dut.io.axi4Eth.writeData.valid #= false
            dut.io.axi4Eth.readCmd.valid #= false
            dut.io.axi4Eth.readCmd.addr #= 4
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeCmd.valid #= false
            dut.io.axi4Eth.readCmd.len #= 16
            dut.io.axi4Eth.writeData.strb #= 15
            dut.axiClock.waitSampling(10)
            var counter = 0
            for(i <- 1 until 12){
                dut.io.axi4Eth.writeData.valid #= true
                var data_buf = 0
                for(j <- 0 until 4){
                    import scala.math.pow
                    data_buf = data_buf + pow(256, j).toInt * (i*4 + j)
                    counter = counter + 1
                }
                dut.io.axi4Eth.writeData.data #= data_buf
                dut.axiClock.waitSampling()
                dut.io.axi4Eth.writeData.valid #= false
                dut.axiClock.waitSampling(1)
            }

            dut.io.axi4Eth.writeData.valid #= true
            dut.io.axi4Eth.writeData.data #= 0x50403020
            dut.io.axi4Eth.writeData.strb #= 15
            counter = counter + 1
            println(counter)
            dut.io.axi4Eth.writeData.last #= true
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.last #= false
            dut.io.axi4Eth.writeData.valid #= false
            dut.axiClock.waitSampling(100)

            dut.io.axi4Eth.writeCmd.addr #= 0
            dut.io.axi4Eth.writeCmd.valid #= true
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.valid #= false
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeCmd.valid #= false
            dut.io.axi4Eth.writeData.strb #= 15
            dut.io.axi4Eth.writeData.valid #= true
            dut.io.axi4Eth.writeData.data #= Array(0xff.toByte, 0xff.toByte, 0xff.toByte, 0xff.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0xff.toByte, 0xff.toByte, 0x00.toByte, 0xe0.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0x4c.toByte, 0x7a.toByte, 0x2b.toByte, 0x85.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0x08.toByte, 0x06.toByte, 0x00.toByte, 0x01.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0x08.toByte, 0x00.toByte, 0x06.toByte, 0x04.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0x00.toByte, 0x01.toByte, 0x00.toByte, 0xe0.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0x4c.toByte, 0x7a.toByte, 0x2b.toByte, 0x85.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0x0a.toByte, 0x2a.toByte, 0x00.toByte, 0x01.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= 0
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0x00.toByte, 0x00.toByte, 0x0a.toByte, 0x2a.toByte)
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.data #= Array(0x00.toByte, 0x02.toByte, 0x00.toByte, 0x00.toByte)
            dut.axiClock.waitSampling()
//            for(i <- 0 until 4){
//                dut.io.axi4Eth.writeData.data #= 0
//                dut.axiClock.waitSampling()
//            }
            dut.io.axi4Eth.writeData.valid #= true
            dut.io.axi4Eth.writeData.data #= 0
            dut.io.axi4Eth.writeData.strb #= 15

            dut.io.axi4Eth.writeData.last #= true
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.writeData.last #= false
            dut.io.axi4Eth.writeData.valid #= false

            dut.io.axi4Eth.readRsp.ready #= false
            dut.axiClock.waitSampling(10)

            dut.io.gmii.RX.DV  #= false
            dut.io.gmii.RX.ER #= false
            dut.phyClock.waitSampling(5)
            dut.io.gmii.RX.DV #= true
            for(i <- 0 until 7){
                dut.io.gmii.RX.RXD #= 0x55
                dut.phyClock.waitSampling()
            }
            dut.io.gmii.RX.RXD #= 0xd5
            dut.phyClock.waitSampling()
            for(i <- 0 until 55){
                dut.io.gmii.RX.RXD #= i
                dut.phyClock.waitSampling()
            }
            dut.io.gmii.RX.DV #= false
            dut.phyClock.waitSampling(10)

            //            dut.io.gmii.RX.DV #= true
            //            for(i <- 0 until 7){
            //                dut.io.gmii.RX.RXD #= 0x55
            //                dut.phyClock.waitSampling()
            //            }
            //            dut.io.gmii.RX.RXD #= 0xd5
            //            dut.phyClock.waitSampling()
            //            for(i <- 0 until 8){
            //                dut.io.gmii.RX.RXD #= i
            //                dut.phyClock.waitSampling()
            //            }
            //            dut.io.gmii.RX.RXD #= 0xff
            //            dut.phyClock.waitSampling()
            //            dut.io.gmii.RX.DV #= false
            //            dut.phyClock.waitSampling(10)

            dut.io.axi4Eth.readCmd.addr #= 4
            dut.io.axi4Eth.readCmd.valid #= true
            dut.axiClock.waitSampling()
            dut.io.axi4Eth.readCmd.valid #= false
            dut.io.axi4Eth.readRsp.ready #= true
            dut.axiClock.waitSampling(200)
        }
}
