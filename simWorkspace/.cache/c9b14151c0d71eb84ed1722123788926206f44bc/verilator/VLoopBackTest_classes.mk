# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VLoopBackTest.mk for the caller.

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
	VLoopBackTest \
	VLoopBackTest__1 \
	VLoopBackTest__2 \
	VLoopBackTest__3 \
	VLoopBackTest__4 \
	VLoopBackTest__5 \
	VLoopBackTest__6 \
	VLoopBackTest__7 \
	VLoopBackTest__8 \
	VLoopBackTest__9 \
	VLoopBackTest__10 \
	VLoopBackTest__11 \
	VLoopBackTest__12 \
	VLoopBackTest__13 \
	VLoopBackTest__14 \
	VLoopBackTest__15 \
	VLoopBackTest__16 \
	VLoopBackTest__17 \
	VLoopBackTest__18 \
	VLoopBackTest__19 \
	VLoopBackTest__20 \
	VLoopBackTest__21 \
	VLoopBackTest__22 \
	VLoopBackTest__23 \
	VLoopBackTest__24 \
	VLoopBackTest__25 \
	VLoopBackTest__26 \
	VLoopBackTest__27 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VLoopBackTest__Slow \
	VLoopBackTest__1__Slow \
	VLoopBackTest__2__Slow \
	VLoopBackTest__3__Slow \
	VLoopBackTest__4__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VLoopBackTest__Trace \
	VLoopBackTest__Trace__1 \
	VLoopBackTest__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VLoopBackTest__Syms \
	VLoopBackTest__Trace__Slow \
	VLoopBackTest__Trace__1__Slow \
	VLoopBackTest__Trace__2__Slow \
	VLoopBackTest__Trace__3__Slow \
	VLoopBackTest__Trace__4__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
