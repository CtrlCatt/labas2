# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\labas2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\labas2\build

# Include any dependencies generated for this target.
include CMakeFiles/googltest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/googltest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/googltest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/googltest.dir/flags.make

CMakeFiles/googltest.dir/googltest.cpp.obj: CMakeFiles/googltest.dir/flags.make
CMakeFiles/googltest.dir/googltest.cpp.obj: CMakeFiles/googltest.dir/includes_CXX.rsp
CMakeFiles/googltest.dir/googltest.cpp.obj: C:/labas2/googltest.cpp
CMakeFiles/googltest.dir/googltest.cpp.obj: CMakeFiles/googltest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\labas2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/googltest.dir/googltest.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/googltest.dir/googltest.cpp.obj -MF CMakeFiles\googltest.dir\googltest.cpp.obj.d -o CMakeFiles\googltest.dir\googltest.cpp.obj -c C:\labas2\googltest.cpp

CMakeFiles/googltest.dir/googltest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/googltest.dir/googltest.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\labas2\googltest.cpp > CMakeFiles\googltest.dir\googltest.cpp.i

CMakeFiles/googltest.dir/googltest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/googltest.dir/googltest.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\labas2\googltest.cpp -o CMakeFiles\googltest.dir\googltest.cpp.s

# Object files for target googltest
googltest_OBJECTS = \
"CMakeFiles/googltest.dir/googltest.cpp.obj"

# External object files for target googltest
googltest_EXTERNAL_OBJECTS =

googltest.exe: CMakeFiles/googltest.dir/googltest.cpp.obj
googltest.exe: CMakeFiles/googltest.dir/build.make
googltest.exe: lib/libgtest_main.a
googltest.exe: lib/libgtest.a
googltest.exe: CMakeFiles/googltest.dir/linkLibs.rsp
googltest.exe: CMakeFiles/googltest.dir/objects1.rsp
googltest.exe: CMakeFiles/googltest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\labas2\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable googltest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\googltest.dir\link.txt --verbose=$(VERBOSE)
	"C:\Program Files\CMake\bin\cmake.exe" -D TEST_TARGET=googltest -D TEST_EXECUTABLE=C:/labas2/build/googltest.exe -D TEST_EXECUTOR= -D TEST_WORKING_DIR=C:/labas2/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=googltest_TESTS -D CTEST_FILE=C:/labas2/build/googltest[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P "C:/Program Files/CMake/share/cmake-3.30/Modules/GoogleTestAddTests.cmake"

# Rule to build all files generated by this target.
CMakeFiles/googltest.dir/build: googltest.exe
.PHONY : CMakeFiles/googltest.dir/build

CMakeFiles/googltest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\googltest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/googltest.dir/clean

CMakeFiles/googltest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\labas2 C:\labas2 C:\labas2\build C:\labas2\build C:\labas2\build\CMakeFiles\googltest.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/googltest.dir/depend

