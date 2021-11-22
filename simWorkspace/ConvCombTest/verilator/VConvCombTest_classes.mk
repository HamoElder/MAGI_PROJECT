# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VConvCombTest.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 1
# Tracing threaded output mode?  0/1 (from --trace-fst-thread)
VM_TRACE_THREADED = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VConvCombTest \
	VConvCombTest__1 \
	VConvCombTest__2 \
	VConvCombTest__3 \
	VConvCombTest__4 \
	VConvCombTest__5 \
	VConvCombTest__6 \
	VConvCombTest__7 \
	VConvCombTest__8 \
	VConvCombTest__9 \
	VConvCombTest__10 \
	VConvCombTest__11 \
	VConvCombTest__12 \
	VConvCombTest__13 \
	VConvCombTest__14 \
	VConvCombTest__15 \
	VConvCombTest__16 \
	VConvCombTest__17 \
	VConvCombTest__18 \
	VConvCombTest__19 \
	VConvCombTest__20 \
	VConvCombTest__21 \
	VConvCombTest__22 \
	VConvCombTest__23 \
	VConvCombTest__24 \
	VConvCombTest__25 \
	VConvCombTest__26 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VConvCombTest__Slow \
	VConvCombTest__1__Slow \
	VConvCombTest__2__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VConvCombTest__Trace \
	VConvCombTest__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VConvCombTest__Syms \
	VConvCombTest__Trace__Slow \
	VConvCombTest__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
