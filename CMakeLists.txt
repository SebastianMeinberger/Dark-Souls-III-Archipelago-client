cmake_minimum_required(VERSION 3.28)

#Cross compile options:

set(CMAKE_SYSTEM_NAME MinGW)
set(VCPKG_CMAKE_SYSTEM_NAME MinGW)
#set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
#set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)
set(VCPKG_TARGET_TRIPLET x64-mingw-static)
set(CMAKE_PREFIX_PATH /usr)
set(CMAKE_TOOLCHAIN_FILE /opt/vcpkg/scripts/buildsystems/vcpkg.cmake)
#set(CMAKE_ASM_FLAGS "${CFLAGS} -x assembler-with-cpp")
#set(ASM_MASMFLAGS -10 -win64)
project(archipelago-interface CXX ASM_MASM)

set(CMAKE_ASM_MASM_COMPILER jwasm)
set(CMAKE_ASM_MASM_FLAGS "-10 -win64")


add_subdirectory(subprojects/wswrap)
add_subdirectory(subprojects/apclientpp)
add_subdirectory(archipelago-interface)
