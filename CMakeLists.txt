cmake_minimum_required(VERSION 2.8)

project(Printer)

set(TARGET_SRC ./src/main.cpp ./src/printer.cpp)
set(TARGET_INC ./inc/printer.h)
set(TARGET_GTEST ./tests/main.cpp ./tests/sum.cpp ./src/printer.cpp)


add_executable(${PROJECT_NAME} ${TARGET_SRC} ${TARGET_INC})
INCLUDE_DIRECTORIES(./inc)

# TESTS
set(GTEST_LIBRARY "$ENV{GTEST_LIBRARY}")
set(GTEST_INCLUDE_DIR "$ENV{GTEST_INCLUDE_DIR}")
set(GTEST_MAIN_LIBRARY "$ENV{GTEST_MAIN_LIBRARY}")
enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_executable(runUnitTests ${TARGET_GTEST})

target_link_libraries(runUnitTests ${GTEST_LIBRARY} ${GTEST_MAIN_LIBRARY})

