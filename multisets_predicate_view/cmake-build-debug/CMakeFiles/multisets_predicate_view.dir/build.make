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
CMAKE_SOURCE_DIR = C:\Users\betum\cpp_exam\multisets_predicate_view

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\betum\cpp_exam\multisets_predicate_view\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/multisets_predicate_view.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/multisets_predicate_view.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/multisets_predicate_view.dir/flags.make

CMakeFiles/multisets_predicate_view.dir/main.cpp.obj: CMakeFiles/multisets_predicate_view.dir/flags.make
CMakeFiles/multisets_predicate_view.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\betum\cpp_exam\multisets_predicate_view\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/multisets_predicate_view.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\multisets_predicate_view.dir\main.cpp.obj -c C:\Users\betum\cpp_exam\multisets_predicate_view\main.cpp

CMakeFiles/multisets_predicate_view.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/multisets_predicate_view.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\betum\cpp_exam\multisets_predicate_view\main.cpp > CMakeFiles\multisets_predicate_view.dir\main.cpp.i

CMakeFiles/multisets_predicate_view.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/multisets_predicate_view.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\betum\cpp_exam\multisets_predicate_view\main.cpp -o CMakeFiles\multisets_predicate_view.dir\main.cpp.s

# Object files for target multisets_predicate_view
multisets_predicate_view_OBJECTS = \
"CMakeFiles/multisets_predicate_view.dir/main.cpp.obj"

# External object files for target multisets_predicate_view
multisets_predicate_view_EXTERNAL_OBJECTS =

multisets_predicate_view.exe: CMakeFiles/multisets_predicate_view.dir/main.cpp.obj
multisets_predicate_view.exe: CMakeFiles/multisets_predicate_view.dir/build.make
multisets_predicate_view.exe: CMakeFiles/multisets_predicate_view.dir/linklibs.rsp
multisets_predicate_view.exe: CMakeFiles/multisets_predicate_view.dir/objects1.rsp
multisets_predicate_view.exe: CMakeFiles/multisets_predicate_view.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\betum\cpp_exam\multisets_predicate_view\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable multisets_predicate_view.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\multisets_predicate_view.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/multisets_predicate_view.dir/build: multisets_predicate_view.exe

.PHONY : CMakeFiles/multisets_predicate_view.dir/build

CMakeFiles/multisets_predicate_view.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\multisets_predicate_view.dir\cmake_clean.cmake
.PHONY : CMakeFiles/multisets_predicate_view.dir/clean

CMakeFiles/multisets_predicate_view.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\betum\cpp_exam\multisets_predicate_view C:\Users\betum\cpp_exam\multisets_predicate_view C:\Users\betum\cpp_exam\multisets_predicate_view\cmake-build-debug C:\Users\betum\cpp_exam\multisets_predicate_view\cmake-build-debug C:\Users\betum\cpp_exam\multisets_predicate_view\cmake-build-debug\CMakeFiles\multisets_predicate_view.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/multisets_predicate_view.dir/depend

