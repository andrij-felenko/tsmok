cmake_minimum_required(VERSION 3.14)
project(TTransmitterConnectorLib VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

add_library(TTransmitterConnectorLib SHARED
    include/tSenseConnectorTypes.h)

find_package(Qt5Core)
target_link_libraries(TTransmitterConnectorLib Qt5::Core)
target_link_libraries(TTransmitterConnectorLib TransmitterConnectorLib)

set_target_properties(TTransmitterConnectorLib PROPERTIES VERSION ${PROJECT_VERSION})
