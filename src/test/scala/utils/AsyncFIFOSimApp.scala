package utils

import spinal.core.sim._
import utils.common.ClkCrossing
import spinal.core._
import utils.common.ClkCrossing.AsyncFIFO

import scala.collection.mutable
import scala.util.Random

object AsyncFIFOSimApp {
    def main(args: Array[String]): Unit = {
        val compiled = SimConfig.withWave.allOptimisation.compile(
            rtl = new AsyncFIFO(
                dataType = Bits(32 bits),
                depth = 32,
                pushClock = ClockDomain.external("clkA"),
                popClock = ClockDomain.external("clkB",withReset = false)
            )
        )
        compiled.doSimUntilVoid{dut =>
            val queueModel = mutable.Queue[Long]()
            val clocksThread = fork {
                dut.pushClock.fallingEdge()
                dut.popClock.fallingEdge()
                dut.pushClock.deassertReset()
                sleep(0)

                dut.pushClock.assertReset()
                sleep(10)
                dut.pushClock.deassertReset()
                sleep(1)

                while(true) {
                    if(Random.nextBoolean()) {
                        dut.pushClock.clockToggle()
                    } else {
                        dut.popClock.clockToggle()
                    }
                    sleep(1)
                }
            }
            val pushThread = fork {
                while(true) {
                    dut.io.push.valid.randomize()
                    dut.io.push.payload.randomize()
                    dut.pushClock.waitSampling()
                    if(dut.io.push.valid.toBoolean && dut.io.push.ready.toBoolean) {
                        queueModel.enqueue(dut.io.push.payload.toLong)
                    }
                }
            }
            val popThread = fork {
                for(i <- 0 until 100000) {
                    dut.io.pop.ready.randomize()
                    dut.popClock.waitSampling()
                    if(dut.io.pop.valid.toBoolean && dut.io.pop.ready.toBoolean) {
                        assert(dut.io.pop.payload.toLong == queueModel.dequeue())
                    }
                }
                simSuccess()
            }
        }
    }
}
