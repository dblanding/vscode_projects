cmake_minimum_required (VERSION 3.0.0 FATAL_ERROR)

SET(CMAKE_INSTALL_PREFIX "/home/doug/OCC/opencascade-install")

SET(OpenCASCADE_DIR "/home/doug/OCC/opencascade-install/lib/cmake/opencascade")

project(Lesson15_PR CXX)

find_package(OpenCASCADE)

include_directories(SYSTEM ${OpenCASCADE_INCLUDE_DIR})

message(STATUS "OpenCASCADE_INCLUDE_DIR= ${OpenCASCADE_INCLUDE_DIR}")

add_executable(Lesson15_PR
  main.cpp
)

message(STATUS "OpenCASCADE_LIBRARY_DIR= ${OpenCASCADE_LIBRARY_DIR}")

# Add linker options
foreach(LIB ${OpenCASCADE_LIBRARIES})
  target_link_libraries(Lesson15_PR debug ${OpenCASCADE_LIBRARY_DIR}/lib${LIB}.so)
  message(STATUS "LIB=${LIB}")
endforeach()

