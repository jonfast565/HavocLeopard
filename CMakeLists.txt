cmake_minimum_required(VERSION 3.13)
project(havoc_leopard)

set(CMAKE_CXX_STANDARD 14)
set(GCC_LINKER_FLAGS -static-libgcc -static-libstdc++)

add_library(gccStaticLibs SHARED
        src/cpu-torture/main.cpp
        src/ram-torture/main.cpp)

add_library(cpu_utils SHARED
        src/cpu-utils/cpu_utils.cpp)

add_library(exit_utils SHARED
        src/exit-utils/exit_mutex.cpp)

set(PROJECT_LIBRARIES cpu_utils exit_utils)
target_link_libraries(${PROJECT_LIBRARIES})

include_directories(include)

add_executable(hl-cpu-torture
        src/cpu-torture/main.cpp)
target_link_libraries(hl-cpu-torture ${PROJECT_LIBRARIES} ${GCC_LINKER_FLAGS})

add_executable(hl-ram-torture
        src/ram-torture/main.cpp)
target_link_libraries(hl-ram-torture ${PROJECT_LIBRARIES} ${GCC_LINKER_FLAGS})

add_executable(hl-cpu-random-spike
        src/cpu-random-spike/main.cpp)
target_link_libraries(hl-cpu-random-spike ${PROJECT_LIBRARIES} ${GCC_LINKER_FLAGS})