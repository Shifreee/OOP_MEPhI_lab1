cmake_minimum_required(VERSION 3.21)
project(lab1.exe CXX)

add_subdirectory(tests)
add_subdirectory(lib/caller)
add_subdirectory(lib/menu)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
set(SOURCE_EXE main.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_EXE})

target_link_libraries(${PROJECT_NAME} caller menu)