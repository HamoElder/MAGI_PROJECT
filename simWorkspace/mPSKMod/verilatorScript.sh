 set -e ; verilator -CFLAGS -fPIC -CFLAGS -m64 -CFLAGS -shared -CFLAGS -Wno-attributes -LDFLAGS -fPIC -LDFLAGS -m64 -LDFLAGS -shared -LDFLAGS -Wno-attributes -CFLAGS -I"/home/missdown/.jdks/openjdk-16.0.2/include" -CFLAGS -I"/home/missdown/.jdks/openjdk-16.0.2/include/linux" -CFLAGS -fvisibility=hidden -LDFLAGS -fvisibility=hidden -CFLAGS -std=c++11 -LDFLAGS -std=c++11 --autoflush   --output-split 5000 --output-split-cfuncs 500 --output-split-ctrace 500 -Wno-WIDTH -Wno-UNOPTFLAT -Wno-CMPCONST -Wno-UNSIGNED --x-assign unique --trace-depth 0 -O3 -CFLAGS -O0 -CFLAGS -DTRACE --trace  --Mdir verilator --top-module mPSKMod  -cc "/home/missdown/MAGI_PROJECT/tmp/job_1/mPSKMod.v" --exe verilator/VmPSKMod__spinalWrapper.cpp 