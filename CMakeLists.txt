cmake_minimum_required(VERSION 3.28)

project(archipelago-interface CXX ASM_MASM)

set(CMAKE_ASM_MASM_FLAGS "-10 -win64")


add_subdirectory(subprojects/wswrap)
add_subdirectory(subprojects/apclientpp)
add_subdirectory(archipelago-interface)
