# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VBDMAs2m.mk

default: VBDMAs2m

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= /usr/include
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= /usr/lib/x86_64-linux-gnu

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VBDMAs2m
# Module prefix (from --prefix)
VM_MODPREFIX = VBDMAs2m
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-fPIC \
	-m64 \
	-shared \
	-Wno-attributes \
	-I/snap/intellij-idea-community/345/jbr/include \
	-I/snap/intellij-idea-community/345/jbr/include/linux \
	-fvisibility=hidden \
	-std=c++11 \
	-O3 \
	-DTRACE \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-fPIC \
	-m64 \
	-shared \
	-Wno-attributes \
	-fvisibility=hidden \
	-std=c++11 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	VBDMAs2m__spinalWrapper \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	verilator \


### Default rules...
# Include list of all generated classes
include VBDMAs2m_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

VBDMAs2m__spinalWrapper.o: verilator/VBDMAs2m__spinalWrapper.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VBDMAs2m: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS)


# Verilated -*- Makefile -*-
