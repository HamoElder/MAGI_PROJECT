package Misc
import spinal.core._
import spinal.core._
import spinal.lib.bus.misc._

import java.io._
import scala.collection.mutable
object regFileGen {
    val regContent=new  mutable.StringBuilder()
    def genRegFileByMarkdown(): Unit ={
        val regFileHdl = new PrintWriter(new File("regFile.md"))
        regFileHdl.println("|module name|base addr|offset|reg name|bit filed|attribute|description|")
        regFileHdl.println("|---------|----------|----------|----------|----------|----------|----------|")
        regFileHdl.println(regContent.toString())
        regFileHdl.close()
    }
    implicit class regInsert(busFactory:BusSlaveFactoryDelayed) {
        def addDataModel(moduleName:String,baseAddr:Long): Unit ={
            var moduleFirst=true
            for ((address, tasks) <- busFactory.elementsPerAddress.toList.sortBy(_._1.lowerBound)) {
                for (task <- tasks) task match {
                    case task: BusSlaveFactoryRead  =>{
                        if(moduleFirst){
                            regContent++=f"$moduleName|0x$baseAddr%x|0x${address.lowerBound}%x|${task.that.getName("not named")}|[${task.bitOffset + widthOf(task.that) - 1}:${task.bitOffset}]|R|${if(task.documentation != null) s" ${task.documentation}" else "no description"}|\n"
                            moduleFirst=false
                        }else{
                            regContent++=f"^|^|0x${address.lowerBound}%x|${task.that.getName("not named")}|[${task.bitOffset + widthOf(task.that) - 1}:${task.bitOffset}]|R|${if(task.documentation != null) s" ${task.documentation}" else "no description"}|\n"
                        }
                    }
                    case task: BusSlaveFactoryWrite =>{
                        if(moduleFirst){
                            regContent++=f"$moduleName|0x${address.lowerBound}%x|0x${address.lowerBound}%x|${task.that.getName("not named")}|[${task.bitOffset + widthOf(task.that) - 1}:${task.bitOffset}]|W|${if(task.documentation != null) s" ${task.documentation}" else "no description"}|\n"
                            moduleFirst=false
                        }else{
                            regContent++=f"^|^|0x${address.lowerBound}%x|${task.that.getName("not named")}|[${task.bitOffset + widthOf(task.that) - 1}:${task.bitOffset}]|W|${if(task.documentation != null) s" ${task.documentation}" else "no description"}|\n"
                        }
                    }
                    case _ =>
                }
            }
        }
    }
}
