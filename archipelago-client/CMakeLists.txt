cmake_minimum_required(VERSION 3.16.0 FATAL_ERROR)

set(CMAKE_SYSTEM_VERSION 10.0 CACHE STRING "" FORCE)

project(archipelago-client C CXX)

################################################################################
# Set target arch type if empty. Visual studio solution generator provides it.
################################################################################
if(NOT CMAKE_VS_PLATFORM_NAME)
    set(CMAKE_VS_PLATFORM_NAME "x64")
endif()
message("${CMAKE_VS_PLATFORM_NAME} architecture in use")

if(NOT ("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64"
     OR "${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86"))
    message(FATAL_ERROR "${CMAKE_VS_PLATFORM_NAME} arch is not supported!")
endif()

################################################################################
# Global configuration types
################################################################################
set(CMAKE_CONFIGURATION_TYPES
    "Debug"
    "Release"
    CACHE STRING "" FORCE
)

################################################################################
# Global compiler options
################################################################################
if(MSVC)
    # remove default flags provided with CMake for MSVC
    set(CMAKE_C_FLAGS "")
    set(CMAKE_C_FLAGS_DEBUG "")
    set(CMAKE_C_FLAGS_RELEASE "")
    set(CMAKE_CXX_FLAGS "")
    set(CMAKE_CXX_FLAGS_DEBUG "")
    set(CMAKE_CXX_FLAGS_RELEASE "")
endif()

################################################################################
# Global linker options
################################################################################
if(MSVC)
    # remove default flags provided with CMake for MSVC
    set(CMAKE_EXE_LINKER_FLAGS "")
    set(CMAKE_MODULE_LINKER_FLAGS "")
    set(CMAKE_SHARED_LINKER_FLAGS "")
    set(CMAKE_STATIC_LINKER_FLAGS "")
    set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS}")
    set(CMAKE_MODULE_LINKER_FLAGS_DEBUG "${CMAKE_MODULE_LINKER_FLAGS}")
    set(CMAKE_SHARED_LINKER_FLAGS_DEBUG "${CMAKE_SHARED_LINKER_FLAGS}")
    set(CMAKE_STATIC_LINKER_FLAGS_DEBUG "${CMAKE_STATIC_LINKER_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS}")
    set(CMAKE_MODULE_LINKER_FLAGS_RELEASE "${CMAKE_MODULE_LINKER_FLAGS}")
    set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS}")
    set(CMAKE_STATIC_LINKER_FLAGS_RELEASE "${CMAKE_STATIC_LINKER_FLAGS}")
endif()

################################################################################
# Nuget packages function stub.
################################################################################
function(use_package TARGET PACKAGE VERSION)
    message(WARNING "No implementation of use_package. Create yours. "
                    "Package \"${PACKAGE}\" with version \"${VERSION}\" "
                    "for target \"${TARGET}\" is ignored!")
endfunction()

################################################################################
# Common utils
################################################################################
include(CMake/Utils.cmake)

################################################################################
# Additional Global Settings(add specific info there)
################################################################################
include(CMake/GlobalSettingsInclude.cmake OPTIONAL)

################################################################################
# Use solution folders feature
################################################################################
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

################################################################################
# Sub-projects
################################################################################



























set(PROJECT_NAME archipelago-client)

