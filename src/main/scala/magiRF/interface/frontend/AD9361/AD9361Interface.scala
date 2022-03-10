package magiRF.interface.frontend.AD9361

import magiRF.interface.misc.BlackBox.{BUFG, IBUFDS, IBUFGDS, IDDR, OBUFDS, ODDR}
import magiRF.interface.misc.LVDS.LVDS
import spinal.core._
import spinal.lib._
import utils.bus.IQBundle.IQBundle

case class AD9361Bundle() extends Bundle with IMasterSlave {
    def iqWidth: Int = 12
    def dataType: Bits = Bits(iqWidth bits)
    def interfaceWidth: Int = iqWidth / 2
    def interfaceDataType: Bits = Bits(interfaceWidth bits)

    val dac_data = Stream(Vec(IQBundle(dataType), 2))
    val dac_t1_mod = Bool()
    val adc_data = Flow(Vec(IQBundle(dataType), 2))
    val adc_r1_mod = Bool()
    val adc_error = Bool()
    /**
     * Physical Interface(Receive Channel)
     */
    val rx_if_frame = LVDS(Bool())
    val rx_if_data  = LVDS(interfaceDataType)
    val rx_data_clk = LVDS(Bool())
    /**
     * Physical Interface(Transmit Channel)
     */
    val tx_if_frame = LVDS(Bool())
    val tx_fb_clk = LVDS(Bool())
    val tx_if_data = LVDS(interfaceDataType)

    /**
     * Internal Clock
     */
    val data_clk = Bool()

    override def asMaster(): Unit = {
        master(adc_data, tx_if_frame, tx_fb_clk, tx_if_data)
        slave(dac_data, rx_if_frame, rx_if_data, rx_data_clk)
        in(dac_t1_mod, adc_r1_mod)
        out(adc_error, data_clk)
    }

    override type RefOwnerType = this.type
}

