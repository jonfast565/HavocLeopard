cmake_minimum_required(VERSION 3.13)
project(havoc_leopard)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")
set(CMAKE_EXE_LINKER_FLAGS " -static")

add_library(gccStaticLibs SHARED
        src/cpu-torture/main.cpp
        src/ram-torture/main.cpp)

target_link_libraries(gccStaticLibs -static-libgcc -static-libstdc++)

include_directories(include)

add_executable(hl-cpu-torture
        src/cpu-torture/main.cpp
        src/cpu-torture/main.hpp
        include/exit_mutex.hpp
        include/title_bar.hpp)

add_executable(hl-ram-torture
        src/ram-torture/main.cpp
        src/ram-torture/main.hpp
        include/exit_mutex.hpp
        include/title_bar.hpp)