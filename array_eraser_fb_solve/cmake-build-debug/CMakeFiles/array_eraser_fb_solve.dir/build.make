# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Gergely\CLionProjects\array_eraser_fb_solve

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/array_eraser_fb_solve.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/array_eraser_fb_solve.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/array_eraser_fb_solve.dir/flags.make

CMakeFiles/array_eraser_fb_solve.dir/main.cpp.obj: CMakeFiles/array_eraser_fb_solve.dir/flags.make
CMakeFiles/array_eraser_fb_solve.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/array_eraser_fb_solve.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\array_eraser_fb_solve.dir\main.cpp.obj -c C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\main.cpp

CMakeFiles/array_eraser_fb_solve.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/array_eraser_fb_solve.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\main.cpp > CMakeFiles\array_eraser_fb_solve.dir\main.cpp.i

CMakeFiles/array_eraser_fb_solve.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/array_eraser_fb_solve.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\main.cpp -o CMakeFiles\array_eraser_fb_solve.dir\main.cpp.s

# Object files for target array_eraser_fb_solve
array_eraser_fb_solve_OBJECTS = \
"CMakeFiles/array_eraser_fb_solve.dir/main.cpp.obj"

# External object files for target array_eraser_fb_solve
array_eraser_fb_solve_EXTERNAL_OBJECTS =

array_eraser_fb_solve.exe: CMakeFiles/array_eraser_fb_solve.dir/main.cpp.obj
array_eraser_fb_solve.exe: CMakeFiles/array_eraser_fb_solve.dir/build.make
array_eraser_fb_solve.exe: CMakeFiles/array_eraser_fb_solve.dir/linklibs.rsp
array_eraser_fb_solve.exe: CMakeFiles/array_eraser_fb_solve.dir/objects1.rsp
array_eraser_fb_solve.exe: CMakeFiles/array_eraser_fb_solve.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable array_eraser_fb_solve.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\array_eraser_fb_solve.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/array_eraser_fb_solve.dir/build: array_eraser_fb_solve.exe

.PHONY : CMakeFiles/array_eraser_fb_solve.dir/build

CMakeFiles/array_eraser_fb_solve.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\array_eraser_fb_solve.dir\cmake_clean.cmake
.PHONY : CMakeFiles/array_eraser_fb_solve.dir/clean

CMakeFiles/array_eraser_fb_solve.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gergely\CLionProjects\array_eraser_fb_solve C:\Users\Gergely\CLionProjects\array_eraser_fb_solve C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\cmake-build-debug C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\cmake-build-debug C:\Users\Gergely\CLionProjects\array_eraser_fb_solve\cmake-build-debug\CMakeFiles\array_eraser_fb_solve.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/array_eraser_fb_solve.dir/depend

