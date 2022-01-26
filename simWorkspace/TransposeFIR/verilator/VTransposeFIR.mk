# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTransposeFIR.mk

default: VTransposeFIR

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/share/verilator
# Path to SystemPerl kit top (from $SYSTEMPERL)
SYSTEMPERL = 
# Path to SystemPerl kit includes (from $SYSTEMPERL_INCLUDE)
SYSTEMPERL_INCLUDE = 
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemPerl output mode?  0/1 (from --sp)
VM_SP = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# SystemPerl or SystemC output mode?  0/1 (from --sp/--sc)
VM_SP_OR_SC = 0
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTransposeFIR
# Module prefix (from --prefix)
VM_MODPREFIX = VTransposeFIR
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-DTRACE \
	-I/home/crystal/idea/jbr/include \
	-I/home/crystal/idea/jbr/include/linux \
	-O0 \
	-Wno-attributes \
	-fPIC \
	-fvisibility=hidden \
	-m64 \
	-shared \
	-std=c++11 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-Wno-attributes \
	-fPIC \
	-fvisibility=hidden \
	-m64 \
	-shared \
	-std=c++11 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	VTransposeFIR__spinalWrapper \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	verilator \


### Default rules...
# Include list of all generated classes
include VTransposeFIR_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

VTransposeFIR__spinalWrapper.o: verilator/VTransposeFIR__spinalWrapper.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VTransposeFIR: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS) 2>&1 | c++filt


# Verilated -*- Makefile -*-
