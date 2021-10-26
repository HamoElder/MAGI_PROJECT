package magiRF.modules.Filters

import spinal.core._
import spinal.lib._

case class filterBundle[T0 <: Data, T1 <: Data](inDataType: HardType[T0], outDataType: HardType[T1]) extends Bundle with IMasterSlave{
    val filter_data_in = Flow(inDataType)
    val filter_data_out = Flow(outDataType)
    val filter_clc = Bool()

    override def asMaster(): Unit = {
        master(filter_data_out)
        slave(filter_data_in)
        in(filter_clc)
    }

    override type RefOwnerType = this.type
}

