package magiRF.packages.CyclicPrefix

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory
import utils.bus.IQBundle.IQBundle
import utils.common.ClkCrossing.FFSynchronizer

object CpStates extends SpinalEnum {
    val IDLE, CAPTURE, CP, DATA = newElement()
}

case class CpConfig(
                       dataWidth: Int,
                       maxCpLength: Int,
                       maxDataLength: Int
                   ) {
    def dataType: Fragment[IQBundle[Bits]] = Fragment(IQBundle(Bits(dataWidth bits)))

    def cpType: UInt = UInt(log2Up(maxCpLength) + 1 bits)

    def cntType: UInt = UInt(log2Up(maxDataLength) + 1 bits)

    override def equals(that: Any): Boolean = that == this
}

case class CyclicPrefix(config: CpConfig) extends Component(){

	val io = new Bundle{
        val cp_len = in(config.cpType)
        val data_len = in(config.cntType)

        val raw_data = slave(Stream(config.dataType))
        val result = master(Flow(config.dataType))
    }

    noIoPrefix()

    val raw_dataFifo = StreamFifo(dataType = config.dataType, config.maxDataLength)
    val cp_en = Reg(Bool()) init (False)
    val fifo_pop_en = Reg(Bool()) init (False)

    io.raw_data.ready := raw_dataFifo.io.push.ready
    raw_dataFifo.io.push.valid := io.raw_data.valid
    raw_dataFifo.io.push.payload := io.raw_data.payload
    raw_dataFifo.io.push.last := io.raw_data.last

    raw_dataFifo.io.pop.ready := fifo_pop_en
    io.result.valid := cp_en ? io.raw_data.fire | (raw_dataFifo.io.pop.valid && fifo_pop_en)
    io.result.payload := cp_en ? io.raw_data.payload | raw_dataFifo.io.pop.payload
    io.result.last := cp_en ? False | (raw_dataFifo.io.pop.last)

    import CpStates._

    val cp_state = Reg(CpStates) init (IDLE)

    switch(cp_state) {
        is(IDLE) {
            when(raw_dataFifo.io.occupancy =/= 0) {
                cp_state := CAPTURE
            }
            fifo_pop_en := False
            cp_en := False
        }
        is(CAPTURE) {
            when(raw_dataFifo.io.occupancy >= (io.data_len - io.cp_len - 1)) {
                cp_state := CP
                cp_en := True
            }
        }
        is(CP) {
            when(io.raw_data.last) {
                cp_state := DATA
                cp_en := False
                fifo_pop_en := True
            }
        }
        is(DATA) {
            when(raw_dataFifo.io.pop.last) {
                cp_state := IDLE
                fifo_pop_en := False
            }
        }
    }

    // Bus interface function module
    def driveFrom(busCtrl: BusSlaveFactory, baseAddress: BigInt, coreClockDomain: ClockDomain, rfClockDomain: ClockDomain): Area = new Area {
        val cp_len = cloneOf(io.cp_len)
        val data_len = cloneOf(io.data_len)

        busCtrl.driveAndRead(cp_len, address = baseAddress + 0x00, bitOffset = 0,
            documentation = "Cyclic Prefix Length.") init (config.maxCpLength)
        busCtrl.driveAndRead(data_len, address = baseAddress + 0x04, bitOffset = 0,
            documentation = "Cyclic Prefix Data Length.") init (config.maxDataLength)

        io.cp_len := FFSynchronizer(coreClockDomain, rfClockDomain, cp_len)
        io.data_len := FFSynchronizer(coreClockDomain, rfClockDomain, data_len)
    }
}

object CyclicPrefixBench {
    def main(args: Array[String]): Unit = {
        val cp_config = CpConfig(32, 144, 2048)
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl").generateSystemVerilog(new CyclicPrefix(cp_config)).printPruned()
    }
}

object CyclicPrefixSimApp extends App {

    import spinal.core.sim._
    import utils.bus.AxiLite.sim.AxiLite4Driver
    import spinal.lib.sim.{StreamDriver, StreamMonitor, StreamReadyRandomizer}
    import scala.util.Random

    val cp_config = CpConfig(32, 3, 8)
    SimConfig
        .withWave
        .allOptimisation
        .doSim(new CyclicPrefix(cp_config)) { dut =>
            dut.clockDomain.forkStimulus(5)
            dut.io.cp_len #= 2
            dut.io.data_len #= 8
            dut.io.raw_data.valid #= false
            dut.io.raw_data.last #= false
            dut.io.raw_data.payload.fragment.cha_i #= 0
            dut.io.raw_data.payload.fragment.cha_q #= 0
            dut.clockDomain.waitSampling(20)
            for (cnt <- 0 until 15) {
                for (idx <- 0 until 7) {
                    dut.io.raw_data.payload.fragment.cha_i #= idx
                    dut.io.raw_data.payload.fragment.cha_q #= idx + 1
                    dut.io.raw_data.valid #= true
                    dut.clockDomain.waitSampling(1)
                }
                dut.io.raw_data.valid #= false
                dut.clockDomain.waitSampling(3)
                dut.io.raw_data.valid #= true
                dut.io.raw_data.payload.fragment.cha_i #= 1024
                dut.io.raw_data.payload.fragment.cha_q #= 1024
                dut.io.raw_data.last #= true
                dut.clockDomain.waitSampling(1)
                dut.io.raw_data.valid #= false
                dut.io.raw_data.last #= false
                dut.clockDomain.waitSampling(7)
            }
            dut.io.raw_data.valid #= false
            dut.clockDomain.waitSampling(1000)
        }
}