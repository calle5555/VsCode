# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\build

# Include any dependencies generated for this target.
include CMakeFiles/OOP.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/OOP.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/OOP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OOP.dir/flags.make

CMakeFiles/OOP.dir/main.cpp.obj: CMakeFiles/OOP.dir/flags.make
CMakeFiles/OOP.dir/main.cpp.obj: ../main.cpp
CMakeFiles/OOP.dir/main.cpp.obj: CMakeFiles/OOP.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OOP.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OOP.dir/main.cpp.obj -MF CMakeFiles\OOP.dir\main.cpp.obj.d -o CMakeFiles\OOP.dir\main.cpp.obj -c C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\main.cpp

CMakeFiles/OOP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OOP.dir/main.cpp.i"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\main.cpp > CMakeFiles\OOP.dir\main.cpp.i

CMakeFiles/OOP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OOP.dir/main.cpp.s"
	C:\msys64\mingw64\bin\x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\main.cpp -o CMakeFiles\OOP.dir\main.cpp.s

# Object files for target OOP
OOP_OBJECTS = \
"CMakeFiles/OOP.dir/main.cpp.obj"

# External object files for target OOP
OOP_EXTERNAL_OBJECTS =

OOP.exe: CMakeFiles/OOP.dir/main.cpp.obj
OOP.exe: CMakeFiles/OOP.dir/build.make
OOP.exe: CMakeFiles/OOP.dir/linklibs.rsp
OOP.exe: CMakeFiles/OOP.dir/objects1.rsp
OOP.exe: CMakeFiles/OOP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OOP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\OOP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OOP.dir/build: OOP.exe
.PHONY : CMakeFiles/OOP.dir/build

CMakeFiles/OOP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\OOP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/OOP.dir/clean

CMakeFiles/OOP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\build C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\build C:\Users\lukas\AppData\Local\Programs\VScode\ObProg\VsCode\build\CMakeFiles\OOP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OOP.dir/depend
