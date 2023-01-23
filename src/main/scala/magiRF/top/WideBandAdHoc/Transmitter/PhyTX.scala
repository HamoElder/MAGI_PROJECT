package magiRF.top.WideBandAdHoc.Transmitter

import magiRF.packages.Coder.Convolutional.Encoder.ConvEncoder
import magiRF.packages.Scramble.Scrambler
import magiRF.top.WideBandAdHoc.Config._
import spinal.core._
import spinal.lib._
import utils.common.CRC.{Crc, CrcKind}
import utils.common.Divider.UnsignedDivider
import utils.common.Mux.FlowMux

object PhysicalChannel extends SpinalEnum{
    val PBCH, PCCH, PTCH = newElement()
}

object ChannelCodingMethod extends SpinalEnum{
    val Turbo, TailedConvolutional = newElement()
}

case class BlockSegmentMessage() extends Bundle with IMasterSlave{

    val segment_length = blockSegmentLenDataType
    val segment_code_type = ChannelCodingMethod()
    override def asMaster(): Unit = {
        out(segment_length, segment_code_type)
    }

    override type RefOwnerType = this.type
}

case class BlockMessage() extends Bundle with IMasterSlave{
    val pkg_type = PhysicalChannel()
    val pkg_length = blockLenDataType
    val rnti_scramble = UInt(16 bits)
    override def asMaster(): Unit = {
        out(pkg_type, pkg_length, rnti_scramble)
    }

    override type RefOwnerType = this.type
}
case class TxCrcUnit(crc_config: CrcKind) extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
    }
    noIoPrefix()
    val emitCrc = RegInit(False) setWhen(io.raw_data.lastFire) clearWhen(io.result_data.lastFire)
    val counterDataWidth = log2Up((crc_config.polynomialWidth) / phyDataWidth)
    val counterLimit = crc_config.polynomialWidth / phyDataWidth - 1
    val counter = if(counterDataWidth > 0) Reg(UInt(counterDataWidth bits)) init(counterLimit) else null
    val crc_core = Crc(crc_config, phyDataWidth)

    crc_core.io.input << io.raw_data.toFlowFire.translateWith(io.raw_data.fragment)
    crc_core.io.flush := io.result_data.lastFire

    io.result_data.last := False
    when(!emitCrc) {
        io.result_data.valid := io.raw_data.valid
        io.result_data.fragment := io.raw_data.fragment
        io.raw_data.ready := io.result_data.ready
        if(counterDataWidth > 0){
            counter := counterLimit
        }
    }.otherwise {
        io.raw_data.ready := False
        io.result_data.valid := True
        if(counterDataWidth > 0){
            io.result_data.fragment := crc_core.io.result.subdivideIn(phyDataWidth bits).read(counter)
            when(counter === 0) {
                io.result_data.last := True
                when(io.result_data.ready) {
                    emitCrc := False
                }
            }
            when(io.result_data.ready) {
                counter := counter - 1
            }
        }else{
            io.result_data.fragment := crc_core.io.result.resized
            io.result_data.last := True
            when(io.result_data.ready) {
                emitCrc := False
            }
        }

    }
}

case class TxCrcAttachment() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
        val block_msg_ctrl_in = slave(Stream(BlockMessage()))
        val block_msg_ctrl_out = master(Stream(BlockMessage()))
    }
    noIoPrefix()

    val ctrl_in_enable = Reg(Bool()) init(True)
    val message = Reg(BlockMessage())
    val ctrl_out_valid = Reg(Bool()) init(False)
    when(io.block_msg_ctrl_in.fire){
        ctrl_in_enable := False
        message.pkg_type := io.block_msg_ctrl_in.pkg_type
        message.pkg_length := io.block_msg_ctrl_in.pkg_length + ((io.block_msg_ctrl_in.pkg_type === PhysicalChannel.PCCH) ? U(16) | U(24))
        message.rnti_scramble := io.block_msg_ctrl_in.rnti_scramble
        ctrl_out_valid := True
    }.otherwise{
        when(io.result_data.lastFire){
            ctrl_in_enable := True
        }
        when(io.block_msg_ctrl_out.fire){
            ctrl_out_valid := False
        }
    }
    io.block_msg_ctrl_in.ready := ctrl_in_enable && io.block_msg_ctrl_out.ready
    io.block_msg_ctrl_out.payload := message
    io.block_msg_ctrl_out.valid := ctrl_out_valid

    val path_sel = message.pkg_type === PhysicalChannel.PCCH
    val crc_raw_halt = Reg(Bool()) init(True)
    when(io.block_msg_ctrl_out.fire){
        crc_raw_halt := False
    }.otherwise{
        when(io.raw_data.lastFire){
            crc_raw_halt := True
        }
    }
    val crc24a_core = TxCrcUnit(CRC24AConfig)
    val crc16_core = TxCrcUnit(CRC16Config)

    val raw_data_demux: Vec[Stream[Fragment[Bits]]] = StreamDemux(io.raw_data.haltWhen(crc_raw_halt), path_sel.asUInt, 2)
    crc24a_core.io.raw_data << raw_data_demux(0)
    crc16_core.io.raw_data << raw_data_demux(1)

    val result_data_vec: Vec[Stream[Fragment[Bits]]] = Vec(crc24a_core.io.result_data, crc16_core.io.result_data)
    io.result_data << StreamMux(path_sel.asUInt, result_data_vec)
}

