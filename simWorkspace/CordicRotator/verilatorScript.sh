 set -e ; verilator -CFLAGS -fPIC -CFLAGS -m64 -CFLAGS -shared -CFLAGS -Wno-attributes -LDFLAGS -fPIC -LDFLAGS -m64 -LDFLAGS -shared -LDFLAGS -Wno-attributes -CFLAGS -I"/usr/lib/jvm/java-11-openjdk-amd64/include" -CFLAGS -I"/usr/lib/jvm/java-11-openjdk-amd64/include/linux" -CFLAGS -fvisibility=hidden -LDFLAGS -fvisibility=hidden -CFLAGS -std=c++11 -LDFLAGS -std=c++11 --autoflush   --output-split 5000 --output-split-cfuncs 500 --output-split-ctrace 500 -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED --x-assign unique --x-initial-edge --trace-depth 0 -O3 -CFLAGS -O3 -CFLAGS -DTRACE --trace  --Mdir verilator --top-module CordicRotator  -cc "/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/CordicRotator.v" --exe verilator/VCordicRotator__spinalWrapper.cpp 