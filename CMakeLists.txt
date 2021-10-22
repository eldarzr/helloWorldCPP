# CMakeList.txt : CMake project for HelloWorld, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("HelloWorld")

# Add source to this project's executable.
add_executable (HelloWorld "HelloWorld.cpp" "HelloWorld.h" "main.cpp")

# TODO: Add tests and install targets if needed.
