package utils.debuger

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config}

case class AxiLite4PlayerConfig(
                               addressWidth : Int,
                               dataWidth    : Int,
                               addrCmdList  : (Array[Int], Array[Int]),
                               useLoop      : Boolean                  = false
                               ){
    require(addrCmdList._1.length == addrCmdList._2.length, "the num of address must much the num of command in cmdList.")
    def axiLite4Config: AxiLite4Config = AxiLite4Config(addressWidth, dataWidth)
    def addressType: UInt = UInt(addressWidth bits)
    def dataType: UInt = UInt(dataWidth bits)
    def addressList: Array[UInt] = addrCmdList._1.map(i => U(i, addressWidth bits))
    def commandList: Array[UInt] = addrCmdList._2.map(i => U(i, dataWidth bits))

    def addrCmdListSize: Int = addressList.length
    def cntType: UInt = UInt(log2Up(addrCmdListSize) + 1 bits)
}

case class AxiLite4Player(config: AxiLite4PlayerConfig) extends Component {

    val io = new Bundle{
        val axil4Master = master(AxiLite4(config.axiLite4Config))
    }

    noIoPrefix()

    val addrMem = Mem(config.addressType, initialContent = config.addressList)
    val cmdMem = Mem(config.dataType, initialContent = config.commandList)


    // Without Using Read Channel
    io.axil4Master.ar.valid := False
    io.axil4Master.ar.addr := 0
    io.axil4Master.ar.setPermissions(B(0))

    io.axil4Master.r.ready := False
    // Write Channel
    val aw_valid: Bool = Reg(Bool) init(False)
    val aw_addr = Reg(config.addressType)

    val w_valid = Reg(Bool) init(False)
    val w_data = Reg(config.dataType)

    val b_ready = Reg(Bool) init(False)

    val fsm = new StateMachine{
        val cnt: UInt = Reg(config.cntType) init(0)
        val IDLE: State with EntryPoint = new State with EntryPoint{
            whenIsActive{
                aw_addr := addrMem.readSync(cnt.resized)
                w_data  := cmdMem.readSync(cnt.resized)
                goto(WADDR)
                aw_valid := True
            }
        }

        val WADDR: State = new State{
            whenIsActive{
                when(io.axil4Master.aw.fire){
                    aw_valid := False
                    cnt := cnt + 1
                    goto(WDATA)
                    w_valid := True
                }.otherwise{
                    aw_valid := True
                }
            }
        }

        val WDATA: State = new State{
            whenIsActive{
                when(io.axil4Master.w.fire){
                    w_valid := False
                    b_ready := True
                    goto(WRESP)
                }.otherwise{
                    w_valid := True
                }
            }
        }

        val WRESP: State = new State{
            whenIsActive{
                when(io.axil4Master.b.fire){
                    b_ready := False
                    when(cnt >= config.addrCmdListSize){
                        cnt := 0
                        goto(FINISH)
                    }.otherwise{
                        goto(IDLE)
                    }
                }.otherwise{
                    b_ready := True
                }
            }
        }

        val FINISH: State = new State{
            whenIsActive{
                if(config.useLoop){
                    goto(IDLE)
                }
            }
        }
    }

    io.axil4Master.aw.setPermissions(B(0))
    io.axil4Master.aw.valid := aw_valid
    io.axil4Master.aw.addr := aw_addr

    io.axil4Master.w.valid := w_valid
    io.axil4Master.w.data := w_data.asBits
    io.axil4Master.w.setStrb()

    io.axil4Master.b.ready := b_ready
}


object AxiLite4PlayerBench {
    def main(args: Array[String]): Unit = {
        val addrcmd = (Array[Int](1, 2, 3, 4, 5), Array[Int](10, 20, 30, 40, 50))
        val player_config = AxiLite4PlayerConfig(8, 32, addrcmd, false)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new AxiLite4Player(player_config)).printPruned()
    }
}

object AxiLite4PlayerSimApp extends App{
    import spinal.core.sim._

    val addrcmd = (Array[Int](1, 2, 3, 4, 5), Array[Int](10, 20, 30, 40, 50))
    val player_config = AxiLite4PlayerConfig(8, 32, addrcmd, useLoop = false)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new AxiLite4Player(player_config)){ dut =>
            dut.clockDomain.forkStimulus(5)
            dut.clockDomain.waitSampling(10)
            dut.io.axil4Master.aw.ready #= true
            dut.clockDomain.waitSampling(20)
            dut.io.axil4Master.w.ready #= true
            dut.clockDomain.waitSampling(10)
            dut.io.axil4Master.b.valid #= true
            dut.clockDomain.waitSampling(1000)

        }
}