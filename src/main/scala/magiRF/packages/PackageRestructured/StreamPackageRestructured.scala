package magiRF.packages.PackageRestructured

import spinal.core._
import spinal.lib._
import utils.bus.AxiLite.AxiLite4Config
import utils.bus.AxiStream4.{AxiStream4, AxiStream4Config, AxiStream4SpecRenamer}

case class StreamPackageRestructuredConfig(
                                          pkgDataWidth      : Int,
                                          streamDataWidth   : Int,
                                          endianness        : Endianness = LITTLE,

                                          axisIDWidth       : Int = -1,
                                          userWidth         : Int = -1,
                                          useID             : Boolean = false,
                                          useKeep           : Boolean = false,
                                          useStrb           : Boolean = false
                                          ){
    def pkgDataType: Bits = Bits(pkgDataWidth bits)
    def streamDataType: Bits = Bits(streamDataWidth bits)
    def cntLimit: Int = streamDataWidth / pkgDataWidth
    def cntDataType: UInt = UInt(log2Up(cntLimit + 1) bits)
    def axisConfig:  AxiStream4Config = AxiStream4Config(
        dataWidth = streamDataWidth,
        idWidth = axisIDWidth,
        userWidth = userWidth,
        useID = useID,
        useKeep = useKeep,
        useStrb = useStrb
    )

}

case class StreamPackageRestructured(config: StreamPackageRestructuredConfig) extends Component {
    val io = new Bundle{
        val pkg_data = slave(Stream(Fragment(config.pkgDataType)))
        val stream_data = master(AxiStream4(config.axisConfig))
    }
    noIoPrefix()
    AxiStream4SpecRenamer(io.stream_data)

    val keep_buf = if(config.useKeep) Vec(Reg(config.axisConfig.keepType), 2) else null
    val strb_buf = if(config.useStrb) Vec(Reg(config.axisConfig.strbType), 2) else null
    val data_buf = Vec(Reg(config.axisConfig.dataType), 2)

    val buf_select = Reg(UInt(1 bits)) init(0)
    val pkg_last = Reg(Bool()) init(False)

    val buf_valid = Reg(Bool()) init(False)
    val buf_cnt = Reg(config.cntDataType) init(0)

    val pkg_data_halt = Reg(Bool()) init(False)

    when(io.pkg_data.fire || pkg_last){
        when(io.stream_data.stream.fire && pkg_last){
            pkg_last := False
            pkg_data_halt := False
        }.elsewhen(io.pkg_data.last){
            pkg_last := True
            pkg_data_halt := True
        }
        when(pkg_last){
            if(config.endianness == LITTLE){
                if(config.useKeep) keep_buf(buf_select) := keep_buf(buf_select) |>> 1
                if(config.useStrb) strb_buf(buf_select) := strb_buf(buf_select) |>> 1
                data_buf(buf_select) := (B(0, config.pkgDataWidth bits) ## data_buf(buf_select)).resizeLeft(config.axisConfig.dataWidth)
            }else{
                if(config.useKeep) keep_buf(buf_select) := keep_buf(buf_select) |<< 1
                if(config.useStrb) strb_buf(buf_select) := strb_buf(buf_select) |<< 1
                data_buf(buf_select) := (data_buf(buf_select) ## B(0, config.pkgDataWidth bits)).resized
            }
        }.otherwise{
            if(config.endianness == LITTLE){
                if(config.useKeep) keep_buf(buf_select) := (io.pkg_data.valid.asBits ## keep_buf(buf_select)).resizeLeft(config.axisConfig.keepType.getBitsWidth)
                if(config.useStrb) strb_buf(buf_select) := (io.pkg_data.valid.asBits ## strb_buf(buf_select)).resizeLeft(config.axisConfig.keepType.getBitsWidth)
                data_buf(buf_select) := (io.pkg_data.fragment ## data_buf(buf_select)).resizeLeft(config.axisConfig.dataWidth)
            }else{
                if(config.useKeep) keep_buf(buf_select) := (keep_buf(buf_select) ## io.pkg_data.valid.asBits).resized
                if(config.useStrb) strb_buf(buf_select) := (strb_buf(buf_select) ## io.pkg_data.valid.asBits).resized
                data_buf(buf_select) := (data_buf(buf_select) ## io.pkg_data.fragment).resized
            }
        }
        when(buf_cnt === config.cntLimit - 1){
            buf_cnt := 0
            buf_select := buf_select + 1
            buf_valid := True
        }.otherwise{
            buf_cnt := buf_cnt + 1
            buf_valid := False
        }
    }

    io.pkg_data.ready := io.stream_data.stream.ready && (~pkg_data_halt)

    io.stream_data.stream.valid := buf_valid
    if(config.useKeep) io.stream_data.stream.keep_ := keep_buf(~buf_select)
    if(config.useStrb) io.stream_data.stream.strb := strb_buf(~buf_select)
    if(config.useID) io.stream_data.stream.id := 1
    io.stream_data.stream.data := data_buf(~buf_select)
    io.stream_data.stream.last := pkg_last
}
