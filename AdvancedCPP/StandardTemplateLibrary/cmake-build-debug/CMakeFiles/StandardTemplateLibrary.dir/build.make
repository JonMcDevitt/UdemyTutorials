# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StandardTemplateLibrary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StandardTemplateLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StandardTemplateLibrary.dir/flags.make

CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj: CMakeFiles/StandardTemplateLibrary.dir/flags.make
CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj"
	C:\dev\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StandardTemplateLibrary.dir\main.cpp.obj -c C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\main.cpp

CMakeFiles/StandardTemplateLibrary.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StandardTemplateLibrary.dir/main.cpp.i"
	C:\dev\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\main.cpp > CMakeFiles\StandardTemplateLibrary.dir\main.cpp.i

CMakeFiles/StandardTemplateLibrary.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StandardTemplateLibrary.dir/main.cpp.s"
	C:\dev\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\main.cpp -o CMakeFiles\StandardTemplateLibrary.dir\main.cpp.s

CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj.requires

CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj.provides: CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\StandardTemplateLibrary.dir\build.make CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj.provides

CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj.provides.build: CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj


CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj: CMakeFiles/StandardTemplateLibrary.dir/flags.make
CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj: ../Exercises.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj"
	C:\dev\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StandardTemplateLibrary.dir\Exercises.cpp.obj -c C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Exercises.cpp

CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.i"
	C:\dev\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Exercises.cpp > CMakeFiles\StandardTemplateLibrary.dir\Exercises.cpp.i

CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.s"
	C:\dev\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Exercises.cpp -o CMakeFiles\StandardTemplateLibrary.dir\Exercises.cpp.s

CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj.requires:

.PHONY : CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj.requires

CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj.provides: CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj.requires
	$(MAKE) -f CMakeFiles\StandardTemplateLibrary.dir\build.make CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj.provides.build
.PHONY : CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj.provides

CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj.provides.build: CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj


CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj: CMakeFiles/StandardTemplateLibrary.dir/flags.make
CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj: ../Exceptions/InputException.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj"
	C:\dev\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StandardTemplateLibrary.dir\Exceptions\InputException.cpp.obj -c C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Exceptions\InputException.cpp

CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.i"
	C:\dev\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Exceptions\InputException.cpp > CMakeFiles\StandardTemplateLibrary.dir\Exceptions\InputException.cpp.i

CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.s"
	C:\dev\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Exceptions\InputException.cpp -o CMakeFiles\StandardTemplateLibrary.dir\Exceptions\InputException.cpp.s

CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj.requires:

.PHONY : CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj.requires

CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj.provides: CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj.requires
	$(MAKE) -f CMakeFiles\StandardTemplateLibrary.dir\build.make CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj.provides.build
.PHONY : CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj.provides

CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj.provides.build: CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj


CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj: CMakeFiles/StandardTemplateLibrary.dir/flags.make
CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj: ../Objects/Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj"
	C:\dev\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StandardTemplateLibrary.dir\Objects\Person.cpp.obj -c C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Objects\Person.cpp

CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.i"
	C:\dev\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Objects\Person.cpp > CMakeFiles\StandardTemplateLibrary.dir\Objects\Person.cpp.i

CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.s"
	C:\dev\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\Objects\Person.cpp -o CMakeFiles\StandardTemplateLibrary.dir\Objects\Person.cpp.s

CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj.requires:

.PHONY : CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj.requires

CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj.provides: CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj.requires
	$(MAKE) -f CMakeFiles\StandardTemplateLibrary.dir\build.make CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj.provides.build
.PHONY : CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj.provides

CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj.provides.build: CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj


# Object files for target StandardTemplateLibrary
StandardTemplateLibrary_OBJECTS = \
"CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj" \
"CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj" \
"CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj" \
"CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj"

# External object files for target StandardTemplateLibrary
StandardTemplateLibrary_EXTERNAL_OBJECTS =

StandardTemplateLibrary.exe: CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj
StandardTemplateLibrary.exe: CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj
StandardTemplateLibrary.exe: CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj
StandardTemplateLibrary.exe: CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj
StandardTemplateLibrary.exe: CMakeFiles/StandardTemplateLibrary.dir/build.make
StandardTemplateLibrary.exe: CMakeFiles/StandardTemplateLibrary.dir/linklibs.rsp
StandardTemplateLibrary.exe: CMakeFiles/StandardTemplateLibrary.dir/objects1.rsp
StandardTemplateLibrary.exe: CMakeFiles/StandardTemplateLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable StandardTemplateLibrary.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StandardTemplateLibrary.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StandardTemplateLibrary.dir/build: StandardTemplateLibrary.exe

.PHONY : CMakeFiles/StandardTemplateLibrary.dir/build

CMakeFiles/StandardTemplateLibrary.dir/requires: CMakeFiles/StandardTemplateLibrary.dir/main.cpp.obj.requires
CMakeFiles/StandardTemplateLibrary.dir/requires: CMakeFiles/StandardTemplateLibrary.dir/Exercises.cpp.obj.requires
CMakeFiles/StandardTemplateLibrary.dir/requires: CMakeFiles/StandardTemplateLibrary.dir/Exceptions/InputException.cpp.obj.requires
CMakeFiles/StandardTemplateLibrary.dir/requires: CMakeFiles/StandardTemplateLibrary.dir/Objects/Person.cpp.obj.requires

.PHONY : CMakeFiles/StandardTemplateLibrary.dir/requires

CMakeFiles/StandardTemplateLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StandardTemplateLibrary.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StandardTemplateLibrary.dir/clean

CMakeFiles/StandardTemplateLibrary.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug C:\Users\Owner\CLionProjects\UdemyTutorials\AdvancedCPP\StandardTemplateLibrary\cmake-build-debug\CMakeFiles\StandardTemplateLibrary.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StandardTemplateLibrary.dir/depend

