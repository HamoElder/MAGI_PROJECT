# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build

# Include any dependencies generated for this target.
include editor/CMakeFiles/ADS_EDITOR.dir/depend.make

# Include the progress variables for this target.
include editor/CMakeFiles/ADS_EDITOR.dir/progress.make

# Include the compile flags for this target's objects.
include editor/CMakeFiles/ADS_EDITOR.dir/flags.make

editor/CMakeFiles/ADS_EDITOR.dir/main.cpp.o: editor/CMakeFiles/ADS_EDITOR.dir/flags.make
editor/CMakeFiles/ADS_EDITOR.dir/main.cpp.o: ../editor/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object editor/CMakeFiles/ADS_EDITOR.dir/main.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ADS_EDITOR.dir/main.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/editor/main.cpp

editor/CMakeFiles/ADS_EDITOR.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ADS_EDITOR.dir/main.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/editor/main.cpp > CMakeFiles/ADS_EDITOR.dir/main.cpp.i

editor/CMakeFiles/ADS_EDITOR.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ADS_EDITOR.dir/main.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/editor/main.cpp -o CMakeFiles/ADS_EDITOR.dir/main.cpp.s

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.o: editor/CMakeFiles/ADS_EDITOR.dir/flags.make
editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.o: ../3rdParty/imgui/imgui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui.cpp

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui.cpp > CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.i

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui.cpp -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.s

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.o: editor/CMakeFiles/ADS_EDITOR.dir/flags.make
editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.o: ../3rdParty/imgui/imgui_demo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_demo.cpp

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_demo.cpp > CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.i

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_demo.cpp -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.s

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.o: editor/CMakeFiles/ADS_EDITOR.dir/flags.make
editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.o: ../3rdParty/imgui/imgui_draw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_draw.cpp

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_draw.cpp > CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.i

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_draw.cpp -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.s

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.o: editor/CMakeFiles/ADS_EDITOR.dir/flags.make
editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.o: ../3rdParty/imgui/imgui_tables.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_tables.cpp

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_tables.cpp > CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.i

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_tables.cpp -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.s

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.o: editor/CMakeFiles/ADS_EDITOR.dir/flags.make
editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.o: ../3rdParty/imgui/imgui_widgets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_widgets.cpp

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_widgets.cpp > CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.i

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/imgui_widgets.cpp -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.s

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o: editor/CMakeFiles/ADS_EDITOR.dir/flags.make
editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o: ../3rdParty/imgui/backends/imgui_impl_opengl3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_opengl3.cpp

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_opengl3.cpp > CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.i

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_opengl3.cpp -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.s

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o: editor/CMakeFiles/ADS_EDITOR.dir/flags.make
editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o: ../3rdParty/imgui/backends/imgui_impl_glfw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o -c /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_glfw.cpp

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.i"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_glfw.cpp > CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.i

editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.s"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && /bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/3rdParty/imgui/backends/imgui_impl_glfw.cpp -o CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.s

# Object files for target ADS_EDITOR
ADS_EDITOR_OBJECTS = \
"CMakeFiles/ADS_EDITOR.dir/main.cpp.o" \
"CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.o" \
"CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.o" \
"CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.o" \
"CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.o" \
"CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.o" \
"CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o" \
"CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o"

# External object files for target ADS_EDITOR
ADS_EDITOR_EXTERNAL_OBJECTS =

../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/main.cpp.o
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui.cpp.o
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_demo.cpp.o
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_draw.cpp.o
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_tables.cpp.o
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/imgui_widgets.cpp.o
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_opengl3.cpp.o
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/__/3rdParty/imgui/backends/imgui_impl_glfw.cpp.o
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/build.make
../bin/ADS_EDITOR/ADS_EDITOR: /usr/lib/x86_64-linux-gnu/libglfw.so
../bin/ADS_EDITOR/ADS_EDITOR: /usr/lib/x86_64-linux-gnu/libassimp.so
../bin/ADS_EDITOR/ADS_EDITOR: libSTB_IMAGE.a
../bin/ADS_EDITOR/ADS_EDITOR: libGLAD.a
../bin/ADS_EDITOR/ADS_EDITOR: editor/CMakeFiles/ADS_EDITOR.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ../../bin/ADS_EDITOR/ADS_EDITOR"
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ADS_EDITOR.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
editor/CMakeFiles/ADS_EDITOR.dir/build: ../bin/ADS_EDITOR/ADS_EDITOR

.PHONY : editor/CMakeFiles/ADS_EDITOR.dir/build

editor/CMakeFiles/ADS_EDITOR.dir/clean:
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor && $(CMAKE_COMMAND) -P CMakeFiles/ADS_EDITOR.dir/cmake_clean.cmake
.PHONY : editor/CMakeFiles/ADS_EDITOR.dir/clean

editor/CMakeFiles/ADS_EDITOR.dir/depend:
	cd /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/editor /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor /home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/build/editor/CMakeFiles/ADS_EDITOR.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : editor/CMakeFiles/ADS_EDITOR.dir/depend
