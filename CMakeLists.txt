cmake_minimum_required(VERSION 3.10)

# set the project name
project(CPPTetris)

# add the executable

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
add_executable(CPP-tetris main.cpp)
target_link_libraries(CPP-tetris ${CURSES_LIBRARIES})


