cmake_minimum_required(VERSION 3.13)
project(ZCC)

set(CMAKE_CXX_STANDARD 11)

add_executable(ZCC main.cpp common.h semantic.h semantic.cpp compiler.cpp compiler.h parser.cpp lexial.cpp generator.cpp error.cpp)
#add_custom_target(ZCC COMMAND make -C ${ZCC_SOURCE_DIR})