case class PBCHCrcAttachment() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val block_msg = slave(Stream(BlockMessage()))
        val result_data = master(Stream(Fragment(crcDataType)))
        val segment_msg = master(Stream(BlockSegmentMessage()))
        val is_last_block = out(Bool())
    }
    noIoPrefix()
    object PBCHCrcAttachmentStatus extends SpinalEnum {
        val IDLE, CTRL_EMIT, ZERO_PADDING, BYPASS = newElement()
    }
    val state = Reg(PBCHCrcAttachmentStatus()) init(PBCHCrcAttachmentStatus.IDLE)
    val segment_message = Reg(BlockSegmentMessage())
    val block_msg_enable = Reg(Bool()) init(True)
    val zero_padding_cnt = Reg(blockSegmentLenDataType) init(0)

    switch(state){
        is(PBCHCrcAttachmentStatus.IDLE){
            when(io.block_msg.fire){
                when(io.block_msg.pkg_length < blockSegmentLenMin){
                    zero_padding_cnt := (blockSegmentLenMin - io.block_msg.pkg_length).resized
                    segment_message.segment_length := blockSegmentLenMin
                }.otherwise{
                    zero_padding_cnt := 0
                    segment_message.segment_length := io.block_msg.pkg_length.resized
                }

                state := PBCHCrcAttachmentStatus.CTRL_EMIT
                block_msg_enable := False
            }.otherwise{
                block_msg_enable := True
            }
            segment_message.segment_code_type := ChannelCodingMethod.Turbo
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PBCHCrcAttachmentStatus.CTRL_EMIT){
            when(io.segment_msg.fire){
                state := (zero_padding_cnt === 0) ? PBCHCrcAttachmentStatus.BYPASS | PBCHCrcAttachmentStatus.ZERO_PADDING
            }
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PBCHCrcAttachmentStatus.ZERO_PADDING){
            when(io.result_data.fire){
                zero_padding_cnt := zero_padding_cnt - 1
                when(zero_padding_cnt === 1) {
                    state := PBCHCrcAttachmentStatus.BYPASS
                }
            }
            io.result_data.valid := True
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PBCHCrcAttachmentStatus.BYPASS){
            when(io.result_data.lastFire){
                state := PBCHCrcAttachmentStatus.IDLE
                block_msg_enable := True
            }
            io.result_data.valid := io.raw_data.valid
            io.result_data.last := io.raw_data.last
            io.result_data.fragment := B(1) ## io.raw_data.fragment
        }
    }
    io.is_last_block := True
    io.block_msg.ready := block_msg_enable && io.segment_msg.ready
    io.segment_msg.valid := state === PBCHCrcAttachmentStatus.CTRL_EMIT
    io.segment_msg.payload := segment_message
    io.raw_data.ready := state === PBCHCrcAttachmentStatus.BYPASS

}

case class PCCHCrcAttachment() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val block_msg = slave(Stream(BlockMessage()))
        val result_data = master(Stream(Fragment(crcDataType)))
        val segment_msg = master(Stream(BlockSegmentMessage()))
        val is_last_block = out(Bool())
    }
    noIoPrefix()

    object PCCHCrcAttachmentStatus extends SpinalEnum {
        val IDLE, CTRL_EMIT, ZERO_PADDING, BYPASS, SCRAMBLE = newElement()
    }
    val state = Reg(PCCHCrcAttachmentStatus()) init(PCCHCrcAttachmentStatus.IDLE)
    val segment_message = Reg(BlockSegmentMessage())
    val block_msg_enable = Reg(Bool()) init(True)
    val zero_padding_cnt = Reg(blockSegmentLenDataType) init(0)
    val rnti = Reg(UInt(16 bits)) init(0)
    val xor_bit = rnti((segment_message.segment_length - 1).resized).asBits
    switch(state){
        is(PCCHCrcAttachmentStatus.IDLE) {
            when(io.block_msg.fire) {
                when(io.block_msg.pkg_length < blockSegmentLenMin) {
                    zero_padding_cnt := (blockSegmentLenMin - io.block_msg.pkg_length).resized
                    segment_message.segment_length := blockSegmentLenMin
                }.otherwise {
                    zero_padding_cnt := 0
                    segment_message.segment_length := io.block_msg.pkg_length.resized
                }
                state := PCCHCrcAttachmentStatus.CTRL_EMIT
                block_msg_enable := False
            }.otherwise {
                block_msg_enable := True
            }
            rnti := io.block_msg.rnti_scramble
            segment_message.segment_code_type := ChannelCodingMethod.TailedConvolutional
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PCCHCrcAttachmentStatus.CTRL_EMIT) {
            when(io.segment_msg.fire) {
                state := (zero_padding_cnt === 0) ? PCCHCrcAttachmentStatus.BYPASS | PCCHCrcAttachmentStatus.ZERO_PADDING
            }
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PCCHCrcAttachmentStatus.ZERO_PADDING) {
            when(io.result_data.fire) {
                zero_padding_cnt := zero_padding_cnt - 1
                segment_message.segment_length :=  segment_message.segment_length - 1
                when(zero_padding_cnt === 1) {
                    state := PCCHCrcAttachmentStatus.BYPASS
                }
            }
            io.result_data.valid := True
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PCCHCrcAttachmentStatus.BYPASS) {
            when(io.result_data.fire) {
                when( segment_message.segment_length === 16){
                    state := PCCHCrcAttachmentStatus.SCRAMBLE
                }
                segment_message.segment_length :=  segment_message.segment_length - 1
            }
            io.result_data.valid := io.raw_data.valid
            io.result_data.last := False
            io.result_data.fragment := B(1) ## io.raw_data.fragment
        }
        is(PCCHCrcAttachmentStatus.SCRAMBLE){
            when(io.result_data.lastFire) {
                state := PCCHCrcAttachmentStatus.IDLE
                block_msg_enable := True
            }
            when(io.result_data.fire){
                segment_message.segment_length :=  segment_message.segment_length - 1
            }
            io.result_data.valid := io.raw_data.valid
            io.result_data.last := io.raw_data.last
            io.result_data.fragment := B(1) ## (io.raw_data.fragment ^ xor_bit)
        }
    }
    io.is_last_block := True
    io.block_msg.ready := block_msg_enable && io.segment_msg.ready
    io.segment_msg.valid := state === PCCHCrcAttachmentStatus.CTRL_EMIT
    io.segment_msg.payload := segment_message
    io.raw_data.ready := (state === PCCHCrcAttachmentStatus.BYPASS) || (state === PCCHCrcAttachmentStatus.SCRAMBLE)
}