################################################################################
# Source groups
################################################################################
set(Fichiers_d27en-tte
    "ArchipelagoInterface.h"
    "Core.h"
    "GameHook.h"
    "resource.h"
    "subprojects/asio/asio/include/asio.hpp"
    "subprojects/openssl/__DECC_INCLUDE_EPILOGUE.H"
    "subprojects/openssl/__DECC_INCLUDE_PROLOGUE.H"
    "subprojects/openssl/aes.h"
    "subprojects/openssl/asn1.h"
    "subprojects/openssl/asn1_mac.h"
    "subprojects/openssl/asn1err.h"
    "subprojects/openssl/asn1t.h"
    "subprojects/openssl/async.h"
    "subprojects/openssl/asyncerr.h"
    "subprojects/openssl/bio.h"
    "subprojects/openssl/bioerr.h"
    "subprojects/openssl/blowfish.h"
    "subprojects/openssl/bn.h"
    "subprojects/openssl/bnerr.h"
    "subprojects/openssl/buffer.h"
    "subprojects/openssl/buffererr.h"
    "subprojects/openssl/camellia.h"
    "subprojects/openssl/cast.h"
    "subprojects/openssl/cmac.h"
    "subprojects/openssl/cms.h"
    "subprojects/openssl/cmserr.h"
    "subprojects/openssl/comp.h"
    "subprojects/openssl/comperr.h"
    "subprojects/openssl/conf.h"
    "subprojects/openssl/conf_api.h"
    "subprojects/openssl/conferr.h"
    "subprojects/openssl/crypto.h"
    "subprojects/openssl/cryptoerr.h"
    "subprojects/openssl/ct.h"
    "subprojects/openssl/cterr.h"
    "subprojects/openssl/des.h"
    "subprojects/openssl/dh.h"
    "subprojects/openssl/dherr.h"
    "subprojects/openssl/dsa.h"
    "subprojects/openssl/dsaerr.h"
    "subprojects/openssl/dtls1.h"
    "subprojects/openssl/e_os2.h"
    "subprojects/openssl/ebcdic.h"
    "subprojects/openssl/ec.h"
    "subprojects/openssl/ecdh.h"
    "subprojects/openssl/ecdsa.h"
    "subprojects/openssl/ecerr.h"
    "subprojects/openssl/engine.h"
    "subprojects/openssl/engineerr.h"
    "subprojects/openssl/err.h"
    "subprojects/openssl/evp.h"
    "subprojects/openssl/evperr.h"
    "subprojects/openssl/hmac.h"
    "subprojects/openssl/idea.h"
    "subprojects/openssl/kdf.h"
    "subprojects/openssl/kdferr.h"
    "subprojects/openssl/lhash.h"
    "subprojects/openssl/md2.h"
    "subprojects/openssl/md4.h"
    "subprojects/openssl/md5.h"
    "subprojects/openssl/mdc2.h"
    "subprojects/openssl/modes.h"
    "subprojects/openssl/obj_mac.h"
    "subprojects/openssl/objects.h"
    "subprojects/openssl/objectserr.h"
    "subprojects/openssl/ocsp.h"
    "subprojects/openssl/ocsperr.h"
    "subprojects/openssl/opensslv.h"
    "subprojects/openssl/ossl_typ.h"
    "subprojects/openssl/pem.h"
    "subprojects/openssl/pem2.h"
    "subprojects/openssl/pemerr.h"
    "subprojects/openssl/pkcs12.h"
    "subprojects/openssl/pkcs12err.h"
    "subprojects/openssl/pkcs7.h"
    "subprojects/openssl/pkcs7err.h"
    "subprojects/openssl/rand.h"
    "subprojects/openssl/rand_drbg.h"
    "subprojects/openssl/randerr.h"
    "subprojects/openssl/rc2.h"
    "subprojects/openssl/rc4.h"
    "subprojects/openssl/rc5.h"
    "subprojects/openssl/ripemd.h"
    "subprojects/openssl/rsa.h"
    "subprojects/openssl/rsaerr.h"
    "subprojects/openssl/safestack.h"
    "subprojects/openssl/seed.h"
    "subprojects/openssl/sha.h"
    "subprojects/openssl/srp.h"
    "subprojects/openssl/srtp.h"
    "subprojects/openssl/ssl.h"
    "subprojects/openssl/ssl2.h"
    "subprojects/openssl/ssl3.h"
    "subprojects/openssl/sslerr.h"
    "subprojects/openssl/stack.h"
    "subprojects/openssl/store.h"
    "subprojects/openssl/storeerr.h"
    "subprojects/openssl/symhacks.h"
    "subprojects/openssl/tls1.h"
    "subprojects/openssl/ts.h"
    "subprojects/openssl/tserr.h"
    "subprojects/openssl/txt_db.h"
    "subprojects/openssl/ui.h"
    "subprojects/openssl/uierr.h"
    "subprojects/openssl/whrlpool.h"
    "subprojects/openssl/x509.h"
    "subprojects/openssl/x509_vfy.h"
    "subprojects/openssl/x509err.h"
    "subprojects/openssl/x509v3.h"
    "subprojects/openssl/x509v3err.h"
    "subprojects/wswrap/include/wswrap.hpp"
    "subprojects/wswrap/include/wswrap_websocketpp.hpp"
)
source_group("Fichiers d%27en-tête" FILES ${Fichiers_d27en-tte})

set(Fichiers_de_ressources
    "subprojects/minhook/src/buffer.c"
    "subprojects/minhook/src/buffer.h"
    "subprojects/minhook/src/hde/hde32.c"
    "subprojects/minhook/src/hde/hde32.h"
    "subprojects/minhook/src/hde/hde64.c"
    "subprojects/minhook/src/hde/hde64.h"
    "subprojects/minhook/src/hde/pstdint.h"
    "subprojects/minhook/src/hde/table32.h"
    "subprojects/minhook/src/hde/table64.h"
    "subprojects/minhook/src/hook.c"
    "subprojects/minhook/src/trampoline.c"
    "subprojects/minhook/src/trampoline.h"
)
source_group("Fichiers de ressources" FILES ${Fichiers_de_ressources})

