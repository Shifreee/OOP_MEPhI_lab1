# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Mephi/Cpp/oop2024/1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Mephi/Cpp/oop2024/1/build

# Include any dependencies generated for this target.
include lib/caller/CMakeFiles/caller.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/caller/CMakeFiles/caller.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/caller/CMakeFiles/caller.dir/progress.make

# Include the compile flags for this target's objects.
include lib/caller/CMakeFiles/caller.dir/flags.make

lib/caller/CMakeFiles/caller.dir/caller.cpp.o: lib/caller/CMakeFiles/caller.dir/flags.make
lib/caller/CMakeFiles/caller.dir/caller.cpp.o: ../lib/caller/caller.cpp
lib/caller/CMakeFiles/caller.dir/caller.cpp.o: lib/caller/CMakeFiles/caller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Mephi/Cpp/oop2024/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/caller/CMakeFiles/caller.dir/caller.cpp.o"
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/caller/CMakeFiles/caller.dir/caller.cpp.o -MF CMakeFiles/caller.dir/caller.cpp.o.d -o CMakeFiles/caller.dir/caller.cpp.o -c /mnt/c/Mephi/Cpp/oop2024/1/lib/caller/caller.cpp

lib/caller/CMakeFiles/caller.dir/caller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/caller.dir/caller.cpp.i"
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Mephi/Cpp/oop2024/1/lib/caller/caller.cpp > CMakeFiles/caller.dir/caller.cpp.i

lib/caller/CMakeFiles/caller.dir/caller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/caller.dir/caller.cpp.s"
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/caller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Mephi/Cpp/oop2024/1/lib/caller/caller.cpp -o CMakeFiles/caller.dir/caller.cpp.s

# Object files for target caller
caller_OBJECTS = \
"CMakeFiles/caller.dir/caller.cpp.o"

# External object files for target caller
caller_EXTERNAL_OBJECTS =

lib/caller/libcaller.a: lib/caller/CMakeFiles/caller.dir/caller.cpp.o
lib/caller/libcaller.a: lib/caller/CMakeFiles/caller.dir/build.make
lib/caller/libcaller.a: lib/caller/CMakeFiles/caller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Mephi/Cpp/oop2024/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcaller.a"
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/caller && $(CMAKE_COMMAND) -P CMakeFiles/caller.dir/cmake_clean_target.cmake
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/caller && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/caller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/caller/CMakeFiles/caller.dir/build: lib/caller/libcaller.a
.PHONY : lib/caller/CMakeFiles/caller.dir/build

lib/caller/CMakeFiles/caller.dir/clean:
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/caller && $(CMAKE_COMMAND) -P CMakeFiles/caller.dir/cmake_clean.cmake
.PHONY : lib/caller/CMakeFiles/caller.dir/clean

lib/caller/CMakeFiles/caller.dir/depend:
	cd /mnt/c/Mephi/Cpp/oop2024/1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Mephi/Cpp/oop2024/1 /mnt/c/Mephi/Cpp/oop2024/1/lib/caller /mnt/c/Mephi/Cpp/oop2024/1/build /mnt/c/Mephi/Cpp/oop2024/1/build/lib/caller /mnt/c/Mephi/Cpp/oop2024/1/build/lib/caller/CMakeFiles/caller.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/caller/CMakeFiles/caller.dir/depend

