# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ljdong/code/c++/compile_val/test_cmake/hello

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ljdong/code/c++/compile_val/test_cmake/hello/build

# Include any dependencies generated for this target.
include src/CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Test.dir/flags.make

src/CMakeFiles/Test.dir/test1.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/test1.cpp.o: ../src/test1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ljdong/code/c++/compile_val/test_cmake/hello/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Test.dir/test1.cpp.o"
	cd /home/ljdong/code/c++/compile_val/test_cmake/hello/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/test1.cpp.o -c /home/ljdong/code/c++/compile_val/test_cmake/hello/src/test1.cpp

src/CMakeFiles/Test.dir/test1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/test1.cpp.i"
	cd /home/ljdong/code/c++/compile_val/test_cmake/hello/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ljdong/code/c++/compile_val/test_cmake/hello/src/test1.cpp > CMakeFiles/Test.dir/test1.cpp.i

src/CMakeFiles/Test.dir/test1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/test1.cpp.s"
	cd /home/ljdong/code/c++/compile_val/test_cmake/hello/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ljdong/code/c++/compile_val/test_cmake/hello/src/test1.cpp -o CMakeFiles/Test.dir/test1.cpp.s

# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/test1.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

src/libTest.a: src/CMakeFiles/Test.dir/test1.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/build.make
src/libTest.a: src/CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ljdong/code/c++/compile_val/test_cmake/hello/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libTest.a"
	cd /home/ljdong/code/c++/compile_val/test_cmake/hello/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean_target.cmake
	cd /home/ljdong/code/c++/compile_val/test_cmake/hello/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Test.dir/build: src/libTest.a

.PHONY : src/CMakeFiles/Test.dir/build

src/CMakeFiles/Test.dir/clean:
	cd /home/ljdong/code/c++/compile_val/test_cmake/hello/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Test.dir/clean

src/CMakeFiles/Test.dir/depend:
	cd /home/ljdong/code/c++/compile_val/test_cmake/hello/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ljdong/code/c++/compile_val/test_cmake/hello /home/ljdong/code/c++/compile_val/test_cmake/hello/src /home/ljdong/code/c++/compile_val/test_cmake/hello/build /home/ljdong/code/c++/compile_val/test_cmake/hello/build/src /home/ljdong/code/c++/compile_val/test_cmake/hello/build/src/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Test.dir/depend

