# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /cygdrive/c/Users/ramon/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/ramon/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/ramon/CLionProjects/Info_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/ramon/CLionProjects/Info_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task_5.dir/flags.make

CMakeFiles/task_5.dir/task_5.c.o: CMakeFiles/task_5.dir/flags.make
CMakeFiles/task_5.dir/task_5.c.o: ../task_5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/ramon/CLionProjects/Info_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/task_5.dir/task_5.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/task_5.dir/task_5.c.o   -c /cygdrive/c/Users/ramon/CLionProjects/Info_2/task_5.c

CMakeFiles/task_5.dir/task_5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/task_5.dir/task_5.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/ramon/CLionProjects/Info_2/task_5.c > CMakeFiles/task_5.dir/task_5.c.i

CMakeFiles/task_5.dir/task_5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/task_5.dir/task_5.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/ramon/CLionProjects/Info_2/task_5.c -o CMakeFiles/task_5.dir/task_5.c.s

# Object files for target task_5
task_5_OBJECTS = \
"CMakeFiles/task_5.dir/task_5.c.o"

# External object files for target task_5
task_5_EXTERNAL_OBJECTS =

task_5.exe: CMakeFiles/task_5.dir/task_5.c.o
task_5.exe: CMakeFiles/task_5.dir/build.make
task_5.exe: CMakeFiles/task_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/ramon/CLionProjects/Info_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable task_5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task_5.dir/build: task_5.exe

.PHONY : CMakeFiles/task_5.dir/build

CMakeFiles/task_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task_5.dir/clean

CMakeFiles/task_5.dir/depend:
	cd /cygdrive/c/Users/ramon/CLionProjects/Info_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/ramon/CLionProjects/Info_2 /cygdrive/c/Users/ramon/CLionProjects/Info_2 /cygdrive/c/Users/ramon/CLionProjects/Info_2/cmake-build-debug /cygdrive/c/Users/ramon/CLionProjects/Info_2/cmake-build-debug /cygdrive/c/Users/ramon/CLionProjects/Info_2/cmake-build-debug/CMakeFiles/task_5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task_5.dir/depend