set(Fichiers_sources__ArchipelagoClient
    "ArchipelagoInterface.cpp"
)
source_group("Fichiers sources\\ArchipelagoClient" FILES ${Fichiers_sources__ArchipelagoClient})

set(Fichiers_sources__Core
    "Core.cpp"
    "dinput8.cpp"
    "dinput8.def"
)
source_group("Fichiers sources\\Core" FILES ${Fichiers_sources__Core})

set(Fichiers_sources__GameHook
    "AutoEquip.cpp"
    "GameHook.cpp"
    "ItemRandomiser.cpp"
    "NoRequirements.cpp"
)
source_group("Fichiers sources\\GameHook" FILES ${Fichiers_sources__GameHook})

set(ALL_FILES
    ${Fichiers_d27en-tte}
    ${Fichiers_de_ressources}
    ${Fichiers_sources__ArchipelagoClient}
    ${Fichiers_sources__Core}
    ${Fichiers_sources__GameHook}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} SHARED ${ALL_FILES})

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
################################################################################
# Includes for CMake from *.props
################################################################################
use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "$ENV{VCTargetsPath}/BuildCustomizations/masm.cmake")

set(ROOT_NAMESPACE archipelagoclient)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "Win32Proj"
)
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DEBUG   "dinput8"
        TARGET_NAME_RELEASE "dinput8"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DEBUG   "dinput8"
        TARGET_NAME_RELEASE "dinput8"
    )
endif()
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
endif()
################################################################################
# Include directories
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "$<$<CONFIG:Release>:"
            "${CMAKE_CURRENT_SOURCE_DIR}/subprojects;"
            "${CMAKE_CURRENT_SOURCE_DIR}/dep;"
            "${CMAKE_CURRENT_SOURCE_DIR}/subprojects/wswrap/include;"
            "${CMAKE_CURRENT_SOURCE_DIR}/subprojects/apclientpp;"
            "${CMAKE_CURRENT_SOURCE_DIR}/subprojects/asio/asio/include;"
            "${CMAKE_CURRENT_SOURCE_DIR}/subprojects/json/include;"
            "${CMAKE_CURRENT_SOURCE_DIR}/subprojects/minhook/include;"
            "${CMAKE_CURRENT_SOURCE_DIR}/subprojects/valijson/include;"
            "${CMAKE_CURRENT_SOURCE_DIR}/subprojects/websocketpp"
        ">"
    )
endif()

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:Debug>:"
            "_DEBUG;"
            "_CONSOLE"
        ">"
        "$<$<CONFIG:Release>:"
            "WIN32;"
            "NDEBUG;"
            "_WINDOWS;"
            "_USRDLL;"
            "DINPUT8_EXPORTS;"
            "_WIN32_WINNT=0x0600"
        ">"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:Debug>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Release>:"
            "NDEBUG"
        ">"
        "WIN32;"
        "_CONSOLE"
    )
endif()

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /std:c++17;
                /Oi;
                /Gy;
                /Zc:__cplusplus
            >
            /permissive-;
            /sdl;
            /W3;
            ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
            ${DEFAULT_CXX_EXCEPTION_HANDLING}
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Oi;
                /Gy
            >
            /permissive-;
            /sdl;
            /W3;
            ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
            ${DEFAULT_CXX_EXCEPTION_HANDLING}
        )
    endif()
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Debug>:
                /INCREMENTAL
            >
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF;
                /INCREMENTAL:NO
            >
            /DEBUG;
            /SUBSYSTEM:CONSOLE
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Debug>:
                /INCREMENTAL
            >
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF;
                /INCREMENTAL:NO
            >
            /DEBUG;
            /SUBSYSTEM:CONSOLE
        )
    endif()
endif()

################################################################################
# Dependencies
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set(ADDITIONAL_LIBRARY_DEPENDENCIES
        "$<$<CONFIG:Release>:"
            "subprojects/openssl/x64/libssl;"
            "subprojects/openssl/x64/libcrypto;"
            "subprojects/openssl/x64/libapps;"
            "Crypt32"
        ">"
    )
endif()
target_link_libraries(${PROJECT_NAME} PUBLIC "${ADDITIONAL_LIBRARY_DEPENDENCIES}")

