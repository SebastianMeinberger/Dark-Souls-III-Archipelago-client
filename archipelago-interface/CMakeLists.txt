add_library(dinput8 SHARED src/dinput8.cpp src/_AutoEquip.asm src/_ItemRandomiser.asm src/_NoRequirements.asm src/Core.cpp src/ArchipelagoInterface.cpp src/AutoEquip.cpp src/GameHook.cpp src/ItemRandomiser.cpp src/NoRequirements.cpp)

target_include_directories(dinput8 PUBLIC ${archipelago-interface_SOURCE_DIR}/archipelago-interface/inc)
target_link_directories(dinput8 PUBLIC ${archipelago-interface_SOURCE_DIR}/archipelago-interface/src)

find_package(nlohmann_json CONFIG REQUIRED)
find_package(minhook CONFIG REQUIRED)
find_package(OpenSSL REQUIRED)

target_link_libraries(dinput8 PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(dinput8 PRIVATE minhook::minhook)
target_link_libraries(dinput8 PRIVATE apclientpp)
target_link_libraries(dinput8 PUBLIC OpenSSL::Crypto OpenSSL::SSL)
target_link_libraries(dinput8 PUBLIC crypt32 wsock32 ws2_32)