case class PSCHCrcAttachment() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val block_msg = slave(Stream(BlockMessage()))
        val result_data = master(Stream(Fragment(crcDataType)))
        val segment_msg = master(Stream(BlockSegmentMessage()))
        val is_last_block = out(Bool())
    }
    noIoPrefix()

    object PSCHCrcAttachmentStatus extends SpinalEnum{
        val IDLE, CALC_NUM, CALC_K, CALC_C_F, MATCH_SIZE, CTRL_EMIT, ZERO_PADDING, BYPASS = newElement()
    }
    val state = Reg(PSCHCrcAttachmentStatus()) init(PSCHCrcAttachmentStatus.IDLE)
    val segment_message = Reg(BlockSegmentMessage())
    val block_msg_enable = Reg(Bool()) init(False)
    val zero_padding_cnt = Reg(blockSegmentLenDataType)
    val payload_cnt = Reg(blockSegmentLenDataType)
    val emit_step = Reg(Bool())
    val crc_mode = Reg(Bool())

    val C = Reg(blockSegmentNumDataType)
    val Cp = Reg(blockSegmentNumDataType)
    val Cn = Reg(blockSegmentNumDataType)
    val Kp = Reg(blockSegmentLenDataType)
    val Kn = Reg(blockSegmentLenDataType)
    val F = Reg(blockLenDataType)
    val shift_step = Reg(UInt(3 bits))

    val crc24b_core = TxCrcUnit(CRC24BConfig)
    val unsigned_divider = UnsignedDivider(blockLenDataWidth, blockSegmentLenDataWidth, usePipeline = false)
    val numerator = Reg(UInt(blockLenDataWidth bits))
    val denominator = Reg(UInt(blockSegmentLenDataWidth bits))
    val divide_enable = Reg(Bool()) init(False)

    unsigned_divider.io.cmd.numerator := numerator
    unsigned_divider.io.cmd.denominator := denominator
    unsigned_divider.io.cmd.valid := divide_enable
    unsigned_divider.io.rsp.ready := True
    unsigned_divider.io.flush := False

    val code_block_resized = blockSegmentLenDataType
    switch((segment_message.segment_length >> 9)) {
        is(0) {
            code_block_resized := (segment_message.segment_length((blockSegmentLenDataWidth - 1) downto 3) + (segment_message.segment_length(2 downto 0) =/= 0).asUInt) @@ U(0, 3 bits)
        }
        is(1) {
            code_block_resized := (segment_message.segment_length((blockSegmentLenDataWidth - 1) downto 4) + (segment_message.segment_length(3 downto 0) =/= 0).asUInt) @@ U(0, 4 bits)
        }
        is(2) {
            code_block_resized := (segment_message.segment_length((blockSegmentLenDataWidth - 1) downto 5) + (segment_message.segment_length(4 downto 0) =/= 0).asUInt) @@ U(0, 5 bits)
        }
        default {
            code_block_resized := (segment_message.segment_length((blockSegmentLenDataWidth - 1) downto 6) + (segment_message.segment_length(5 downto 0) =/= 0).asUInt) @@ U(0, 6 bits)
        }
    }
    val Kp_temp = blockSegmentLenDataType
    val Kn_temp = blockSegmentLenDataType
    val shift_step_temp = UInt(3 bits)
    switch((unsigned_divider.io.rsp.quotient.resize(blockSegmentLenDataWidth)) >> 9){
        is(0){
            Kn_temp := unsigned_divider.io.rsp.quotient((blockSegmentLenDataWidth - 1) downto 3) @@ U(0, 3 bits)
            Kp_temp := Kn_temp + 8
            shift_step_temp := 3
        }
        is(1){
            Kn_temp := unsigned_divider.io.rsp.quotient((blockSegmentLenDataWidth - 1) downto 4) @@ U(0, 4 bits)
            Kp_temp := Kn_temp + 16
            shift_step_temp := 4
        }
        is(2){
            Kn_temp := unsigned_divider.io.rsp.quotient((blockSegmentLenDataWidth - 1) downto 5) @@ U(0, 5 bits)
            Kp_temp := Kn_temp + 32
            shift_step_temp := 5
        }
        default{
            Kn_temp := unsigned_divider.io.rsp.quotient((blockSegmentLenDataWidth - 1) downto 6) @@ U(0, 6 bits)
            Kp_temp := Kn_temp + 64
            shift_step_temp := 6
        }
    }

    val segment_num = unsigned_divider.io.rsp.quotient.resize(blockSegmentNumDataWidth) + (unsigned_divider.io.rsp.remainder =/= 0).asUInt
    switch(state){
        is(PSCHCrcAttachmentStatus.IDLE){
            when(io.block_msg.fire){
                when(io.block_msg.pkg_length < blockSegmentLenMin){
                    zero_padding_cnt := (blockSegmentLenMin - io.block_msg.pkg_length).resized
                    segment_message.segment_length := blockSegmentLenMin
                    state := PSCHCrcAttachmentStatus.CTRL_EMIT
                    crc_mode := False
                }.elsewhen(io.block_msg.pkg_length <= blockSegmentLenMax) {
                    segment_message.segment_length := io.block_msg.pkg_length.resized
                    state := PSCHCrcAttachmentStatus.MATCH_SIZE
                    crc_mode := False
                }.otherwise{
                    state := PSCHCrcAttachmentStatus.CALC_NUM
                    divide_enable := True
                    crc_mode := True
                }
                block_msg_enable := False
            }.otherwise{
                block_msg_enable := True
            }
            segment_message.segment_code_type := ChannelCodingMethod.Turbo
            numerator := io.block_msg.pkg_length
            denominator := (blockSegmentLenMax - 24)
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PSCHCrcAttachmentStatus.CALC_NUM){
            when(unsigned_divider.io.cmd.fire){
                divide_enable := False
            }
            when(unsigned_divider.io.rsp.fire){
                state := PSCHCrcAttachmentStatus.CALC_K
                C := segment_num
                numerator := numerator + (segment_num << 4) + (segment_num << 3)
                denominator := segment_num.resized
                divide_enable := True
            }
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0

        }
        is(PSCHCrcAttachmentStatus.CALC_K){
            when(unsigned_divider.io.cmd.fire){
                divide_enable := False
            }
            when(unsigned_divider.io.rsp.fire){
                Kp := Kp_temp
                Kn := Kn_temp
                shift_step := shift_step_temp
                state := PSCHCrcAttachmentStatus.CALC_C_F
            }
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
            emit_step := False
        }
        is(PSCHCrcAttachmentStatus.CALC_C_F){
            when(emit_step){
                when(Cn === 0) {
                    segment_message.segment_length := Kp
                }.otherwise {
                    segment_message.segment_length := Kn
                }
                Cp := C - Cn
                zero_padding_cnt := (F - (Cn << shift_step)).resized
                state := PSCHCrcAttachmentStatus.CTRL_EMIT
            }.otherwise{
                emit_step := True
                F := (C * Kp - numerator).resized
                Cn := ((Kp * C - numerator) >> shift_step).resized
            }

            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PSCHCrcAttachmentStatus.MATCH_SIZE){
            segment_message.segment_length := code_block_resized
            zero_padding_cnt := code_block_resized - segment_message.segment_length
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
            state := PSCHCrcAttachmentStatus.CTRL_EMIT
        }
        is(PSCHCrcAttachmentStatus.CTRL_EMIT){
            when(io.segment_msg.fire){
                when(crc_mode){
                    when(Cn === 0) {
                        segment_message.segment_length := Kp
                        payload_cnt := Kp
                        Cp := Cp - 1
                    }.otherwise {
                        segment_message.segment_length := Kn
                        payload_cnt := Kn
                        Cn := Cn - 1
                    }
                    when((Cp === 1) && (Cn === 0)){
                        C := 1
                    }
                }
                state := (zero_padding_cnt === 0) ? PSCHCrcAttachmentStatus.BYPASS | PSCHCrcAttachmentStatus.ZERO_PADDING
            }
            io.result_data.valid := False
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PSCHCrcAttachmentStatus.ZERO_PADDING){
            when(io.result_data.fire){
                zero_padding_cnt := zero_padding_cnt - 1
                when(crc_mode){
                    payload_cnt := payload_cnt - 1
                }
                when(zero_padding_cnt === 1){
                    state := PSCHCrcAttachmentStatus.BYPASS
                }
            }
            io.result_data.valid := True
            io.result_data.last := False
            io.result_data.fragment := 0
        }
        is(PSCHCrcAttachmentStatus.BYPASS){
            when(crc_mode){
                when(io.result_data.fire) {
                    payload_cnt := payload_cnt - 1
                    when(payload_cnt === 1){
                        state := io.is_last_block ? PSCHCrcAttachmentStatus.IDLE | PSCHCrcAttachmentStatus.CTRL_EMIT
                    }
                }
                io.result_data.valid := crc24b_core.io.result_data.valid
                io.result_data.last := crc24b_core.io.result_data.last
                io.result_data.fragment := B(1) ## crc24b_core.io.result_data.fragment
            }.otherwise{
                when(io.result_data.lastFire) {
                    state := PSCHCrcAttachmentStatus.IDLE
                    block_msg_enable := True
                }
                io.result_data.valid := io.raw_data.valid
                io.result_data.last := io.raw_data.last
                io.result_data.fragment := B(1) ## io.raw_data.fragment
            }

        }
    }
    io.is_last_block := crc_mode ?  (C === 1) | True
    crc24b_core.io.raw_data.valid := (state === PSCHCrcAttachmentStatus.BYPASS) && crc_mode
    crc24b_core.io.raw_data.fragment := io.raw_data.fragment
    crc24b_core.io.raw_data.last := (payload_cnt === 25) && crc_mode
    crc24b_core.io.result_data.ready := io.result_data.ready && (state === PSCHCrcAttachmentStatus.BYPASS) && crc_mode

    io.block_msg.ready := block_msg_enable && io.segment_msg.ready
    io.segment_msg.valid := state === PSCHCrcAttachmentStatus.CTRL_EMIT
    io.segment_msg.payload := segment_message
    io.raw_data.ready := crc_mode ? ((state === PSCHCrcAttachmentStatus.BYPASS) && crc24b_core.io.raw_data.ready) | (state === PSCHCrcAttachmentStatus.BYPASS)
}

