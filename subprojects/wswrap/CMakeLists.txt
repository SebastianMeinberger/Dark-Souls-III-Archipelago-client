add_library(wswrap INTERFACE)
target_include_directories(wswrap INTERFACE ${archipelago-interface_SOURCE_DIR}/subprojects/wswrap/wswrap/include)

set(Boost_LIBRARY_DIR /usr/lib)
set(Boost_INCLUDE_DIR /usr/include)

find_package(Boost REQUIRED COMPONENTS system)
target_include_directories(wswrap INTERFACE ${Boost_INCLUDE_DIRS})
target_link_libraries(wswrap INTERFACE Boost::system)
