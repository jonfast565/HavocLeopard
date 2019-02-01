cmake_minimum_required(VERSION 3.12.4)
project(havoc_leopard)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++ -lpthread")

add_library(cpu_utils SHARED
        src/cpu-utils/cpu_utils.cpp)

add_library(console_utils SHARED
        src/console-utils/exit_mutex.cpp)

set(PROJECT_LIBRARIES cpu_utils console_utils)
target_link_libraries(cpu_utils console_utils)

include_directories(include)

add_executable(hl-cpu-torture
        src/cpu-torture/main.cpp)
target_link_libraries(hl-cpu-torture ${PROJECT_LIBRARIES})

add_executable(hl-ram-torture
        src/ram-torture/main.cpp)
target_link_libraries(hl-ram-torture ${PROJECT_LIBRARIES})

add_executable(hl-cpu-random-spike
        src/cpu-random-spike/main.cpp)
target_link_libraries(hl-cpu-random-spike ${PROJECT_LIBRARIES})