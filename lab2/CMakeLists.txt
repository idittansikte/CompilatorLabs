cmake_minimum_required(VERSION 3.3)
project(lab2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    old_not_used_files/main-old.cc
    test/comments
    test/identifiers
    test/numbers
    main.cc
    scanner.h
    scanner.l)

add_executable(lab2 ${SOURCE_FILES})