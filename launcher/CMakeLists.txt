cmake_minimum_required(VERSION 3.14)
project(TsmokLauncher VERSION 0.0.1)

set (Launcher_src
    main_launcher.cpp
    src/PreferenceList.h
    src/PreferenceList.cpp
    )

set (CMAKE_AUTORCC)
find_package(Qt6 COMPONENTS Core Qml Quick)
add_executable(Tsmok ${Launcher_src} launcher_resource.qrc)
target_link_libraries(Tsmok Qt6::Core Qt6::Quick Qt6::Qml)
