# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project4.dir/flags.make

CMakeFiles/project4.dir/cipher.c.o: CMakeFiles/project4.dir/flags.make
CMakeFiles/project4.dir/cipher.c.o: ../cipher.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/project4.dir/cipher.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/project4.dir/cipher.c.o   -c /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cipher.c

CMakeFiles/project4.dir/cipher.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/project4.dir/cipher.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cipher.c > CMakeFiles/project4.dir/cipher.c.i

CMakeFiles/project4.dir/cipher.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/project4.dir/cipher.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cipher.c -o CMakeFiles/project4.dir/cipher.c.s

CMakeFiles/project4.dir/cipher.c.o.requires:

.PHONY : CMakeFiles/project4.dir/cipher.c.o.requires

CMakeFiles/project4.dir/cipher.c.o.provides: CMakeFiles/project4.dir/cipher.c.o.requires
	$(MAKE) -f CMakeFiles/project4.dir/build.make CMakeFiles/project4.dir/cipher.c.o.provides.build
.PHONY : CMakeFiles/project4.dir/cipher.c.o.provides

CMakeFiles/project4.dir/cipher.c.o.provides.build: CMakeFiles/project4.dir/cipher.c.o


# Object files for target project4
project4_OBJECTS = \
"CMakeFiles/project4.dir/cipher.c.o"

# External object files for target project4
project4_EXTERNAL_OBJECTS =

project4: CMakeFiles/project4.dir/cipher.c.o
project4: CMakeFiles/project4.dir/build.make
project4: CMakeFiles/project4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable project4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project4.dir/build: project4

.PHONY : CMakeFiles/project4.dir/build

CMakeFiles/project4.dir/requires: CMakeFiles/project4.dir/cipher.c.o.requires

.PHONY : CMakeFiles/project4.dir/requires

CMakeFiles/project4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project4.dir/clean

CMakeFiles/project4.dir/depend:
	cd /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4 /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4 /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cmake-build-debug /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cmake-build-debug /Users/dhruvsandesara/Desktop/sem3/ee312/projects/project4/cmake-build-debug/CMakeFiles/project4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project4.dir/depend

