package utils.bus.Axi4

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4Shared}
import utils.bus.AxiLite.{AxiLite4, AxiLite4Config}

object Axi4SharedToAxiLite4 {
    def getConfigs(addressWidth: Int, dataWidth: Int, idWidth: Int): (Axi4Config,AxiLite4Config) =
        (
            Axi4Config(
                addressWidth = addressWidth,
                dataWidth    = dataWidth,
                idWidth      = idWidth,
                useLock      = false,
                useRegion    = false,
                useCache     = false,
                useProt      = false,
                useQos       = false,
                useId        = false,
                useBurst     = false,
                useSize      = false,
                useLen       = false,
                useLast      = false,
                useResp      = false,
                useStrb      = false
            ),
            AxiLite4Config(
                addressWidth = addressWidth,
                dataWidth    = dataWidth
            )
        )
}

case class Axi4SharedToAxiLite4 (addressWidth: Int, dataWidth: Int, idWidth: Int) extends Component {

    val (axiConfig,axi4lConfig) = Axi4SharedToAxiLite4.getConfigs(addressWidth,dataWidth,idWidth)
    val io = new Bundle{
        val axi = slave (Axi4Shared(axiConfig))
        val axi4l = master(AxiLite4(axi4lConfig))
    }
    // Write Data
    io.axi4l.w.ready        <> io.axi.w.ready
    io.axi.w.valid          <> io.axi4l.w.valid
    io.axi.w.payload.data   <> io.axi4l.w.payload.data
    io.axi.w.payload.strb   <> io.axi4l.w.payload.strb
    io.axi.w.strb           <> io.axi4l.w.strb
    // Read & Write Address
    io.axi.arw.valid        <> io.axi4l.aw.valid
    io.axi4l.aw.ready       <> io.axi.arw.ready
    io.axi.arw.payload.addr <> io.axi4l.aw.payload.addr
    io.axi.arw.payload.prot <> io.axi4l.aw.payload.prot
    //write Response
    io.axi4l.b.ready        <> io.axi.b.ready
    io.axi.b.valid          <> io.axi4l.b.valid
    io.axi.b.payload.resp   <> io.axi4l.b.payload.resp
    //Read Data
    io.axi.r.ready          <> io.axi.r.ready
    io.axi4l.r.valid        <> io.axi.r.valid
    io.axi4l.r.payload.data <> io.axi.r.payload.data
    io.axi4l.r.payload.resp <> io.axi.r.payload.resp
}
