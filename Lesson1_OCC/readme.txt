Learning how to get the linker to find the library files was pretty tricky.
First, in order to get the build to complete successsfully (return 0),
I used this foreach block in CMakeLists.txt

foreach(LIB ${OpenCASCADE_LIBRARIES})
  target_link_libraries(Lesson_01 debug ${OpenCASCADE_LIBRARY_DIR}/lib${LIB}.so)
endforeach()

And you really have to **spell out** the path with exact filename, as above.
You can't just use -l${LIB}
You have to use ${OpenCASCADE_LIBRARY_DIR}/lib${LIB}.so

This solved the problem and the executable gets written.
However, in order to execute the file successsfully,
the environment variable LD_LIBRARY_PATH must be set and exported.

$ LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/doug/OCC/opencascade-install/lib
$ export LD_LIBRARY_PATH
$ ./Lesson_01