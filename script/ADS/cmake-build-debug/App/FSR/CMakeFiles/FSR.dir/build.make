# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/198/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/198/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug

# Include any dependencies generated for this target.
include App/FSR/CMakeFiles/FSR.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include App/FSR/CMakeFiles/FSR.dir/compiler_depend.make

# Include the progress variables for this target.
include App/FSR/CMakeFiles/FSR.dir/progress.make

# Include the compile flags for this target's objects.
include App/FSR/CMakeFiles/FSR.dir/flags.make

App/FSR/CMakeFiles/FSR.dir/main.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/main.cpp.o: ../App/FSR/main.cpp
App/FSR/CMakeFiles/FSR.dir/main.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object App/FSR/CMakeFiles/FSR.dir/main.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/main.cpp.o -MF CMakeFiles/FSR.dir/main.cpp.o.d -o CMakeFiles/FSR.dir/main.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/App/FSR/main.cpp

App/FSR/CMakeFiles/FSR.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/main.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/App/FSR/main.cpp > CMakeFiles/FSR.dir/main.cpp.i

App/FSR/CMakeFiles/FSR.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/main.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/App/FSR/main.cpp -o CMakeFiles/FSR.dir/main.cpp.s

App/FSR/CMakeFiles/FSR.dir/src/EASUPass.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/src/EASUPass.cpp.o: ../App/FSR/src/EASUPass.cpp
App/FSR/CMakeFiles/FSR.dir/src/EASUPass.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object App/FSR/CMakeFiles/FSR.dir/src/EASUPass.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/src/EASUPass.cpp.o -MF CMakeFiles/FSR.dir/src/EASUPass.cpp.o.d -o CMakeFiles/FSR.dir/src/EASUPass.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/App/FSR/src/EASUPass.cpp

App/FSR/CMakeFiles/FSR.dir/src/EASUPass.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/src/EASUPass.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/App/FSR/src/EASUPass.cpp > CMakeFiles/FSR.dir/src/EASUPass.cpp.i

App/FSR/CMakeFiles/FSR.dir/src/EASUPass.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/src/EASUPass.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/App/FSR/src/EASUPass.cpp -o CMakeFiles/FSR.dir/src/EASUPass.cpp.s

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o: ../3rdParty/imgui/imgui.cpp
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o -MF CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o.d -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui.cpp

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui.cpp > CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.i

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui.cpp -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.s

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o: ../3rdParty/imgui/imgui_demo.cpp
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o -MF CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o.d -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_demo.cpp

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_demo.cpp > CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.i

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_demo.cpp -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.s

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o: ../3rdParty/imgui/imgui_draw.cpp
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o -MF CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o.d -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_draw.cpp

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_draw.cpp > CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.i

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_draw.cpp -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.s

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o: ../3rdParty/imgui/imgui_tables.cpp
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o -MF CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o.d -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_tables.cpp

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_tables.cpp > CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.i

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_tables.cpp -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.s

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o: ../3rdParty/imgui/imgui_widgets.cpp
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o -MF CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o.d -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_widgets.cpp

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_widgets.cpp > CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.i

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_widgets.cpp -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.s

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o: ../3rdParty/imgui/backends/imgui_impl_opengl3.cpp
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o -MF CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o.d -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_opengl3.cpp

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_opengl3.cpp > CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.i

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_opengl3.cpp -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.s

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o: App/FSR/CMakeFiles/FSR.dir/flags.make
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o: ../3rdParty/imgui/backends/imgui_impl_glfw.cpp
App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o: App/FSR/CMakeFiles/FSR.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o -MF CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o.d -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_glfw.cpp

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_glfw.cpp > CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.i

App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_glfw.cpp -o CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.s

# Object files for target FSR
FSR_OBJECTS = \
"CMakeFiles/FSR.dir/main.cpp.o" \
"CMakeFiles/FSR.dir/src/EASUPass.cpp.o" \
"CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o" \
"CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o" \
"CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o" \
"CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o" \
"CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o" \
"CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o" \
"CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o"

# External object files for target FSR
FSR_EXTERNAL_OBJECTS =

../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/main.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/src/EASUPass.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_demo.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_draw.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_tables.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/imgui_widgets.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/__/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/build.make
../bin/FSR/FSR: /usr/lib/x86_64-linux-gnu/libglfw.so
../bin/FSR/FSR: /usr/lib/x86_64-linux-gnu/libassimp.so
../bin/FSR/FSR: libSTB_IMAGE.a
../bin/FSR/FSR: libGLAD.a
../bin/FSR/FSR: libMAGI_ENGINE.a
../bin/FSR/FSR: App/FSR/CMakeFiles/FSR.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable ../../../bin/FSR/FSR"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FSR.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
App/FSR/CMakeFiles/FSR.dir/build: ../bin/FSR/FSR
.PHONY : App/FSR/CMakeFiles/FSR.dir/build

App/FSR/CMakeFiles/FSR.dir/clean:
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR && $(CMAKE_COMMAND) -P CMakeFiles/FSR.dir/cmake_clean.cmake
.PHONY : App/FSR/CMakeFiles/FSR.dir/clean

App/FSR/CMakeFiles/FSR.dir/depend:
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/App/FSR /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/cmake-build-debug/App/FSR/CMakeFiles/FSR.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : App/FSR/CMakeFiles/FSR.dir/depend