case class CrcBlockSegmentation() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(crcDataType)))
        val block_msg = slave(Stream(BlockMessage()))
        val segment_msg = master(Stream(BlockSegmentMessage()))
    }
    noIoPrefix()

    object BlockSegmentStatus extends SpinalEnum {
        val IDLE, BYPASS = newElement()
    }
    val data_fifo = StreamFifo(Fragment(phyDataType), 16)
    val msg_fifo = StreamFifo(BlockMessage(), 4)
    val sel_cha = Reg(UInt(2 bits))
    val finish_indicator = UInt(4 bits)

    val broadcast_channel_segment = new PBCHCrcAttachment()
    val control_channel_segment = new PCCHCrcAttachment()
    val shared_channel_segment = new PSCHCrcAttachment()

    val state = Reg(BlockSegmentStatus()) init(BlockSegmentStatus.IDLE)
    switch(state){
        is(BlockSegmentStatus.IDLE){
            when(msg_fifo.io.pop.valid){
                state := BlockSegmentStatus.BYPASS
                sel_cha := msg_fifo.io.pop.pkg_type.asBits.asUInt.resized
            }
        }
        is(BlockSegmentStatus.BYPASS){
            when(io.result_data.lastFire && finish_indicator(sel_cha)){
                state := BlockSegmentStatus.IDLE
            }
        }
    }

    data_fifo.io.push << io.raw_data
    msg_fifo.io.push << io.block_msg
    val raw_data_demux: Vec[Stream[Fragment[Bits]]] = StreamDemux(data_fifo.io.pop.haltWhen(state === BlockSegmentStatus.IDLE), sel_cha, 3)
    val msg_demux: Vec[Stream[BlockMessage]] = StreamDemux(msg_fifo.io.pop.haltWhen(state === BlockSegmentStatus.IDLE), sel_cha, 3)

    broadcast_channel_segment.io.block_msg << msg_demux(0)
    control_channel_segment.io.block_msg << msg_demux(1)
    shared_channel_segment.io.block_msg << msg_demux(2)

    finish_indicator(0) := broadcast_channel_segment.io.is_last_block
    finish_indicator(1) := control_channel_segment.io.is_last_block
    finish_indicator(2) := shared_channel_segment.io.is_last_block
    finish_indicator(3) := False

    broadcast_channel_segment.io.raw_data << raw_data_demux(0)
    control_channel_segment.io.raw_data << raw_data_demux(1)
    shared_channel_segment.io.raw_data << raw_data_demux(2)

    val result_data_vec = Vec(broadcast_channel_segment.io.result_data, control_channel_segment.io.result_data, shared_channel_segment.io.result_data)
    val segment_msg_vec = Vec(broadcast_channel_segment.io.segment_msg, control_channel_segment.io.segment_msg, shared_channel_segment.io.segment_msg)
    io.result_data << StreamMux(sel_cha, result_data_vec)
    io.segment_msg << StreamMux(sel_cha, segment_msg_vec)
}


