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
CMAKE_SOURCE_DIR = /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/final.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/final.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/final.dir/flags.make

CMakeFiles/final.dir/main.cpp.o: CMakeFiles/final.dir/flags.make
CMakeFiles/final.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/final.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/final.dir/main.cpp.o -c /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/main.cpp

CMakeFiles/final.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/main.cpp > CMakeFiles/final.dir/main.cpp.i

CMakeFiles/final.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/main.cpp -o CMakeFiles/final.dir/main.cpp.s

CMakeFiles/final.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/final.dir/main.cpp.o.requires

CMakeFiles/final.dir/main.cpp.o.provides: CMakeFiles/final.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/final.dir/build.make CMakeFiles/final.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/final.dir/main.cpp.o.provides

CMakeFiles/final.dir/main.cpp.o.provides.build: CMakeFiles/final.dir/main.cpp.o


CMakeFiles/final.dir/LinkedList.cpp.o: CMakeFiles/final.dir/flags.make
CMakeFiles/final.dir/LinkedList.cpp.o: ../LinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/final.dir/LinkedList.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/final.dir/LinkedList.cpp.o -c /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/LinkedList.cpp

CMakeFiles/final.dir/LinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/final.dir/LinkedList.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/LinkedList.cpp > CMakeFiles/final.dir/LinkedList.cpp.i

CMakeFiles/final.dir/LinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/final.dir/LinkedList.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/LinkedList.cpp -o CMakeFiles/final.dir/LinkedList.cpp.s

CMakeFiles/final.dir/LinkedList.cpp.o.requires:

.PHONY : CMakeFiles/final.dir/LinkedList.cpp.o.requires

CMakeFiles/final.dir/LinkedList.cpp.o.provides: CMakeFiles/final.dir/LinkedList.cpp.o.requires
	$(MAKE) -f CMakeFiles/final.dir/build.make CMakeFiles/final.dir/LinkedList.cpp.o.provides.build
.PHONY : CMakeFiles/final.dir/LinkedList.cpp.o.provides

CMakeFiles/final.dir/LinkedList.cpp.o.provides.build: CMakeFiles/final.dir/LinkedList.cpp.o


# Object files for target final
final_OBJECTS = \
"CMakeFiles/final.dir/main.cpp.o" \
"CMakeFiles/final.dir/LinkedList.cpp.o"

# External object files for target final
final_EXTERNAL_OBJECTS =

final: CMakeFiles/final.dir/main.cpp.o
final: CMakeFiles/final.dir/LinkedList.cpp.o
final: CMakeFiles/final.dir/build.make
final: CMakeFiles/final.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable final"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/final.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/final.dir/build: final

.PHONY : CMakeFiles/final.dir/build

CMakeFiles/final.dir/requires: CMakeFiles/final.dir/main.cpp.o.requires
CMakeFiles/final.dir/requires: CMakeFiles/final.dir/LinkedList.cpp.o.requires

.PHONY : CMakeFiles/final.dir/requires

CMakeFiles/final.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/final.dir/cmake_clean.cmake
.PHONY : CMakeFiles/final.dir/clean

CMakeFiles/final.dir/depend:
	cd /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/cmake-build-debug /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/cmake-build-debug /Users/dhruvsandesara/Desktop/sem3/ee312/projects/final/cmake-build-debug/CMakeFiles/final.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/final.dir/depend

