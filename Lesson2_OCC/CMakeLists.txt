cmake_minimum_required (VERSION 3.0.0 FATAL_ERROR)

SET(VTK_DIR "/usr/local/lib/cmake/vtk-7.1")
SET(VTK_LIBRARY_DIRS "/usr/local/lib")

SET(OpenCASCADE_DIR "/home/doug/OCC/opencascade-install/lib/cmake/opencascade")

project(Lesson_02 CXX)

find_package(VTK)

find_package(OpenCASCADE)

include_directories(SYSTEM ${VTK_INCLUDE_DIRS})

include_directories(SYSTEM ${OpenCASCADE_INCLUDE_DIR})

message(STATUS "VTK_FOUND= ${VTK_FOUND}")

message(STATUS "VTK_VERSION= ${VTK_VERSION}")

message(STATUS "VTK_INCLUDE_DIRS= ${VTK_INCLUDE_DIRS}")

message(STATUS "VTK_LIBRARY_DIRS= ${VTK_LIBRARY_DIRS}")

message(STATUS "OpenCASCADE_INCLUDE_DIR= ${OpenCASCADE_INCLUDE_DIR}")

add_executable(Lesson_02
  main.cpp
)

message(STATUS "OpenCASCADE_LIBRARY_DIR= ${OpenCASCADE_LIBRARY_DIR}")

# Add linker options
foreach(LIB ${OpenCASCADE_LIBRARIES})
  target_link_libraries(Lesson_02 debug ${OpenCASCADE_LIBRARY_DIR}/lib${LIB}.so)
  message(STATUS "LIB=${LIB}")
endforeach()

