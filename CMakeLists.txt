cmake_minimum_required(VERSION 3.26)
project(ci_cd_hello_world)

set(CMAKE_CXX_STANDARD 23)

option(BUILD_UNIT_TESTS
        "build unit tests, that run on your pc. Therefore crosscompiling is disabled and it is strongly recommended not to mix both build directories!"
        OFF)

if (BUILD_UNIT_TESTS)
    message("adding tests")
    add_subdirectory(src/test)
else ()
    message("no tests")
endif ()

add_subdirectory(src/main)
