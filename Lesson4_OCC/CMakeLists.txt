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
