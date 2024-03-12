add_library(apclientpp INTERFACE)

target_include_directories(apclientpp INTERFACE ${archipelago-interface_SOURCE_DIR}/subprojects/apclientpp/apclientpp)

find_package(valijson CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

target_link_libraries(apclientpp INTERFACE wswrap)
target_link_libraries(apclientpp INTERFACE nlohmann_json::nlohmann_json)
target_link_libraries(apclientpp INTERFACE valijson)
