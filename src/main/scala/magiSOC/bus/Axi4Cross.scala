package magiSOC.bus

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._

class TopLevel extends Component {
    val io = new Bundle{
        val result = out Bool()
    }

    val fsm = new StateMachine{
        val counter = Reg(UInt(8 bits)) init (0)
        io.result := False

        val stateA : State = new State with EntryPoint{
            whenIsActive (goto(stateB))
        }
        val stateB : State = new State{
            onEntry(counter := 0)
            whenIsActive {
                counter := counter + 1
                when(counter === 4){
                    goto(stateC)
                    io.result := True
                }
            }
        }
        val stateC : State = new State{
            whenIsActive (goto(stateA))
        }
    }
}

object MySpinalConfig extends SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetKind = SYNC),
    targetDirectory = "rtl")

object ConstantCoefficientFIRFilterBranch {
    def main(args: Array[String]) {
        MySpinalConfig.generateSystemVerilog(new TopLevel)
    }
}
