cmake_minimum_required(VERSION 3.28)

#Cross compile options:

#For some reason, this is ignored if it is set in the preset file
set(CMAKE_TOOLCHAIN_FILE $ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake)

project(archipelago-interface CXX ASM_MASM)

set(CMAKE_ASM_MASM_FLAGS "-10 -win64")


add_subdirectory(subprojects/wswrap)
add_subdirectory(subprojects/apclientpp)
add_subdirectory(archipelago-interface)
