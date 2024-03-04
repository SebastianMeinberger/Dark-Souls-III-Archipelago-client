add_library(wswrap INTERFACE)
target_include_directories(wswrap INTERFACE ${archipelago-interface_SOURCE_DIR}/subprojects/wswrap/wswrap/include)

find_package(asio CONFIG REQUIRED)
find_package(websocketpp CONFIG REQUIRED)

target_link_libraries(wswrap INTERFACE asio)
target_link_libraries(wswrap INTERFACE websocketpp::websocketpp)
