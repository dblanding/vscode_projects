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
CMAKE_SOURCE_DIR = /home/doug/vscode_projects/Lesson4_OCC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/doug/vscode_projects/Lesson4_OCC/build

# Include any dependencies generated for this target.
include CMakeFiles/Lesson_04.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lesson_04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lesson_04.dir/flags.make

CMakeFiles/Lesson_04.dir/main.cpp.o: CMakeFiles/Lesson_04.dir/flags.make
CMakeFiles/Lesson_04.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doug/vscode_projects/Lesson4_OCC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lesson_04.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson_04.dir/main.cpp.o -c /home/doug/vscode_projects/Lesson4_OCC/main.cpp

CMakeFiles/Lesson_04.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson_04.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doug/vscode_projects/Lesson4_OCC/main.cpp > CMakeFiles/Lesson_04.dir/main.cpp.i

CMakeFiles/Lesson_04.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson_04.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doug/vscode_projects/Lesson4_OCC/main.cpp -o CMakeFiles/Lesson_04.dir/main.cpp.s

CMakeFiles/Lesson_04.dir/Viewer.cpp.o: CMakeFiles/Lesson_04.dir/flags.make
CMakeFiles/Lesson_04.dir/Viewer.cpp.o: ../Viewer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doug/vscode_projects/Lesson4_OCC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lesson_04.dir/Viewer.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson_04.dir/Viewer.cpp.o -c /home/doug/vscode_projects/Lesson4_OCC/Viewer.cpp

CMakeFiles/Lesson_04.dir/Viewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson_04.dir/Viewer.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doug/vscode_projects/Lesson4_OCC/Viewer.cpp > CMakeFiles/Lesson_04.dir/Viewer.cpp.i

CMakeFiles/Lesson_04.dir/Viewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson_04.dir/Viewer.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doug/vscode_projects/Lesson4_OCC/Viewer.cpp -o CMakeFiles/Lesson_04.dir/Viewer.cpp.s

CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.o: CMakeFiles/Lesson_04.dir/flags.make
CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.o: ../ViewerInteractor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doug/vscode_projects/Lesson4_OCC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.o -c /home/doug/vscode_projects/Lesson4_OCC/ViewerInteractor.cpp

CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doug/vscode_projects/Lesson4_OCC/ViewerInteractor.cpp > CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.i

CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doug/vscode_projects/Lesson4_OCC/ViewerInteractor.cpp -o CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.s

# Object files for target Lesson_04
Lesson_04_OBJECTS = \
"CMakeFiles/Lesson_04.dir/main.cpp.o" \
"CMakeFiles/Lesson_04.dir/Viewer.cpp.o" \
"CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.o"

# External object files for target Lesson_04
Lesson_04_EXTERNAL_OBJECTS =

Lesson_04: CMakeFiles/Lesson_04.dir/main.cpp.o
Lesson_04: CMakeFiles/Lesson_04.dir/Viewer.cpp.o
Lesson_04: CMakeFiles/Lesson_04.dir/ViewerInteractor.cpp.o
Lesson_04: CMakeFiles/Lesson_04.dir/build.make
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKernel.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKMath.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKG2d.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKG3d.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKGeomBase.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKBRep.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKGeomAlgo.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKTopAlgo.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKPrim.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKBO.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKShHealing.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKBool.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKHLR.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKFillet.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKOffset.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKFeat.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKMesh.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXMesh.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKService.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKV3d.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKOpenGl.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKMeshVS.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKIVtk.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKCDF.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKLCAF.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKCAF.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKBinL.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXmlL.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKBin.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXml.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKStdL.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKStd.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKTObj.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKBinTObj.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXmlTObj.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKVCAF.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXSBase.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKSTEPBase.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKSTEPAttr.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKSTEP209.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKSTEP.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKIGES.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXCAF.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXDEIGES.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXDESTEP.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKSTL.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKVRML.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXmlXCAF.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKBinXCAF.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKRWMesh.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKDraw.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKTopTest.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKOpenGlTest.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKViewerTest.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXSDRAW.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKDCAF.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKXDEDRAW.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKTObjDRAW.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKQADraw.so
Lesson_04: /home/doug/OCC/opencascade-install/lib/libTKIVtkDraw.so
Lesson_04: CMakeFiles/Lesson_04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/doug/vscode_projects/Lesson4_OCC/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Lesson_04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lesson_04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lesson_04.dir/build: Lesson_04

.PHONY : CMakeFiles/Lesson_04.dir/build

CMakeFiles/Lesson_04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lesson_04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lesson_04.dir/clean

CMakeFiles/Lesson_04.dir/depend:
	cd /home/doug/vscode_projects/Lesson4_OCC/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/doug/vscode_projects/Lesson4_OCC /home/doug/vscode_projects/Lesson4_OCC /home/doug/vscode_projects/Lesson4_OCC/build /home/doug/vscode_projects/Lesson4_OCC/build /home/doug/vscode_projects/Lesson4_OCC/build/CMakeFiles/Lesson_04.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lesson_04.dir/depend