case class TailedConvCodeEncoder() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(crcDataType)))
        val result_data = master(Flow(Fragment(codedWithIndicateDataType)))
    }
    noIoPrefix()
    val tailed_conv_encoder = ConvEncoder(lte_conv_encoder_config)
    val isEncoding = Reg(Bool()) init (False)
    val loaded_tail_bits = Reg(Bool()) init (False)
    val tail_bits = Reg(lte_conv_encoder_config.regDataType)
    val data_fifo = StreamFifo(Fragment(phyDataType), (blockSegmentLenMax/phyDataWidth) + 1)
    data_fifo.io.push.valid := io.raw_data.valid && (!isEncoding)
    io.raw_data.ready := data_fifo.io.push.ready && (!isEncoding)
    data_fifo.io.push.last := io.raw_data.last
    data_fifo.io.push.fragment := io.raw_data.fragment(0).asBits

    when(io.raw_data.lastFire){
        loaded_tail_bits := True
    }.otherwise{
        loaded_tail_bits := False
    }
    when(loaded_tail_bits){
        isEncoding := True
    }.elsewhen(data_fifo.io.pop.lastFire){
        isEncoding := False
    }
    when(io.raw_data.fire){
        tail_bits := (io.raw_data.fragment(0).asBits ## tail_bits).resizeLeft(tail_bits.getBitsWidth)
    }

    when(isEncoding) {
        data_fifo.io.pop.ready := tailed_conv_encoder.io.raw_data.ready
        tailed_conv_encoder.io.raw_data.valid := data_fifo.io.pop.valid
        tailed_conv_encoder.io.raw_data.fragment := data_fifo.io.pop.fragment
        tailed_conv_encoder.io.raw_data.last := data_fifo.io.pop.last
    }.otherwise {
        data_fifo.io.pop.ready := False
        tailed_conv_encoder.io.raw_data.valid := False
        tailed_conv_encoder.io.raw_data.fragment := 0
        tailed_conv_encoder.io.raw_data.last := False
    }
    when(io.raw_data.lastFire){
        tailed_conv_encoder.io.tail_bits.payload := (io.raw_data.fragment(0).asBits ## tail_bits).resizeLeft(lte_conv_encoder_config.regWidth)
        tailed_conv_encoder.io.tail_bits.valid := True
    }.otherwise{
        tailed_conv_encoder.io.tail_bits.payload := 0
        tailed_conv_encoder.io.tail_bits.valid := False
    }

    io.result_data.valid := tailed_conv_encoder.io.coded_data.valid
    io.result_data.last := tailed_conv_encoder.io.coded_data.last
    io.result_data.fragment := B(1) ## tailed_conv_encoder.io.coded_data.fragment
}

case class TurboEncoder() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(crcDataType)))
        val result_data = master(Flow(Fragment(codedWithIndicateDataType)))
    }
    noIoPrefix()

    io.result_data.last := io.raw_data.last
    io.result_data.valid := io.raw_data.valid
    io.raw_data.ready := True

    io.result_data.fragment := B(1, 2 bits) ## io.raw_data.fragment
}

