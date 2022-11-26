cmake_minimum_required (VERSION 3.0.0 FATAL_ERROR)

SET(CMAKE_INSTALL_PREFIX "/home/doug/OCC/opencascade-install")

SET(OpenCASCADE_DIR "/home/doug/OCC/opencascade-install/lib/cmake/opencascade")

project(Lesson_01 CXX)

find_package(OpenCASCADE)

include_directories(SYSTEM ${OpenCASCADE_INCLUDE_DIR})

message(STATUS "OpenCASCADE_INCLUDE_DIR= ${OpenCASCADE_INCLUDE_DIR}")

add_executable(Lesson_01
  main.cpp
)

message(STATUS "OpenCASCADE_LIBRARY_DIR= ${OpenCASCADE_LIBRARY_DIR}")

# Add linker options
foreach(LIB ${OpenCASCADE_LIBRARIES})
  target_link_libraries(Lesson_01 debug ${OpenCASCADE_LIBRARY_DIR}/lib${LIB}.so)
  # target_link_libraries(Lesson_01 general -l${LIB}) # doesn't work
  message(STATUS "LIB=${LIB}")
endforeach()

# Adjust runtime environment
# set_property(TARGET Lesson_01 PROPERTY VS_DEBUGGER_ENVIRONMENT "PATH=$<$<CONFIG:DEBUG>:${OpenCASCADE_BINARY_DIR}d>$<$<NOT:$<CONFIG:DEBUG>>:${OpenCASCADE_BINARY_DIR}>;%PATH%")
