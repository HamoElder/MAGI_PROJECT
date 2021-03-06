package utils.bus.AxiLite.sim

import spinal.core._
import spinal.core.sim._
import utils.bus.AxiLite._
import scala.util.Random

case class AxiLite4Driver(axi : AxiLite4, clockDomain : ClockDomain) {

    def reset() : Unit = {
        axi.aw.valid #= false
        axi.w.valid #= false
        axi.ar.valid #= false
        axi.r.ready #= true
        axi.b.ready #= true
    }

    def read(address : BigInt) : BigInt = {
        axi.ar.payload.prot.assignBigInt(6)

        axi.ar.valid #= true
        axi.ar.payload.addr #= address

        axi.r.ready #= true

        clockDomain.waitSamplingWhere(axi.ar.ready.toBoolean)

        axi.ar.valid #= false

        clockDomain.waitSamplingWhere(axi.r.valid.toBoolean)

        axi.r.ready #= false

        axi.r.payload.data.toBigInt
    }

    def write(address : BigInt, data : BigInt) : Unit = {
        axi.aw.payload.prot.assignBigInt(6)
        axi.w.payload.strb.assignBigInt(15)

        axi.aw.valid #= true
        axi.aw.payload.addr #= address

        axi.w.valid #= true
        axi.w.payload.data #= data

        clockDomain.waitSamplingWhere(axi.aw.ready.toBoolean && axi.w.ready.toBoolean)

        axi.aw.valid #= false
        axi.w.valid #= false
    }

    def write(address : BigInt, data : BigInt, strb: BigInt = 15) : Unit = {
        axi.aw.payload.prot.assignBigInt(6)
        axi.w.payload.strb.assignBigInt(strb)

        axi.aw.valid #= true
        axi.aw.payload.addr #= address

        axi.w.valid #= true
        axi.w.payload.data #= data

        clockDomain.waitSamplingWhere(axi.aw.ready.toBoolean)
        axi.aw.valid #= false
        clockDomain.waitSamplingWhere(axi.w.ready.toBoolean)
        axi.w.valid #= false
    }

    def asyncWrite(address : BigInt, data : BigInt) : Unit = {
        axi.aw.payload.prot.assignBigInt(6)
        axi.w.payload.strb.assignBigInt(15)

        axi.aw.valid #= true
        axi.aw.payload.addr #= address

        clockDomain.waitSampling(Random.nextInt(20))

        axi.w.valid #= true
        axi.w.payload.data #= data

        clockDomain.waitSamplingWhere(axi.aw.ready.toBoolean && axi.w.ready.toBoolean)

        axi.aw.valid #= false
        axi.w.valid #= false
    }
}