case class AD9361Interface() extends Component {
    def iqWidth: Int = 12
    def dataType: Bits = Bits(iqWidth bits)
    def interfaceWidth: Int = iqWidth / 2
    def interfaceDataType: Bits = Bits(interfaceWidth bits)

    val io = master(AD9361Bundle())

    noIoPrefix()
    val rx_clk_ibuf = IBUFGDS(io.rx_data_clk.p, io.rx_data_clk.n)
    val rx_clk = BUFG(rx_clk_ibuf)

    val rxClockDomain = ClockDomain(
        clock = rx_clk,
        reset = this.clockDomain.reset,
        config = ClockDomainConfig(
            clockEdge = this.clockDomain.config.clockEdge,
            resetKind = this.clockDomain.config.resetKind,
            resetActiveLevel = this.clockDomain.config.resetActiveLevel
        )
    )

    val rxClockArea = new ClockingArea(rxClockDomain){
        /**
         * AD9361 IP CORE
         */
        val rx_data_p_s = interfaceDataType
        val rx_data_n_s = interfaceDataType
        for(idx <- 0 until interfaceWidth){
            val rx_data_ibuf = IBUFDS(io.rx_if_data.p(idx), io.rx_if_data.n(idx))
            val iddr_data = IDDR(ClkEdge = "SAME_EDGE_PIPELINED", Q1Init = false, Q2Init = false, SRType = "ASYNC")
            iddr_data.io.CE <> True
            iddr_data.io.R <> False
            iddr_data.io.S <> False
            iddr_data.io.C <> rx_clk
            iddr_data.io.D <> rx_data_ibuf
            iddr_data.io.Q1 <> rx_data_p_s(idx)
            iddr_data.io.Q2 <> rx_data_n_s(idx)
        }
        val rx_frame_ibuf = IBUFDS(io.rx_if_frame.p, io.rx_if_frame.n)
        val rx_frame_p_s = Bool()
        val rx_frame_n_s = Bool()
        val iddr_frame = IDDR(ClkEdge = "SAME_EDGE_PIPELINED", Q1Init = false, Q2Init = false, SRType = "ASYNC")
        iddr_frame.io.CE <> True
        iddr_frame.io.R <> False
        iddr_frame.io.S <> False
        iddr_frame.io.C <> rx_clk
        iddr_frame.io.D <> rx_frame_ibuf
        iddr_frame.io.Q1 <> rx_frame_p_s
        iddr_frame.io.Q2 <> rx_frame_n_s

        /**
         * AD9361 RX Interface Logic
         */
        val rx_data_n: Bits = RegNext(rx_data_n_s) init(0)
        val rx_frame_n: Bool = RegNext(rx_frame_n_s) init(False)
        val rx_data: Bits = RegNext(rx_data_n ## rx_data_p_s) init(0)
        val rx_frame: Bits = RegNext(rx_frame_n.asBits ## rx_frame_p_s.asBits) init(0)
        val rx_frame_d: Bits = RegNext(rx_frame) init(0)
        val rx_data_d: Bits = RegNext(rx_data) init(0)
        val rx_frame_comb: Bits = rx_frame_d ## rx_frame
        /**
         * Receive data path for single rf channel, frame is expected to qualify i/q msb only
          */

        val rx_valid_r1: Bool = RegNext(rx_frame_comb===B"4'b1100") init(False)
        val rx_error_r1: Bool = Reg(Bool()) init(False)
        val rx_data_i_r1: Bits = Reg(dataType)
        val rx_data_q_r1: Bits = Reg(dataType)
        when(rx_frame_comb===B"4'b1100"){
            rx_error_r1 := !((rx_frame_comb===B"4'b1100")||(rx_frame_comb===B"4'b0011"))
            rx_data_i_r1 := rx_data_d(iqWidth - 1 downto 6) ## rx_data(iqWidth - 1 downto 6)
            rx_data_q_r1 := rx_data_d(5 downto 0) ## rx_data(5 downto 0)
        }

        /**
         * Receive data path for dual rf channel, frame is expected to qualify i/q msb and lsb for rf-1 only
         */
        val rx_error_r2: Bool = RegNext(!((rx_frame_comb===B"4'b1111")||(rx_frame_comb===B"4'b1100")||
            (rx_frame_comb===B"4'b0000")||(rx_frame_comb===B"4'b0011"))) init(False)
        val rx_valid_r2: Bool = RegNext(rx_frame_comb === B"4'b0000") init(False)
        val rx_data_i0_r2 = Reg(dataType)
        val rx_data_q0_r2 = Reg(dataType)
        val rx_data_i1_r2 = Reg(dataType)
        val rx_data_q1_r2 = Reg(dataType)
        when(rx_frame_comb===B"4'b1111"){
            rx_data_i0_r2 := rx_data_d(11 downto 6) ## rx_data(11 downto 6)
            rx_data_q0_r2 := rx_data_d(5 downto 0) ## rx_data(5 downto 0)
        }

        when(rx_frame_comb===B"4'b0000"){
            rx_data_i1_r2 := rx_data_d(11 downto 6) ## rx_data(11 downto 6)
            rx_data_q1_r2 := rx_data_d(5 downto 0) ## rx_data(5 downto 0)
        }

        /**
         * Receive data path mux
         */
        when(io.adc_r1_mod){
            io.adc_data.valid := rx_valid_r1
            io.adc_data.payload(0).cha_i := rx_data_i_r1
            io.adc_data.payload(0).cha_q := rx_data_q_r1
            io.adc_data.payload(1).cha_i := 0
            io.adc_data.payload(1).cha_q := 0
            io.adc_error := ~rx_error_r1
        }.otherwise{
            io.adc_data.valid := rx_valid_r2
            io.adc_data.payload(0).cha_i := rx_data_i0_r2
            io.adc_data.payload(0).cha_q := rx_data_q0_r2
            io.adc_data.payload(1).cha_i := rx_data_i1_r2
            io.adc_data.payload(1).cha_q := rx_data_q1_r2
            io.adc_error := ~rx_error_r2
        }
    }


    val tx_clk = rx_clk
    val txClockDomain = ClockDomain(
        clock = tx_clk,
        reset = this.clockDomain.reset,
        config = ClockDomainConfig(
            clockEdge = this.clockDomain.config.clockEdge,
            resetKind = this.clockDomain.config.resetKind,
            resetActiveLevel = this.clockDomain.config.resetActiveLevel
        )
    )

    val txClockArea = new ClockingArea(txClockDomain){
        val tx_data_cnt = Reg(UInt(3 bits)) init(0)
        val tx_data_i0_d = Reg(dataType) init(0)
        val tx_data_q0_d = Reg(dataType) init(0)
        val tx_data_i1_d = Reg(dataType) init(0)
        val tx_data_q1_d = Reg(dataType) init(0)
        val tx_frame = Reg(Bool())
        val tx_data = Reg(LVDS(interfaceDataType))

        val tx_data_sel: Bits = tx_data_cnt(2) ## io.dac_t1_mod ## tx_data_cnt(1 downto 0)

        when(io.dac_data.fire){
            tx_data_cnt := U"3'b100"
            tx_data_i0_d := io.dac_data.payload(0).cha_i
            tx_data_q0_d := io.dac_data.payload(0).cha_q
            tx_data_i1_d := io.dac_data.payload(1).cha_i
            tx_data_q1_d := io.dac_data.payload(1).cha_q
        }.elsewhen(tx_data_cnt(2)){
            tx_data_cnt := tx_data_cnt + 1
            switch(tx_data_sel){
                is(B"4'b1101"){
                    tx_frame := False
                    tx_data.p := tx_data_i0_d(5 downto 0)
                    tx_data.n := tx_data_q0_d(5 downto 0)
                }
                is(B"4'b1100"){
                    tx_frame := True
                    tx_data.p := tx_data_i0_d(11 downto 6)
                    tx_data.n := tx_data_q0_d(11 downto 6)
                }
                is(B"4'b1011"){
                    tx_frame := False
                    tx_data.p := tx_data_i1_d(5 downto 0)
                    tx_data.n := tx_data_q1_d(5 downto 0)
                }
                is(B"4'b1010"){
                    tx_frame := False
                    tx_data.p := tx_data_i1_d(11 downto 6)
                    tx_data.n := tx_data_q1_d(11 downto 6)
                }
                is(B"4'b1001"){
                    tx_frame := True
                    tx_data.p := tx_data_i0_d(5 downto 0)
                    tx_data.n := tx_data_q0_d(5 downto 0)
                }
                is(B"4'b1000"){
                    tx_frame := True
                    tx_data.p := tx_data_i0_d(11 downto 6)
                    tx_data.n := tx_data_q0_d(11 downto 6)
                }
                default{
                    tx_frame := False
                    tx_data.p := 0
                    tx_data.n := 0
                }
            }
        }.otherwise{
            tx_frame := False
            tx_data.p := 0
            tx_data.n := 0
        }
        io.dac_data.ready := tx_data_cnt === 0

        for(idx <- 0 until interfaceWidth){
            val tx_data_buf = Bool()
            val tx_data_oddr = ODDR("SAME_EDGE", Init = false, "ASYNC")
            tx_data_oddr.io.CE <> True
            tx_data_oddr.io.R <> False
            tx_data_oddr.io.S <> False
            tx_data_oddr.io.C <> tx_clk
            tx_data_oddr.io.D1 <> tx_data.p(idx)
            tx_data_oddr.io.D2 <> tx_data.n(idx)
            tx_data_oddr.io.Q <> tx_data_buf
            val tx_data_obuf = OBUFDS()
            tx_data_obuf.io.I := tx_data_buf
            io.tx_if_data.p(idx) := tx_data_obuf.io.O
            io.tx_if_data.n(idx) := tx_data_obuf.io.OB
        }

        val tx_frame_buf = Bool()
        val tx_frame_oddr = ODDR("SAME_EDGE", Init = false, "ASYNC")
        tx_frame_oddr.io.CE <> True
        tx_frame_oddr.io.R <> False
        tx_frame_oddr.io.S <> False
        tx_frame_oddr.io.C <> tx_clk
        tx_frame_oddr.io.D1 <> tx_frame
        tx_frame_oddr.io.D2 <> tx_frame
        tx_frame_oddr.io.Q <> tx_frame_buf
        val tx_frame_obuf = OBUFDS()
        tx_frame_obuf.io.I := tx_frame_buf
        io.tx_if_frame.p := tx_frame_obuf.io.O
        io.tx_if_frame.n := tx_frame_obuf.io.OB

        val tx_clk_buf = Bool()
        val tx_clk_oddr = ODDR("SAME_EDGE", Init = false, "ASYNC")
        tx_clk_oddr.io.CE <> True
        tx_clk_oddr.io.R <> False
        tx_clk_oddr.io.S <> False
        tx_clk_oddr.io.C <> tx_clk
        tx_clk_oddr.io.D1 <> False
        tx_clk_oddr.io.D2 <> True
        tx_clk_oddr.io.Q <> tx_clk_buf
        val tx_clk_obuf = OBUFDS()
        tx_clk_obuf.io.I := tx_clk_buf
        io.tx_fb_clk.p := tx_clk_obuf.io.O
        io.tx_fb_clk.n := tx_clk_obuf.io.OB
    }

    io.data_clk := rx_clk
}


object AD9361InterfaceBench{
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/AD9361Interface").generateSystemVerilog(new AD9361Interface()).printPruned()
    }
}