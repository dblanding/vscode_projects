# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/doug/vscode_projects/Lesson11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/doug/vscode_projects/Lesson11/build

# Include any dependencies generated for this target.
include CMakeFiles/Lesson11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lesson11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lesson11.dir/flags.make

CMakeFiles/Lesson11.dir/main.cpp.o: CMakeFiles/Lesson11.dir/flags.make
CMakeFiles/Lesson11.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doug/vscode_projects/Lesson11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lesson11.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson11.dir/main.cpp.o -c /home/doug/vscode_projects/Lesson11/main.cpp

CMakeFiles/Lesson11.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson11.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doug/vscode_projects/Lesson11/main.cpp > CMakeFiles/Lesson11.dir/main.cpp.i

CMakeFiles/Lesson11.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson11.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doug/vscode_projects/Lesson11/main.cpp -o CMakeFiles/Lesson11.dir/main.cpp.s

# Object files for target Lesson11
Lesson11_OBJECTS = \
"CMakeFiles/Lesson11.dir/main.cpp.o"

# External object files for target Lesson11
Lesson11_EXTERNAL_OBJECTS =

Lesson11: CMakeFiles/Lesson11.dir/main.cpp.o
Lesson11: CMakeFiles/Lesson11.dir/build.make
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKernel.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKMath.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKG2d.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKG3d.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKGeomBase.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKBRep.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKGeomAlgo.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKTopAlgo.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKPrim.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKBO.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKShHealing.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKBool.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKHLR.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKFillet.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKOffset.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKFeat.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKMesh.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXMesh.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKService.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKV3d.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKOpenGl.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKMeshVS.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKIVtk.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKCDF.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKLCAF.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKCAF.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKBinL.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXmlL.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKBin.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXml.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKStdL.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKStd.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKTObj.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKBinTObj.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXmlTObj.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKVCAF.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXSBase.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKSTEPBase.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKSTEPAttr.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKSTEP209.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKSTEP.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKIGES.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXCAF.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXDEIGES.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXDESTEP.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKSTL.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKVRML.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXmlXCAF.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKBinXCAF.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKRWMesh.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKDraw.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKTopTest.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKOpenGlTest.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKViewerTest.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXSDRAW.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKDCAF.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKXDEDRAW.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKTObjDRAW.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKQADraw.so
Lesson11: /home/doug/OCC/opencascade-install/lib/libTKIVtkDraw.so
Lesson11: CMakeFiles/Lesson11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/doug/vscode_projects/Lesson11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lesson11"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lesson11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lesson11.dir/build: Lesson11

.PHONY : CMakeFiles/Lesson11.dir/build

CMakeFiles/Lesson11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lesson11.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lesson11.dir/clean

CMakeFiles/Lesson11.dir/depend:
	cd /home/doug/vscode_projects/Lesson11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/doug/vscode_projects/Lesson11 /home/doug/vscode_projects/Lesson11 /home/doug/vscode_projects/Lesson11/build /home/doug/vscode_projects/Lesson11/build /home/doug/vscode_projects/Lesson11/build/CMakeFiles/Lesson11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lesson11.dir/depend
