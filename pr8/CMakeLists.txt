cmake_minimum_required(VERSION 3.14)

project(pr8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    main
    solution.h
    profile.h
    main.cpp
)

add_subdirectory(
    "${CMAKE_CURRENT_SOURCE_DIR}/../googletest"
    "googletest"
)

add_executable(
    tests
    tests.cpp
)

target_include_directories(
    tests PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_link_libraries(
    tests PRIVATE
    gtest gtest_main
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)