case class ChannelCoding() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(crcDataType)))
        val segment_msg = slave(Stream(BlockSegmentMessage()))
        val result_data = master(Stream(Fragment(codedWithIndicateDataType)))
        val coded_msg = master(Stream(BlockSegmentMessage()))
    }
    noIoPrefix()
    object ChannelCodingStatus extends SpinalEnum{
        val IDLE, CTRL_EMIT, BYPASS, PENDING = newElement()
    }
    val data_fifo = StreamFifo(Fragment(crcDataType), 32)
    val msg_fifo = StreamFifo(BlockSegmentMessage(), 4)
    val sel_cha = Reg(UInt(1 bits))

    val turbo_encoder = TurboEncoder()
    val tailed_conv_encoder = TailedConvCodeEncoder()

    val state = Reg(ChannelCodingStatus()) init(ChannelCodingStatus.IDLE)
    val message = Reg(BlockSegmentMessage())
    switch(state){
        is(ChannelCodingStatus.IDLE){
            when(msg_fifo.io.pop.fire){
                message.segment_code_type := msg_fifo.io.pop.segment_code_type
                message.segment_length := (msg_fifo.io.pop.segment_code_type === ChannelCodingMethod.TailedConvolutional) ? msg_fifo.io.pop.segment_length | (msg_fifo.io.pop.segment_length + 4)
                sel_cha := msg_fifo.io.pop.segment_code_type.asBits.asUInt
                state := ChannelCodingStatus.CTRL_EMIT
            }
        }
        is(ChannelCodingStatus.CTRL_EMIT) {
            when(io.coded_msg.fire){
                state := ChannelCodingStatus.BYPASS
            }
        }
        is(ChannelCodingStatus.BYPASS){
            when(data_fifo.io.pop.lastFire){
                state := ChannelCodingStatus.PENDING
            }
        }
        is(ChannelCodingStatus.PENDING){
            when(io.result_data.fire){
                state := ChannelCodingStatus.IDLE
            }
        }
    }
    io.coded_msg.payload := message
    io.coded_msg.valid := state === ChannelCodingStatus.CTRL_EMIT
    data_fifo.io.push << io.raw_data
    msg_fifo.io.push << io.segment_msg
    msg_fifo.io.pop.ready := state === ChannelCodingStatus.IDLE
    val raw_data_demux = StreamDemux(data_fifo.io.pop.continueWhen((state === ChannelCodingStatus.BYPASS) && io.result_data.ready), sel_cha, 2)

    turbo_encoder.io.raw_data << raw_data_demux(0)
    tailed_conv_encoder.io.raw_data << raw_data_demux(1)

    val result_data_mux = FlowMux(sel_cha, Vec(turbo_encoder.io.result_data, tailed_conv_encoder.io.result_data))
    io.result_data.valid := result_data_mux.valid
    io.result_data.fragment := result_data_mux.fragment
    io.result_data.last := result_data_mux.last
}

