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
CMAKE_SOURCE_DIR = C:\Users\Gergely\CLionProjects\index_filtering_vector

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Gergely\CLionProjects\index_filtering_vector\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/index_filtering_vector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/index_filtering_vector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/index_filtering_vector.dir/flags.make

CMakeFiles/index_filtering_vector.dir/main.cpp.obj: CMakeFiles/index_filtering_vector.dir/flags.make
CMakeFiles/index_filtering_vector.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Gergely\CLionProjects\index_filtering_vector\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/index_filtering_vector.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\index_filtering_vector.dir\main.cpp.obj -c C:\Users\Gergely\CLionProjects\index_filtering_vector\main.cpp

CMakeFiles/index_filtering_vector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/index_filtering_vector.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Gergely\CLionProjects\index_filtering_vector\main.cpp > CMakeFiles\index_filtering_vector.dir\main.cpp.i

CMakeFiles/index_filtering_vector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/index_filtering_vector.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Gergely\CLionProjects\index_filtering_vector\main.cpp -o CMakeFiles\index_filtering_vector.dir\main.cpp.s

# Object files for target index_filtering_vector
index_filtering_vector_OBJECTS = \
"CMakeFiles/index_filtering_vector.dir/main.cpp.obj"

# External object files for target index_filtering_vector
index_filtering_vector_EXTERNAL_OBJECTS =

index_filtering_vector.exe: CMakeFiles/index_filtering_vector.dir/main.cpp.obj
index_filtering_vector.exe: CMakeFiles/index_filtering_vector.dir/build.make
index_filtering_vector.exe: CMakeFiles/index_filtering_vector.dir/linklibs.rsp
index_filtering_vector.exe: CMakeFiles/index_filtering_vector.dir/objects1.rsp
index_filtering_vector.exe: CMakeFiles/index_filtering_vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Gergely\CLionProjects\index_filtering_vector\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable index_filtering_vector.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\index_filtering_vector.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/index_filtering_vector.dir/build: index_filtering_vector.exe

.PHONY : CMakeFiles/index_filtering_vector.dir/build

CMakeFiles/index_filtering_vector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\index_filtering_vector.dir\cmake_clean.cmake
.PHONY : CMakeFiles/index_filtering_vector.dir/clean

CMakeFiles/index_filtering_vector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Gergely\CLionProjects\index_filtering_vector C:\Users\Gergely\CLionProjects\index_filtering_vector C:\Users\Gergely\CLionProjects\index_filtering_vector\cmake-build-debug C:\Users\Gergely\CLionProjects\index_filtering_vector\cmake-build-debug C:\Users\Gergely\CLionProjects\index_filtering_vector\cmake-build-debug\CMakeFiles\index_filtering_vector.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/index_filtering_vector.dir/depend

