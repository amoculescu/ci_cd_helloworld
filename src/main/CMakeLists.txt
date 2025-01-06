cmake_minimum_required(VERSION 3.26)
project(ci_cd_hello_world_build)

set(CMAKE_CXX_STANDARD 23)

file(GLOB_RECURSE SOURCE_FILES
        ${CMAKE_SOURCE_DIR}/src/main/**.cpp
        ${CMAKE_SOURCE_DIR}/src/main/**.c
)

add_library(build ${SOURCE_FILES})

add_executable(ci_cd_hello_world main.cpp)

target_link_libraries(ci_cd_hello_world build)