case class ConvolutionalRateMatchUnit() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(codedWithIndicateDataType)))
        val segment_length = slave(Stream(blockSegmentLenDataType))
        val result_data = master(Stream(Fragment(phyDataType)))
        val vector_length = in(interleavingOutputVectorLenDataType)
    }
    noIoPrefix()
    val interleaving_ram = Mem(codedWithIndicateDataType, (blockSegmentLenMax/phyDataWidth) + 1)
    val conv_perm_pattern = Mem(UInt(5 bits), initialContent = conv_perm_table) addAttribute("rom_style", "block")
    object ConvolutionalRateMatchUnitStatus extends SpinalEnum{
        val IDLE, PADDING_ZERO, WRITE_RAM, READ_RAM = newElement()
    }

    val state = Reg(ConvolutionalRateMatchUnitStatus()) init(ConvolutionalRateMatchUnitStatus.IDLE)
    val zero_padding_cnt = Reg(interleavingZeroPaddingDataType)
    val rows = Reg(interleavingRowsDataType)
    val write_addr = Reg(subBlockInterleavingAddrDataType)
    val read_addr = Reg(subBlockInterleavingAddrDataType)
    val read_row_cnt = Reg(interleavingRowsDataType)
    val pattern_cursor = Counter(conv_perm_seq.length)
    val vector_length_cnt = Reg(interleavingOutputVectorLenDataType)
    val bits_sel = Counter(codeRate)

    val willIncrement = False.allowOverride
    val read_addr_next = subBlockInterleavingAddrDataType

    val pattern: UInt = conv_perm_pattern.readSync(pattern_cursor)

    when(willIncrement){
        when(read_row_cnt === 1) {
            read_addr_next := pattern.resize(read_addr.getBitsWidth)
        }.otherwise {
            read_addr_next := read_addr + interleavingColumnsNum
        }
    }.otherwise{
        read_addr_next := read_addr
    }
    val rate_matched_output = interleaving_ram.readSync(read_addr_next)

    switch(state){
        is(ConvolutionalRateMatchUnitStatus.IDLE){
            when(io.segment_length.fire){
                state := (io.segment_length.payload(4 downto 0) === 0) ? ConvolutionalRateMatchUnitStatus.WRITE_RAM | ConvolutionalRateMatchUnitStatus.PADDING_ZERO
                rows := ((io.segment_length.payload >> 5) + (io.segment_length.payload(4 downto 0) =/= 0).asUInt).resized
                zero_padding_cnt := (io.segment_length.payload(4 downto 0) === 0) ? U(0) | (interleavingColumnsNum - io.segment_length.payload(4 downto 0)).resize(interleavingZeroPaddingDataType.getBitsWidth)
            }
            vector_length_cnt := io.vector_length
            write_addr := 0
            pattern_cursor.clear()
            bits_sel.value := 2
        }
        is(ConvolutionalRateMatchUnitStatus.PADDING_ZERO){
            when(zero_padding_cnt === 1){
                state := ConvolutionalRateMatchUnitStatus.WRITE_RAM
            }
            zero_padding_cnt := zero_padding_cnt - 1
            interleaving_ram.write(write_addr, B(0, codedDataWidth + 1 bits))
            write_addr := write_addr + 1
        }
        is(ConvolutionalRateMatchUnitStatus.WRITE_RAM){
            when(io.raw_data.fire){
                interleaving_ram.write(write_addr, io.raw_data.fragment)
                write_addr := write_addr + 1
                when(io.raw_data.last){
                    state := ConvolutionalRateMatchUnitStatus.READ_RAM
                    pattern_cursor.increment()
                }
            }
            read_addr := pattern.resized
            read_row_cnt := rows
        }
        is(ConvolutionalRateMatchUnitStatus.READ_RAM){
            read_addr := read_addr_next
            when(io.result_data.fire){
                vector_length_cnt := vector_length_cnt - 1
                when(io.result_data.last) {
                    state := ConvolutionalRateMatchUnitStatus.IDLE
                }
            }
            when(io.result_data.fire || rate_matched_output(3) === False){
                when(read_row_cnt === 1) {
                    read_row_cnt := rows
                    pattern_cursor.increment()
                    when(pattern_cursor.willOverflowIfInc){
                        bits_sel.increment()
                    }
                }.otherwise {
                    read_row_cnt := read_row_cnt - 1
                }
                willIncrement := True
            }
        }
    }
    io.raw_data.ready := (state === ConvolutionalRateMatchUnitStatus.WRITE_RAM)
    io.segment_length.ready := (state === ConvolutionalRateMatchUnitStatus.IDLE)
    io.result_data.fragment := rate_matched_output(bits_sel).asBits
    io.result_data.last := (vector_length_cnt === 1)
    io.result_data.valid := (state === ConvolutionalRateMatchUnitStatus.READ_RAM) && rate_matched_output(3)
}

