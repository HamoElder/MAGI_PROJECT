 set -e ; verilator -CFLAGS -fPIC -CFLAGS -m64 -CFLAGS -shared -CFLAGS -Wno-attributes -LDFLAGS -fPIC -LDFLAGS -m64 -LDFLAGS -shared -LDFLAGS -Wno-attributes -CFLAGS -I"/snap/intellij-idea-community/345/jbr/include" -CFLAGS -I"/snap/intellij-idea-community/345/jbr/include/linux" -CFLAGS -fvisibility=hidden -LDFLAGS -fvisibility=hidden -CFLAGS -std=c++11 -LDFLAGS -std=c++11 --autoflush   --output-split 5000 --output-split-cfuncs 500 --output-split-ctrace 500 -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED --x-assign unique --trace-depth 0 -O3 -CFLAGS -O3 -CFLAGS -DTRACE --trace  --Mdir verilator --top-module TX  -cc "/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/TX.v" --exe verilator/VTX__spinalWrapper.cpp 