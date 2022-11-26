# I tend to forget how to compile/build c++

## I just chased through a bunch of links to help remind me.

* [RapidTables](https://www.rapidtables.com/code/linux/gcc/gcc-i.html)
* [From sources to executables](https://enccs.github.io/cmake-workshop/hello-cmake/)
* [Building a C++ project with CMake](https://ncona.com/2019/03/building-a-cpp-project-with-cmake/)
* [Shared libraries with GCC on Linux](https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html)

## I then checked out this Capstone Project: Elastic Collisions of Multiple Balls Simulation

* [Project on GitHub](https://github.com/marcotf-git/cpp)
* [Copy (on my computer)](/home/doug/Documents/ball_collision_simulation/cpp/README.md)

* It contains Basic Build Instructions

    * Copy all the files and src folder in a new folder.
    * Make a build directory in the top level directory: mkdir build.
    * Change to the build: cd build
    * Generate the make files: cmake ..
    * Compile: make
    * Copy the file Parameters.txt from src to the build folder
    * Run it: ./CapstoneProjectCmake.

## Finally, I discovered how I succeeded previously to run C++ Opencascade projects using VS Code

* The explanation was contained in my file `OCC_Lessons_on_Windows/docs/Lesson5.md`
which I repeat here:

## ----------------------------------------------------------------------------

* Interestingly, when I used CMakeLists.txt to build Lesson_04 on Ubuntu, I didn't face this same problem. I believe the reason is that when I installed OpenCascade in Ubuntu, I installed freetype **prior** to installing OpenCascade, so its shared library is in a standard location, requiring no tinkering with **PATH**.

* Another thing I did on Ubuntu was to set Open_CASCADE_DIR in the CMakeLists.txt file. (In Windows it was done using VisualStudio property pages.)

* Below is `CMakeLists.txt` used on Ubuntu. Using this as a template, perhaps it will now be possible to build any of Quaoar's Workshop OpenCascade Lessons on Ububntu (as long as they don't contain **Windows only** code).

```
cmake_minimum_required (VERSION 3.0.0 FATAL_ERROR)

SET(CMAKE_INSTALL_PREFIX "/home/doug/OCC/opencascade-install")

SET(OpenCASCADE_DIR "/home/doug/OCC/opencascade-install/lib/cmake/opencascade")

project(Lesson_04 CXX)

find_package(OpenCASCADE)

# Configure C++ compiler's includes dir
include_directories(SYSTEM ${OpenCASCADE_INCLUDE_DIR})

add_executable(Lesson_04
  main.cpp
  Viewer.cpp
  ViewerInteractor.cpp
  Viewer.h
  ViewerInteractor.h
)

message(STATUS "OpenCASCADE_LIBRARY_DIR= ${OpenCASCADE_LIBRARY_DIR}")

# Add linker options
foreach(LIB ${OpenCASCADE_LIBRARIES})
  target_link_libraries(Lesson_04 debug ${OpenCASCADE_LIBRARY_DIR}/lib${LIB}.so)
  message(STATUS "LIB=${LIB}")
endforeach()
```
