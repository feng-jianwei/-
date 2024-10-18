cmake_minimum_required(VERSION 3.10)
project(code)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(code)
