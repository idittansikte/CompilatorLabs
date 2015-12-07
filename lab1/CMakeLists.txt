cmake_minimum_required(VERSION 3.3)
project(lab1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    lab1.cc
    lab1.hh
    lex.cc
    lex.hh
    main.cc)

add_executable(lab1 ${SOURCE_FILES})