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
include lib/menu/CMakeFiles/menu.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/menu/CMakeFiles/menu.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/menu/CMakeFiles/menu.dir/progress.make

# Include the compile flags for this target's objects.
include lib/menu/CMakeFiles/menu.dir/flags.make

lib/menu/CMakeFiles/menu.dir/menu.cpp.o: lib/menu/CMakeFiles/menu.dir/flags.make
lib/menu/CMakeFiles/menu.dir/menu.cpp.o: ../lib/menu/menu.cpp
lib/menu/CMakeFiles/menu.dir/menu.cpp.o: lib/menu/CMakeFiles/menu.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Mephi/Cpp/oop2024/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/menu/CMakeFiles/menu.dir/menu.cpp.o"
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/menu/CMakeFiles/menu.dir/menu.cpp.o -MF CMakeFiles/menu.dir/menu.cpp.o.d -o CMakeFiles/menu.dir/menu.cpp.o -c /mnt/c/Mephi/Cpp/oop2024/1/lib/menu/menu.cpp

lib/menu/CMakeFiles/menu.dir/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/menu.dir/menu.cpp.i"
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Mephi/Cpp/oop2024/1/lib/menu/menu.cpp > CMakeFiles/menu.dir/menu.cpp.i

lib/menu/CMakeFiles/menu.dir/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/menu.dir/menu.cpp.s"
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/menu && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Mephi/Cpp/oop2024/1/lib/menu/menu.cpp -o CMakeFiles/menu.dir/menu.cpp.s

# Object files for target menu
menu_OBJECTS = \
"CMakeFiles/menu.dir/menu.cpp.o"

# External object files for target menu
menu_EXTERNAL_OBJECTS =

lib/menu/libmenu.a: lib/menu/CMakeFiles/menu.dir/menu.cpp.o
lib/menu/libmenu.a: lib/menu/CMakeFiles/menu.dir/build.make
lib/menu/libmenu.a: lib/menu/CMakeFiles/menu.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Mephi/Cpp/oop2024/1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmenu.a"
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/menu && $(CMAKE_COMMAND) -P CMakeFiles/menu.dir/cmake_clean_target.cmake
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/menu && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/menu.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/menu/CMakeFiles/menu.dir/build: lib/menu/libmenu.a
.PHONY : lib/menu/CMakeFiles/menu.dir/build

lib/menu/CMakeFiles/menu.dir/clean:
	cd /mnt/c/Mephi/Cpp/oop2024/1/build/lib/menu && $(CMAKE_COMMAND) -P CMakeFiles/menu.dir/cmake_clean.cmake
.PHONY : lib/menu/CMakeFiles/menu.dir/clean

lib/menu/CMakeFiles/menu.dir/depend:
	cd /mnt/c/Mephi/Cpp/oop2024/1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Mephi/Cpp/oop2024/1 /mnt/c/Mephi/Cpp/oop2024/1/lib/menu /mnt/c/Mephi/Cpp/oop2024/1/build /mnt/c/Mephi/Cpp/oop2024/1/build/lib/menu /mnt/c/Mephi/Cpp/oop2024/1/build/lib/menu/CMakeFiles/menu.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/menu/CMakeFiles/menu.dir/depend

