# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = C:\Users\ramon\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.5153.40\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\ramon\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.5153.40\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ramon\CLionProjects\Info_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ramon\CLionProjects\Info_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task_5.dir/flags.make

CMakeFiles/task_5.dir/Ex_1/task_5.c.obj: CMakeFiles/task_5.dir/flags.make
CMakeFiles/task_5.dir/Ex_1/task_5.c.obj: ../Ex_1/task_5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ramon\CLionProjects\Info_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/task_5.dir/Ex_1/task_5.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\task_5.dir\Ex_1\task_5.c.obj   -c C:\Users\ramon\CLionProjects\Info_2\Ex_1\task_5.c

CMakeFiles/task_5.dir/Ex_1/task_5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/task_5.dir/Ex_1/task_5.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ramon\CLionProjects\Info_2\Ex_1\task_5.c > CMakeFiles\task_5.dir\Ex_1\task_5.c.i

CMakeFiles/task_5.dir/Ex_1/task_5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/task_5.dir/Ex_1/task_5.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ramon\CLionProjects\Info_2\Ex_1\task_5.c -o CMakeFiles\task_5.dir\Ex_1\task_5.c.s

# Object files for target task_5
task_5_OBJECTS = \
"CMakeFiles/task_5.dir/Ex_1/task_5.c.obj"

# External object files for target task_5
task_5_EXTERNAL_OBJECTS =

task_5.exe: CMakeFiles/task_5.dir/Ex_1/task_5.c.obj
task_5.exe: CMakeFiles/task_5.dir/build.make
task_5.exe: CMakeFiles/task_5.dir/linklibs.rsp
task_5.exe: CMakeFiles/task_5.dir/objects1.rsp
task_5.exe: CMakeFiles/task_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ramon\CLionProjects\Info_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable task_5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task_5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task_5.dir/build: task_5.exe

.PHONY : CMakeFiles/task_5.dir/build

CMakeFiles/task_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task_5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/task_5.dir/clean

CMakeFiles/task_5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ramon\CLionProjects\Info_2 C:\Users\ramon\CLionProjects\Info_2 C:\Users\ramon\CLionProjects\Info_2\cmake-build-debug C:\Users\ramon\CLionProjects\Info_2\cmake-build-debug C:\Users\ramon\CLionProjects\Info_2\cmake-build-debug\CMakeFiles\task_5.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task_5.dir/depend

