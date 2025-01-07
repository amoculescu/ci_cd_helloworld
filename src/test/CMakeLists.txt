cmake_minimum_required(VERSION 3.26)

include(FetchContent)
project(TestBuild)

set(CMAKE_CXX_STANDARD 23)
SET(CMAKE_BUILD_TYPE Debug)  # necessary for debugging/setting breakpoints

add_compile_options(-O3)
add_compile_options(--coverage)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)
enable_testing()

file(GLOB_RECURSE SOURCE_FILES
        ${CMAKE_SOURCE_DIR}/src/main/**.cpp
        ${CMAKE_SOURCE_DIR}/src/main/**.c
)
# main.cpp can't be tested because it contains the void main(void) function
list(REMOVE_ITEM SOURCE_FILES
        ${CMAKE_SOURCE_DIR}/src/main/main.cpp
)

add_library(build_tests ${SOURCE_FILES})
target_include_directories (
        build_tests
        PUBLIC
        ${CMAKE_SOURCE_DIR}/src/main/
)
add_executable(all_tests
        ${CMAKE_SOURCE_DIR}/src/test/TestCustomMath.cpp
        ${CMAKE_SOURCE_DIR}/src/test/TestFirstClass.cpp
)
target_link_libraries(
        all_tests
        build_tests
        GTest::gtest_main
        gcov
)

gtest_discover_tests(all_tests)