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
CMAKE_SOURCE_DIR = /home/doug/vscode_projects/open_xbf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/doug/vscode_projects/open_xbf/build

# Include any dependencies generated for this target.
include CMakeFiles/Open_xbf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Open_xbf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Open_xbf.dir/flags.make

CMakeFiles/Open_xbf.dir/main.cpp.o: CMakeFiles/Open_xbf.dir/flags.make
CMakeFiles/Open_xbf.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/doug/vscode_projects/open_xbf/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Open_xbf.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Open_xbf.dir/main.cpp.o -c /home/doug/vscode_projects/open_xbf/main.cpp

CMakeFiles/Open_xbf.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Open_xbf.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/doug/vscode_projects/open_xbf/main.cpp > CMakeFiles/Open_xbf.dir/main.cpp.i

CMakeFiles/Open_xbf.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Open_xbf.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/doug/vscode_projects/open_xbf/main.cpp -o CMakeFiles/Open_xbf.dir/main.cpp.s

# Object files for target Open_xbf
Open_xbf_OBJECTS = \
"CMakeFiles/Open_xbf.dir/main.cpp.o"

# External object files for target Open_xbf
Open_xbf_EXTERNAL_OBJECTS =

Open_xbf: CMakeFiles/Open_xbf.dir/main.cpp.o
Open_xbf: CMakeFiles/Open_xbf.dir/build.make
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKernel.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKMath.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKG2d.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKG3d.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKGeomBase.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKBRep.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKGeomAlgo.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKTopAlgo.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKPrim.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKBO.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKShHealing.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKBool.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKHLR.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKFillet.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKOffset.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKFeat.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKMesh.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXMesh.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKService.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKV3d.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKOpenGl.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKMeshVS.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKIVtk.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKCDF.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKLCAF.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKCAF.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKBinL.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXmlL.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKBin.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXml.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKStdL.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKStd.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKTObj.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKBinTObj.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXmlTObj.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKVCAF.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXSBase.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKSTEPBase.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKSTEPAttr.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKSTEP209.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKSTEP.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKIGES.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXCAF.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXDEIGES.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXDESTEP.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKSTL.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKVRML.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXmlXCAF.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKBinXCAF.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKRWMesh.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKDraw.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKTopTest.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKOpenGlTest.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKViewerTest.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXSDRAW.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKDCAF.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKXDEDRAW.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKTObjDRAW.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKQADraw.so
Open_xbf: /home/doug/OCC/opencascade-install/lib/libTKIVtkDraw.so
Open_xbf: CMakeFiles/Open_xbf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/doug/vscode_projects/open_xbf/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Open_xbf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Open_xbf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Open_xbf.dir/build: Open_xbf

.PHONY : CMakeFiles/Open_xbf.dir/build

CMakeFiles/Open_xbf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Open_xbf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Open_xbf.dir/clean

CMakeFiles/Open_xbf.dir/depend:
	cd /home/doug/vscode_projects/open_xbf/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/doug/vscode_projects/open_xbf /home/doug/vscode_projects/open_xbf /home/doug/vscode_projects/open_xbf/build /home/doug/vscode_projects/open_xbf/build /home/doug/vscode_projects/open_xbf/build/CMakeFiles/Open_xbf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Open_xbf.dir/depend

