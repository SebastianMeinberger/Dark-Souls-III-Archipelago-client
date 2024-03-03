cmake_minimum_required(VERSION 3.28)

#Cross compile options:

set(CMAKE_SYSTEM_NAME MinGW)
set(VCPKG_CMAKE_SYSTEM_NAME MinGW)
set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)
set(VCPKG_TARGET_TRIPLET x64-mingw-static)
set(CMAKE_PREFIX_PATH /usr)
set(CMAKE_TOOLCHAIN_FILE /opt/vcpkg/scripts/buildsystems/vcpkg.cmake)
#include_directories(/usr/x86_64-w64-mingw32/include)

project(archipelago-interface)

add_subdirectory(subprojects/wswrap)
add_subdirectory(subprojects/apclientpp)
add_subdirectory(archipelago-interface)


#add_subdirectory(subprojects/minhook)
#add_subdirectory(subprojects/openssl)
