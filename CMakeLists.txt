cmake_minimum_required(VERSION 3.13)
project(chaos_monkey)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")

add_library(gccStaticLibs SHARED main.cpp)
set(CMAKE_EXE_LINKER_FLAGS " -static")
target_link_libraries(gccStaticLibs -static-libgcc -static-libstdc++)

add_executable(chaos_monkey main.cpp exit_mutex.h main.h title_bar.h)