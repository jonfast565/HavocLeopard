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
CMAKE_COMMAND = C:\Users\jfast\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.5153.40\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\jfast\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.5153.40\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jfast\Desktop\Repos\HavocLeopard

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jfast\Desktop\Repos\HavocLeopard\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gccStaticLibs.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gccStaticLibs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gccStaticLibs.dir/flags.make

CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.obj: CMakeFiles/gccStaticLibs.dir/flags.make
CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.obj: CMakeFiles/gccStaticLibs.dir/includes_CXX.rsp
CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.obj: ../src/cpu-torture/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jfast\Desktop\Repos\HavocLeopard\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gccStaticLibs.dir\src\cpu-torture\main.cpp.obj -c C:\Users\jfast\Desktop\Repos\HavocLeopard\src\cpu-torture\main.cpp

CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jfast\Desktop\Repos\HavocLeopard\src\cpu-torture\main.cpp > CMakeFiles\gccStaticLibs.dir\src\cpu-torture\main.cpp.i

CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jfast\Desktop\Repos\HavocLeopard\src\cpu-torture\main.cpp -o CMakeFiles\gccStaticLibs.dir\src\cpu-torture\main.cpp.s

CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.obj: CMakeFiles/gccStaticLibs.dir/flags.make
CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.obj: CMakeFiles/gccStaticLibs.dir/includes_CXX.rsp
CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.obj: ../src/ram-torture/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jfast\Desktop\Repos\HavocLeopard\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\gccStaticLibs.dir\src\ram-torture\main.cpp.obj -c C:\Users\jfast\Desktop\Repos\HavocLeopard\src\ram-torture\main.cpp

CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jfast\Desktop\Repos\HavocLeopard\src\ram-torture\main.cpp > CMakeFiles\gccStaticLibs.dir\src\ram-torture\main.cpp.i

CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jfast\Desktop\Repos\HavocLeopard\src\ram-torture\main.cpp -o CMakeFiles\gccStaticLibs.dir\src\ram-torture\main.cpp.s

# Object files for target gccStaticLibs
gccStaticLibs_OBJECTS = \
"CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.obj" \
"CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.obj"

# External object files for target gccStaticLibs
gccStaticLibs_EXTERNAL_OBJECTS =

libgccStaticLibs.dll: CMakeFiles/gccStaticLibs.dir/src/cpu-torture/main.cpp.obj
libgccStaticLibs.dll: CMakeFiles/gccStaticLibs.dir/src/ram-torture/main.cpp.obj
libgccStaticLibs.dll: CMakeFiles/gccStaticLibs.dir/build.make
libgccStaticLibs.dll: CMakeFiles/gccStaticLibs.dir/linklibs.rsp
libgccStaticLibs.dll: CMakeFiles/gccStaticLibs.dir/objects1.rsp
libgccStaticLibs.dll: CMakeFiles/gccStaticLibs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jfast\Desktop\Repos\HavocLeopard\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libgccStaticLibs.dll"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gccStaticLibs.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gccStaticLibs.dir/build: libgccStaticLibs.dll

.PHONY : CMakeFiles/gccStaticLibs.dir/build

CMakeFiles/gccStaticLibs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\gccStaticLibs.dir\cmake_clean.cmake
.PHONY : CMakeFiles/gccStaticLibs.dir/clean

CMakeFiles/gccStaticLibs.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jfast\Desktop\Repos\HavocLeopard C:\Users\jfast\Desktop\Repos\HavocLeopard C:\Users\jfast\Desktop\Repos\HavocLeopard\cmake-build-debug C:\Users\jfast\Desktop\Repos\HavocLeopard\cmake-build-debug C:\Users\jfast\Desktop\Repos\HavocLeopard\cmake-build-debug\CMakeFiles\gccStaticLibs.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gccStaticLibs.dir/depend