case class RateMatching() extends Component{
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(codedWithIndicateDataType)))
        val coded_msg = slave(Stream(BlockSegmentMessage()))
        val result_data = master(Stream(Fragment(phyDataType)))
        val matched_length = slave(Stream(interleavingOutputVectorLenDataType))
    }
    noIoPrefix()

    object RateMatchingStatus extends SpinalEnum {
        val IDLE, LENGTH_RECV, BYPASS = newElement()
    }
    val conv_rate_match = ConvolutionalRateMatchUnit()

    val state = Reg(RateMatchingStatus()) init(RateMatchingStatus.IDLE)
    switch(state){
        is(RateMatchingStatus.IDLE){
            when(io.coded_msg.fire){
                state := RateMatchingStatus.LENGTH_RECV
            }
        }
        is(RateMatchingStatus.LENGTH_RECV){
            when(io.matched_length.fire){

            }
        }
        is(RateMatchingStatus.BYPASS){
            when(io.result_data.fire){
                state := RateMatchingStatus.IDLE
            }
        }
    }
}

case class LayerMapping() extends Component{
    val io = new Bundle{
        val raw_data_0 = slave(Stream(Fragment(phyDataType)))
        val raw_data_1 = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Flow(Fragment(phyDataType)))
        val layer_num_is1 = in(Bool())
        val code_num_is1 = in(Bool())
    }
    noIoPrefix()
//    switch()

}

case class GoldSeqScrambler() extends Component {
    val io = new Bundle{
        val raw_data = slave(Stream(Fragment(phyDataType)))
        val result_data = master(Stream(Fragment(phyDataType)))
        val scrambler_1_init_state =  in(Bits(scramblerRegWidth bits))
    }
    noIoPrefix()
    val scrambler_0 = Scrambler(phyDataWidth, scramblerRegWidth, scramblePoly0)
    val scrambler_1 = Scrambler(phyDataWidth, scramblerRegWidth, scaramblePoly1)

    object GoldSeqScramblerStatus extends SpinalEnum{
        val IDLE, SCRAMBLING, FINAL = newElement()
    }
    val gold_seq_scarambler_status = Reg(GoldSeqScramblerStatus()) init(GoldSeqScramblerStatus.IDLE)
    val scarambler_data = scrambler_0.io.scram_data.payload ^ scrambler_1.io.scram_data.payload
    io.result_data.valid := False
    io.result_data.fragment := scarambler_data ^ io.raw_data.fragment
    io.result_data.last := io.raw_data.last
    io.raw_data.ready := False
    scrambler_0.io.init_state.payload := 1
    scrambler_1.io.init_state.payload := io.scrambler_1_init_state

    switch(gold_seq_scarambler_status){
        is(GoldSeqScramblerStatus.IDLE){
            when(io.raw_data.valid){
                scrambler_0.io.init_state.valid := False
                scrambler_0.io.scram_data.ready := True
                scrambler_1.io.init_state.valid := False
                scrambler_1.io.scram_data.ready := True
                gold_seq_scarambler_status := GoldSeqScramblerStatus.SCRAMBLING
            }.otherwise {
                scrambler_0.io.init_state.valid := True
                scrambler_0.io.scram_data.ready := False
                scrambler_1.io.init_state.valid := True
                scrambler_1.io.scram_data.ready := False
            }
        }
        is(GoldSeqScramblerStatus.SCRAMBLING) {
            when(io.raw_data.lastFire) {
                gold_seq_scarambler_status := GoldSeqScramblerStatus.FINAL
            }
            io.raw_data.ready := io.result_data.ready
            scrambler_0.io.init_state.valid := False
            scrambler_0.io.scram_data.ready := io.raw_data.fire
            scrambler_1.io.init_state.valid := False
            scrambler_1.io.scram_data.ready := io.raw_data.fire
            io.result_data.valid := scrambler_0.io.scram_data.valid && scrambler_1.io.scram_data.valid && io.raw_data.valid
        }
        is(GoldSeqScramblerStatus.FINAL) {
            gold_seq_scarambler_status := GoldSeqScramblerStatus.IDLE
            scrambler_0.io.init_state.valid := True
            scrambler_0.io.scram_data.ready := False
            scrambler_1.io.init_state.valid := True
            scrambler_1.io.scram_data.ready := False
        }
    }
}


