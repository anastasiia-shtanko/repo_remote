# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/ashtanko/.local/bin/cmake

# The command to remove a file.
RM = /home/ashtanko/.local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ashtanko/repo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ashtanko/repo/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/SimpleTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/SimpleTest.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/SimpleTest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/SimpleTest.dir/flags.make

tests/CMakeFiles/SimpleTest.dir/main.cpp.o: tests/CMakeFiles/SimpleTest.dir/flags.make
tests/CMakeFiles/SimpleTest.dir/main.cpp.o: ../tests/main.cpp
tests/CMakeFiles/SimpleTest.dir/main.cpp.o: tests/CMakeFiles/SimpleTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ashtanko/repo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/SimpleTest.dir/main.cpp.o"
	cd /home/ashtanko/repo/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/SimpleTest.dir/main.cpp.o -MF CMakeFiles/SimpleTest.dir/main.cpp.o.d -o CMakeFiles/SimpleTest.dir/main.cpp.o -c /home/ashtanko/repo/tests/main.cpp

tests/CMakeFiles/SimpleTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SimpleTest.dir/main.cpp.i"
	cd /home/ashtanko/repo/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ashtanko/repo/tests/main.cpp > CMakeFiles/SimpleTest.dir/main.cpp.i

tests/CMakeFiles/SimpleTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SimpleTest.dir/main.cpp.s"
	cd /home/ashtanko/repo/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ashtanko/repo/tests/main.cpp -o CMakeFiles/SimpleTest.dir/main.cpp.s

# Object files for target SimpleTest
SimpleTest_OBJECTS = \
"CMakeFiles/SimpleTest.dir/main.cpp.o"

# External object files for target SimpleTest
SimpleTest_EXTERNAL_OBJECTS =

tests/SimpleTest: tests/CMakeFiles/SimpleTest.dir/main.cpp.o
tests/SimpleTest: tests/CMakeFiles/SimpleTest.dir/build.make
tests/SimpleTest: lib/libgtest.a
tests/SimpleTest: lib/libgmock.a
tests/SimpleTest: lib/libgtest_main.a
tests/SimpleTest: lib/libgtest.a
tests/SimpleTest: tests/CMakeFiles/SimpleTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ashtanko/repo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SimpleTest"
	cd /home/ashtanko/repo/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SimpleTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/SimpleTest.dir/build: tests/SimpleTest
.PHONY : tests/CMakeFiles/SimpleTest.dir/build

tests/CMakeFiles/SimpleTest.dir/clean:
	cd /home/ashtanko/repo/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/SimpleTest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/SimpleTest.dir/clean

tests/CMakeFiles/SimpleTest.dir/depend:
	cd /home/ashtanko/repo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ashtanko/repo /home/ashtanko/repo/tests /home/ashtanko/repo/build /home/ashtanko/repo/build/tests /home/ashtanko/repo/build/tests/CMakeFiles/SimpleTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/SimpleTest.dir/depend

