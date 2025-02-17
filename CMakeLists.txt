cmake_minimum_required(VERSION 3.20)
project(zephyr LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(zephyr
    src/inode.cpp
    src/inode.hpp
    src/data_block.cpp
    src/data_block.hpp
)