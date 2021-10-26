package magiRF.packages.Coder.Convolutional.Decoder

import spinal.lib._
import spinal.core._
import scala.util.control._

object ViterbiGen {

    /*********************************
          Following is for G=(7, 5)
          State | In  | Out | Next State
          0(00) | 0   | 00  | 0
          0     | 1   | 11  | 2

          2(10) | 0   | 10  | 1
          2     | 1   | 01  | 3

          1(01) | 0   | 11  | 0
          1     | 1   | 00  | 2

          3(11) | 0   | 01  | 1
          3     | 1   | 10  | 3
     *********************************/
    def TrellisGen(config: ViterbiDecoderConfig): (Seq[Int], Seq[Int], Seq[Int], Seq[Int]) = {
        val states_table = new Array[Int](config.trellisSize)
        val in_table = new Array[Int](config.trellisSize)
        val out_table = new Array[Int](config.trellisSize)
        val next_state_table = new Array[Int](config.trellisSize)
        var shiftReg = 0
        var current_state = 0
        for(idx <- 0 until config.trellisSize){
            in_table(idx) = idx % 2
            states_table(idx) = Integer.parseInt(shiftReg.toBinaryString.reverse.padTo(config.regNum, '0'), 2)
            next_state_table(idx) = (states_table(idx) >> 1) + (in_table(idx) << (config.regNum - 1))
//            println(shiftReg.toBinaryString.reverse.padTo(config.regNum, '0'))
            current_state = states_table(idx) + (in_table(idx) << config.regNum)
            out_table(idx) = 0
            for(poly <- config.genPoly){
                out_table(idx) = (out_table(idx) << config.softWidth) + xorCal(current_state, poly, config.constraintLength, config.softWidth)
            }
            shiftReg = shiftReg + in_table(idx)
        }
        def TrellisBitsTable: Seq[Bits] = for(idx <- 0 until config.trellisSize) yield{
            val concat = (states_table(idx) << (config.statesWidth + config.rawDataWidth + 1)) + (in_table(idx) << (config.statesWidth + config.rawDataWidth)) + (out_table(idx) << config.statesWidth) + next_state_table(idx)
            B(concat, config.trellisWidth bits)
        }
        def TrellisTable: Seq[Int] = for(idx <- 0 until config.trellisSize) yield{
            val concat = (states_table(idx) << (config.statesWidth + config.rawDataWidth + 1)) + (in_table(idx) << (config.statesWidth + config.rawDataWidth)) + (out_table(idx) << config.statesWidth) + next_state_table(idx)
            concat
        }
        def TrellisSeq: (Seq[Int], Seq[Int], Seq[Int], Seq[Int]) = {
            /*********************************
              Following is for G=(7, 5)
              Next State | State | Out |  In  |
              0(00)      | 0     | 00  | 0    |
              0          | 1     | 11  | 0    |

              1          | 2     | 10  | 0    |
              1          | 3     | 01  | 0    |

              2          | 0     | 11  | 1    |
              2          | 1     | 00  | 1    |

              3(11)      | 2     | 01  | 1    |
              3          | 3     | 10  | 1    |
             *********************************/
            val states_table_reorder = new Array[Int](config.trellisSize)
            val in_table_reorder = new Array[Int](config.trellisSize)
            val out_table_reorder = new Array[Int](config.trellisSize)
            val next_state_table_reorder = new Array[Int](config.trellisSize)

            var cnt = 0
            var next_state = 0
            val loop = new Breaks;
            for(idx <- 0 until config.trellisSize){
                    loop.breakable{
                    for (i <- next_state_table_reorder.indices){
                        if(next_state_table(i) == next_state){
                            next_state_table_reorder(cnt) = next_state_table(i)
                            states_table_reorder(cnt) = states_table(i)
                            in_table_reorder(cnt) = in_table(i)
                            out_table_reorder(cnt) = out_table(i)
                            cnt = cnt + 1
                            if(cnt % 2 == 0){
                                next_state = next_state + 1
                                loop.break
                            }
                        }
                    }
                }
            }

            (next_state_table_reorder.toSeq, states_table_reorder.toSeq, out_table_reorder.toSeq, in_table_reorder.toSeq)
        }
        TrellisSeq
    }

    def xorCal(state: Int, poly: Int, constraintLength: Int, softWidth: Int): Int ={
        var bit_and = state & poly
        var bit_sum = 0
        for(idx <- 0 until constraintLength){
            if((bit_and & 1) == 1){
                bit_sum = bit_sum + 1
            }
            bit_and = bit_and >> 1
        }
        if((bit_sum & 1) == 1) ((1 << softWidth) - 1) else 0
    }

}
