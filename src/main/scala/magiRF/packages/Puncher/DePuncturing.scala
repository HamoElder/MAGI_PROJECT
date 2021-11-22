package magiRF.packages.Puncher

import spinal.lib._
import spinal.core._

case class DePuncturing(rawDataWidth: Int, softWidth: Int, codeRate: Int, mask: Seq[Int]) extends Component {
    require(softWidth > 0, "raw data width must larger than zero.")
//    require((rawDataWidth % codeRate) == 0, "The data width must be an integral multiple of the code rate.")

    def rawDataType: Bits = Bits(rawDataWidth bits)
    def dePunchedDataWidth: Int = softWidth * codeRate
    def dePunchedDataType: Bits = Bits(dePunchedDataWidth bits)

    def maskDataSize: Int = mask.size
    def maskDataType: UInt = UInt(codeRate bits)
    def maskCntLimit: Int = mask.size - 1
    def maskCntDataWidth: Int = log2Up(maskCntLimit) + 1
    def maskCntDataType: UInt = UInt(maskCntDataWidth bits)

    def cntDataLimit: Int = maskDataSize
    def cntDataWidth: Int = log2Up(cntDataLimit + 1)
    def cntDataType: UInt = UInt(cntDataWidth bits)

    val io = new Bundle{
        val dummy_bits = in(Bits(softWidth bits))
        val raw_data = slave(Stream(Fragment(rawDataType)))
        val de_punched_data = master(Stream(Fragment(dePunchedDataType)))
    }

    noIoPrefix()

    val mask_rom: Vec[UInt] = Vec(maskDataType, maskDataSize)
    for (idx <- 0 until maskDataSize){
        mask_rom(idx) := mask(idx)
    }
    val mask_cnt = Reg(maskCntDataType) init(0)
    val cnt = Reg(cntDataType) init(0)

    val raw_data_fragment: Bits = Reg(rawDataType)
    val raw_data_last: Bool = Reg(Bool()) init(False)

    when(raw_data_last && (cnt === 0)){
        mask_cnt := 0
        cnt := 0
        raw_data_last := False
    }.elsewhen(io.raw_data.fire){
        raw_data_fragment := io.raw_data.fragment
        raw_data_last := io.raw_data.last
        cnt := cntDataLimit
    }.elsewhen(io.de_punched_data.fire){
        cnt := cnt - 1
        raw_data_fragment := mask_rom(mask_cnt.resized).muxList(raw_data_fragment,
            genMaskShift(raw_data_fragment, mask.distinct))
        mask_cnt := (mask_cnt === maskCntLimit) ? U(0).resized | (mask_cnt + 1).resized
    }

    io.de_punched_data.fragment := mask_rom(mask_cnt.resized).muxList(B(0),
        genMaskDePuncturing(raw_data_fragment.subdivideIn(softWidth bits), io.dummy_bits, codeRate, mask.distinct)
    )
    io.de_punched_data.valid := (cnt =/= 0)
    io.de_punched_data.last := (cnt === 1) && raw_data_last
    io.raw_data.ready := (cnt === 0) && (!raw_data_last)

    def genMaskShift(raw_data: Bits, mask: Seq[Int]): Seq[(Int, Bits)] ={
        mask.map(i => {(i, raw_data |>> (i.toBinaryString.count(_=='1')))})
    }

    def genMaskDePuncturing(raw_data: Vec[Bits], dummy_bits: Bits, codeRate: Int, mask: Seq[Int]): Seq[(Int, Bits)] ={
        def genBits(raw_data: Vec[Bits], dummy_bits: Bits, codeRate: Int, mask: Int, data_cursor: Int, cursor: Int): Bits ={
            if(cursor == (codeRate - 1)){
                if((mask & (1 << cursor)) != 0) raw_data(data_cursor) else dummy_bits
            }else{
                if((mask & (1 << cursor)) != 0) {
                    genBits(raw_data, dummy_bits, codeRate, mask, data_cursor + 1, cursor + 1) ## raw_data(data_cursor)
                } else
                    genBits(raw_data, dummy_bits, codeRate, mask, data_cursor, cursor + 1) ## dummy_bits
            }
        }
        mask.map(i => {(i, genBits(raw_data, dummy_bits, codeRate, i, 0, 0))})
    }

}

object DePuncturingBench {
    def main(args: Array[String]): Unit = {
        SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW),
            targetDirectory = "rtl/DePuncturing").generateSystemVerilog(new DePuncturing(12, 1, 2, Seq(3, 1, 3, 1, 3, 1, 3, 1)))
            .printPruned().printUnused()
    }
}
