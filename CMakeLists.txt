cmake_minimum_required(VERSION 3.20)
project(cpp_bootcamp LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra -Wpedantic -Werror)

add_executable(week1 week1/main.cpp)