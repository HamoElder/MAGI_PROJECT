package magiSOC.bus

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4, Axi4Config, Axi4CrossbarFactory, Axi4SpecRenamer}
import spinal.lib.bus.misc.SizeMapping

case class Axi4CrossbarDemo() extends Component {
    val masterAxi4Cfg = Axi4Config(
        addressWidth = 64,
        dataWidth = 512,
        idWidth = 4
    )
    val slaveAxi4Cfg = masterAxi4Cfg.copy(idWidth = 3)
    val io = new Bundle{
        val axi4In = Vec(slave(Axi4(masterAxi4Cfg)), 2)
        val axi4Out = Vec(master(Axi4(slaveAxi4Cfg)), 2)

        axi4In.foreach(Axi4SpecRenamer(_))
        axi4Out.foreach(Axi4SpecRenamer(_))
    }
    noIoPrefix()

    val crossbarFactoryInst = Axi4CrossbarFactory()
    crossbarFactoryInst.addSlaves(
        (io.axi4Out(0), SizeMapping(0, 1 GiB)),
        (io.axi4Out(1), SizeMapping(1 GiB, 1 GiB))
    )
    io.axi4In.foreach(crossbarFactoryInst.addConnection(_, io.axi4Out))
    io.axi4Out.foreach(axi4 =>
        crossbarFactoryInst.addPipelining(axi4)(
            (masterPort, slavePort) =>{
                masterPort.ar >-> slavePort.ar
                slavePort.r >-> masterPort.r
            }
        )(
            (masterPort, slavePort) =>{
                masterPort.aw >-> slavePort.aw
                masterPort.w >-> slavePort.w
                slavePort.b >-> masterPort.b
            }
        )
   )
    crossbarFactoryInst.build()
}
