add_library(apclientpp INTERFACE)

target_include_directories(apclientpp INTERFACE ${archipelago-interface_SOURCE_DIR}/subprojects/apclientpp/apclientpp)

find_package(valijson)
find_package(nlohmann-json)

target_link_libraries(apclientpp INTERFACE wswrap)
target_link_libraries(apclientpp INTERFACE nlohmann-json)
target_link_libraries(apclientpp INTERFACE valijson)
