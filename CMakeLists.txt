cmake_minimum_required(VERSION 3.11)
project(autokv)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(autokv main.cpp KVdrawer.cpp KVdrawer.h)