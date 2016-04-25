cmake_minimum_required(VERSION 3.4)
project(b_tree_data_base)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.c)

add_executable(b_tree_data_base ${SOURCE_FILES})