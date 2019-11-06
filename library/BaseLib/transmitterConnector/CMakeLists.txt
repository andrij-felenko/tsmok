cmake_minimum_required(VERSION 3.14)
project(TransmitterConnectorLib VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC OFF)
set(CMAKE_AUTOUIC OFF)
set(CMAKE_AUTORCC OFF)

add_library(TransmitterConnectorLib SHARED
    include/senseConnectorTypes.h
)
set_target_properties(TransmitterConnectorLib PROPERTIES
    VERSION ${PROJECT_VERSION}
    LINKER_LANGUAGE CXX
)
target_include_directories(TransmitterConnectorLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
