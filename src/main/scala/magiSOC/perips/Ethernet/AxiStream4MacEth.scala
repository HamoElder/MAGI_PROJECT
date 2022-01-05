package magiSOC.perips.Ethernet

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config, AxiLite4SlaveFactory}
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config}

//case class AxiStream4MacEthConfig(
//                                 cfgDataWidth: Int,
//                                 payloadDataWidth : Int,
//                                 sendBufByteNum : BigInt = 2 KiB,
//                                 recvBufByteNum : BigInt = 4 KiB,
//                                 stageDepth : Int = 4,
//                                 useInterrupt : Boolean = false
//                                 ){
//    def cfgAddressWidth: Int = 8
//
//    def axiLite4Config: AxiLite4Config = AxiLite4Config(cfgAddressWidth, cfgDataWidth)
//
//    def axiStream4Config: AxiStream4Config = AxiStream4Config(
//        dataWidth = payloadDataWidth, useStrb = false)
//
//    def phyConfig: PhyConfig = PhyConfig(
//        dataWidth = payloadDataWidth,
//        useStrb = true
//    )
//    def rxTimeout: Int = 6 // ticks
//    def bytePerWord: Int = payloadDataWidth / 8
//
//    def sendBufDepth: Int = (sendBufByteNum / bytePerWord).toInt
//    def recvBufDepth: Int = (recvBufByteNum / bytePerWord).toInt
//    def statusFifoDepth: Int = (recvBufDepth / 64).toInt
//
//    def perPkgNum: BigInt = 2 KiB
//    def checkSumFifoDepth: Int = (perPkgNum / bytePerWord).toInt
//
//    def rxFifoFullThreshold: Int = (0.8 * 2 * recvBufDepth).toInt
//
//    // The depth of the StreamFifoCC must be a power of 2 and euqal or bigger than 2
//    assert(isPow2(stageDepth) & stageDepth >= 2, "The depth of the StreamFifoCC must be a power of 2 and equal or bigger than 2")
//}
//
//case class AxiStream4MacEth(config: AxiStream4MacEthConfig) extends Component {
//    val io = new Bundle{
//        val axi_aclk = in Bool()
//        val axi_aresetn = in Bool()
//        val axil4Ctrl = slave(AxiLite4(config.axiLite4Config))
//
//        val axiStream4Trans = slave(AxiStream4(config.axiStream4Config))
//        val axiStream4Recv = master(AxiStream4(config.axiStream4Config))
//
//        val intr = if(config.useInterrupt) out Bool() else null
//
//        val phy_clk = in Bool()
//        val phy_rst = in Bool()
//        val gmii =  master(Gmii(config.phyConfig.gmiiConfig))
//    }
//
//    noIoPrefix()
//
//    val axiClock = new ClockDomain(
//        clock = io.axi_aclk,
//        reset = io.axi_aresetn,
//        config = ClockDomainConfig(resetKind = SYNC,
//            resetActiveLevel = LOW)
//    )
//
//    val phyClock = new ClockDomain(
//        clock = io.phy_clk,
//        reset = io.phy_rst,
//        config = ClockDomainConfig(resetKind = SYNC,
//            resetActiveLevel = HIGH)
//    )
//
//    val txStagingFifoCc = new StreamFifoCC(
//        dataType = PhyPayload(config.phyConfig),
//        depth = config.stageDepth,
//        pushClock = axiClock,
//        popClock = phyClock
//    )
//
//    val rxStagingFifoCc = new StreamFifoCC(
//        dataType = PhyPayload(config.phyConfig),
//        depth = config.stageDepth,
//        pushClock = phyClock,
//        popClock = axiClock
//    )
//
//    val axi2PhyBridge = new StreamCCByToggle(
//        dataType = Bits(50 bits),
//        inputClock = axiClock,
//        outputClock = phyClock
//    )
//
//    val phyClockArea = new ClockingArea(phyClock){
//        val phy_interface = PhyInterface(config.phyConfig)
//    }
//    phyClockArea.phy_interface.io.txStagingFifoCcPop <> txStagingFifoCc.io.pop
//    phyClockArea.phy_interface.io.rxStagingFifoCcPush <> rxStagingFifoCc.io.push
//    phyClockArea.phy_interface.io.status2PhyPop <> axi2PhyBridge.io.output
//
//    val axiClockArea = new ClockingArea(axiClock){
//        val factory = new AxiLite4SlaveFactory(io.axil4Ctrl).setName("")
//        val axiStream4_mac_core = AxiStream4Interface(config)
//        val bridge = axiStream4_mac_core.driveFrom(factory, 0x00)
//    }
//
//    axiClockArea.axiStream4_mac_core.rxStagingFifoCcPop <> rxStagingFifoCc.io.pop
//    axiClockArea.axiStream4_mac_core.txStagingFifoCcPush <> txStagingFifoCc.io.push
//    axiClockArea.axiStream4_mac_core.status2PhyPush <> axi2PhyBridge.io.input
//
//    io.axiStream4Recv << axiClockArea.axiStream4_mac_core.axiStream4Rx
//    io.axiStream4Trans >> axiClockArea.axiStream4_mac_core.axiStream4Tx
//    if(config.useInterrupt){
//        io.intr <> axiClockArea.axiStream4_mac_core.intrIO
//    }
//    io.gmii <> phyClockArea.phy_interface.io.gmiiMaster
//
//}
//
//object AxiStream4EthBench {
//    def main(args: Array[String]) {
//        val axiStream4EthConfig = AxiStream4MacEthConfig(32, 32, 2 KiB, 4 KiB, 8, true)
//        SpinalConfig(targetDirectory = "rtl").generateSystemVerilog(new AxiStream4MacEth(axiStream4EthConfig)).printPruned()
//    }
//}
//
//object AxiStream4MacEthSimApp extends App{
//    import spinal.core.sim._
//    import utils.bus.AxiLite.sim.AxiLite4Driver
//    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
//    import scala.util.Random
//
//    val axiStream4EthConfig = AxiStream4MacEthConfig(32, 32, 2 KiB, 4 KiB, 4, true)
//
//    SimConfig
//        .withWave
//        //        .allOptimisation
//        .doSim(AxiStream4MacEth(axiStream4EthConfig)){ dut =>
//            dut.axiClock.forkStimulus(10)
//            dut.phyClock.forkStimulus(10)
//
//            dut.io.axiStream4Trans.transmitData.valid #= false
//            dut.io.axiStream4Recv.transmitData.ready #= false
//            dut.io.axiStream4Trans.transmitData.last #= false
//            dut.io.axiStream4Trans.transmitData.keep_ #= 15
//            dut.axiClock.waitSampling(10)
//            var counter = 0
//            for(i <- 1 until 20){
//                dut.io.axiStream4Trans.transmitData.valid #= true
//                var data_buf = 0
//                for(j <- 0 until 4){
//                    import scala.math.pow
//                    data_buf = data_buf + pow(256, j).toInt * (i*4 + j)
//                    counter = counter + 1
//                }
//                dut.io.axiStream4Trans.transmitData.data #= data_buf
//                dut.axiClock.waitSampling()
//                dut.io.axiStream4Trans.transmitData.valid #= false
//                dut.axiClock.waitSampling(1)
//            }
//
//            dut.io.axiStream4Trans.transmitData.valid #= true
//            dut.io.axiStream4Trans.transmitData.data #= 0x50403020
//            dut.io.axiStream4Trans.transmitData.keep_ #= 1
//            counter = counter + 1
//            println(counter)
//            dut.io.axiStream4Trans.transmitData.last #= true
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.last #= false
//            dut.io.axiStream4Trans.transmitData.valid #= false
//            dut.axiClock.waitSampling()
//
//
//            dut.io.axiStream4Trans.transmitData.valid #= false
//            dut.io.axiStream4Trans.transmitData.keep_ #= 15
//            dut.io.axiStream4Trans.transmitData.valid #= true
//            dut.io.axiStream4Trans.transmitData.data #= Array(0xff.toByte, 0xff.toByte, 0xff.toByte, 0xff.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0xff.toByte, 0xff.toByte, 0x00.toByte, 0xe0.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0x4c.toByte, 0x7a.toByte, 0x2b.toByte, 0x85.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0x08.toByte, 0x06.toByte, 0x00.toByte, 0x01.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0x08.toByte, 0x00.toByte, 0x06.toByte, 0x04.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0x00.toByte, 0x01.toByte, 0x00.toByte, 0xe0.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0x4c.toByte, 0x7a.toByte, 0x2b.toByte, 0x85.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0x0a.toByte, 0x2a.toByte, 0x00.toByte, 0x01.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= 0
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0x00.toByte, 0x00.toByte, 0x0a.toByte, 0x2a.toByte)
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.data #= Array(0x00.toByte, 0x02.toByte, 0x00.toByte, 0x00.toByte)
//            dut.axiClock.waitSampling()
//            //            for(i <- 0 until 4){
//            //                dut.io.axiStream4Trans.transmitData.data #= 0
//            //                dut.axiClock.waitSampling()
//            //            }
//            dut.io.axiStream4Trans.transmitData.valid #= true
//            dut.io.axiStream4Trans.transmitData.data #= 0
//            dut.io.axiStream4Trans.transmitData.keep_ #= 15
//
//            dut.io.axiStream4Trans.transmitData.last #= true
//            dut.axiClock.waitSampling()
//            dut.io.axiStream4Trans.transmitData.last #= false
//            dut.io.axiStream4Trans.transmitData.valid #= false
//
//            dut.axiClock.waitSampling(10)
//
//            dut.io.gmii.RX.DV  #= false
//            dut.io.gmii.RX.ER #= false
//            dut.phyClock.waitSampling(5)
//            dut.io.gmii.RX.DV #= true
//            for(i <- 0 until 7){
//                dut.io.gmii.RX.RXD #= 0x55
//                dut.phyClock.waitSampling()
//            }
//            dut.io.gmii.RX.RXD #= 0xd5
//            dut.phyClock.waitSampling()
//            for(i <- 0 until 55){
//                dut.io.gmii.RX.RXD #= i
//                dut.phyClock.waitSampling()
//            }
//            dut.io.gmii.RX.DV #= false
//            dut.phyClock.waitSampling(3)
//
//            dut.io.gmii.RX.DV #= true
//            for(i <- 0 until 7){
//                dut.io.gmii.RX.RXD #= 0x55
//                dut.phyClock.waitSampling()
//            }
//            dut.io.gmii.RX.RXD #= 0xd5
//            dut.phyClock.waitSampling()
//            dut.io.gmii.RX.RXD #= 255
//            dut.phyClock.waitSampling()
//            dut.io.gmii.RX.RXD #= 255
//            dut.phyClock.waitSampling()
//            dut.io.gmii.RX.RXD #= 255
//            dut.phyClock.waitSampling()
//            for(i <- 1 until 180){
//                dut.io.gmii.RX.RXD #= i
//                dut.phyClock.waitSampling()
//            }
//            dut.io.gmii.RX.RXD #= 0xff
//            dut.phyClock.waitSampling()
//            dut.io.gmii.RX.DV #= false
//            dut.phyClock.waitSampling(10)
//
//            dut.axiClock.waitSampling(10)
//            for(i <- 0 until 200){
//                dut.io.axiStream4Recv.transmitData.ready.randomize()
//                dut.axiClock.waitSampling()
//            }
//            dut.axiClock.waitSampling(20)
//            dut.io.axiStream4Recv.transmitData.ready #= false
//        }
//}
//
