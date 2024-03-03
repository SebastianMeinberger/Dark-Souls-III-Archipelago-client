add_library(dinput8 SHARED src/dinput8.cpp)

target_include_directories(dinput8 PUBLIC ${archipelago-interface_SOURCE_DIR}/archipelago-interface/inc)
link_directories(${archipelago-interface_SOURCE_DIR}/archipelago-interface/src)

find_package(nlohmann-json)
find_package(minhook)

target_link_libraries(dinput8 PRIVATE apclientpp)
target_link_libraries(dinput8 PRIVATE nlohmann-json)
target_link_libraries(dinput8 PRIVATE minhook)
