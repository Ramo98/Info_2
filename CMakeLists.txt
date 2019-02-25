# cmake_minimum_required(VERSION 3.5)
set(CMAKE_LEGACY_CYGWIN_WIN32 0) # Remove when CMake >= 2.8.4 is required
project(Info_2 C)

set(CMAKE_C_STANDARD 99)

add_executable(Info_2 task_2.c)
add_executable(task_1 task_1.c)
add_executable(task_2 task_2.c)
add_executable(task_3 task_3.c)
add_executable(task_4 task_4.c)
add_executable(task_5 task_5.c)
add_executable(test test.c)