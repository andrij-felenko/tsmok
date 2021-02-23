project(Brain)

set (Brain_src
    src/brain.cpp
    src/brain2.cpp
    main_brain.cpp)

set (Brain_h
    include/brain.h
    include/brain2.h)

add_executable(Brain ${Brain_h} ${Brain_src})

find_package(Qt6Gui)
target_link_libraries(Brain ${Qt5Gui_LIBRARIES} TransmitterConnectorLib Qt6::Core)

#link_directories(${CMAKE_BINARY_DIR}/lib/transmitterConnector)

include_directories(TransmitterConnectorLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
