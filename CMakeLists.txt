# cmake_minimum_required(VERSION 3.16)

# project(TryingCoffee VERSION 0.1 LANGUAGES CXX)

# set(CMAKE_AUTOMOC ON)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)

# qt_policy(SET QTP0001 NEW)

# qt_add_executable(appTryingCoffee
#     main.cpp
# )

# qt_add_qml_module(appTryingCoffee
#     URI TryingCoffee
#     VERSION 1.0
#     QML_FILES
#         main.qml
#         SideBar.qml
#         CoffeeDelegate.qml
#         CoffeeButton.qml
#     SOURCES
#         CoffeeModel.h
#         CoffeeModel.cpp

# )

# set_target_properties(appTryingCoffee PROPERTIES
#     MACOSX_BUNDLE TRUE
#     WIN32_EXECUTABLE TRUE
# )

# target_link_libraries(appTryingCoffee
#     PRIVATE Qt6::Quick)

# qt6_add_resources(appTryingCoffee "resources"
#     PREFIX "/"
#     FILES
#         images/icons/coffees/cappucino.png
#         images/icons/coffees/Espresso.png
#         images/icons/coffees/Latte.png
#         images/icons/coffees/Macchiato.png
#         images/icons/coffees/Americano.png
#         imports/Coffee/Constants.qml
#         imports/Coffee/TitilliumWeb-Regular.ttf
#         imports/Coffee/qmldir
# )

# include(GNUInstallDirs)
# install(TARGETS appTryingCoffee
#     BUNDLE DESTINATION .
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})














# Copyright (C) 2022 The Qt Company Ltd.
# SPDX-License-Identifier: BSD-3-Clause

# cmake_minimum_required(VERSION 3.16)
# project(TryingCoffee LANGUAGES CXX)

# set(CMAKE_AUTOMOC ON)

# if(NOT DEFINED INSTALL_EXAMPLESDIR)
#     set(INSTALL_EXAMPLESDIR "examples")
# endif()

# set(INSTALL_EXAMPLEDIR "${INSTALL_EXAMPLESDIR}/insighttracker/coffee")

# find_package(Qt6 COMPONENTS Core Gui Qml Quick InsightTracker StateMachine REQUIRED)

# qt_policy(SET QTP0001 NEW)

# qt_add_executable(appTryingCoffee
#     main.cpp
# )

# qt_add_qml_module(appTryingCoffee
#     URI TryingCoffee
#     VERSION 1.0
#     QML_FILES
#         main.qml
#         SideBar.qml
#         CoffeeDelegate.qml
#         CoffeeButton.qml
#         ChoosingCoffe.qml
#         CupForm.qml
#     SOURCES
#         CoffeeModel.h
#         CoffeeModel.cpp
#         ApplicationFlowModel.h
#         ApplicationFlowModel.cpp
# )

# set_target_properties(appTryingCoffee PROPERTIES
#     WIN32_EXECUTABLE TRUE
#     MACOSX_BUNDLE TRUE
# )

# target_link_libraries(appTryingCoffee PUBLIC
#     Qt::Core
#     Qt::Gui
#     Qt::Qml
#     Qt::Quick
#     Qt::InsightTracker
#     Qt6::StateMachine
# )

# if (ANDROID)
#     include(FetchContent)
#     FetchContent_Declare(
#       android_openssl
#       DOWNLOAD_EXTRACT_TIMESTAMP true
#       URL      https://github.com/KDAB/android_openssl/archive/refs/heads/master.zip
#     )
#     FetchContent_MakeAvailable(android_openssl)
#     include(${android_openssl_SOURCE_DIR}/android_openssl.cmake)
#     add_android_openssl_libraries(coffee_insight)
# endif()

# set(QML_IMPORT_PATH "${CMAKE_BINARY_DIR}/qml" CACHE STRING "" FORCE)

# Resources:
# set(qml_resource_files
#     "CoffeeButton.qml"
#     "SideBar.qml"
#     "images/cup structure/coffee_cup_large.png"
#     "images/cup structure/coffee_cup_outline.png"
#     "images/cup structure/cup elements/coffee_cup_back.png"
#     "images/cup structure/cup elements/coffee_cup_coverplate.png"
#     "images/cup structure/cup elements/coffee_cup_front.png"
#     "images/cup structure/liquids/liquid_coffee.png"
#     "images/cup structure/liquids/liquid_foam.png"
#     "images/cup structure/liquids/liquid_milk.png"
#     "images/icons/coffees/Americano.png"
#     "images/icons/coffees/Espresso.png"
#     "images/icons/coffees/Latte.png"
#     "images/icons/coffees/Macchiato.png"
#     "images/icons/coffees/cappucino.png"
#     "images/icons/contents/coffee.png"
#     "images/icons/contents/milk.png"
#     "images/icons/contents/sugar.png"
#     "images/ui controls/buttons/back/white.png"
#     "images/ui controls/buttons/go/white.png"
#     "images/ui controls/line.png"
#     "imports/Coffee/Constants.qml"
#     "imports/Coffee/TitilliumWeb-Regular.ttf"
#     "imports/Coffee/qmldir"
#     "main.qml"
#     "qtquickcontrols2.conf"
# )


# qt6_add_resources(appTryingCoffee "resources"
#     PREFIX "/"
#     FILES
#         images/icons/coffees/cappucino.png
#         images/icons/coffees/Espresso.png
#         images/icons/coffees/Latte.png
#         images/icons/coffees/Macchiato.png
#         images/icons/coffees/Americano.png
#         imports/Coffee/Constants.qml
#         imports/Coffee/TitilliumWeb-Regular.ttf
#         imports/Coffee/qmldir
# )

# Resources:
# set(qml_resource_files
#     "CoffeeButton.qml"
#     "SideBar.qml"
#     "CoffeeDelegate.qml"
#     "images/cup_structure/coffee_cup_large.png"
#     "images/cup_structure/coffee_cup_outline.png"
#     "images/cup_structure/cup_elements/coffee_cup_back.png"
#     "images/cup_structure/cup_elements/coffee_cup_coverplate.png"
#     "images/cup_structure/cup_elements/coffee_cup_front.png"
#     "images/cup_structure/liquids/liquid_coffee.png"
#     "images/cup_structure/liquids/liquid_foam.png"
#     "images/cup_structure/liquids/liquid_milk.png"
#     "images/icons/coffees/Americano.png"
#     "images/icons/coffees/Espresso.png"
#     "images/icons/coffees/Latte.png"
#     "images/icons/coffees/Macchiato.png"
#     "images/icons/coffees/cappucino.png"
#     "images/icons/contents/coffee.png"
#     "images/icons/contents/milk.png"
#     "images/icons/contents/sugar.png"
#     "images/ui_controls/buttons/back/white.png"
#     "images/ui_controls/buttons/go/white.png"
#     "images/ui_controls/line.png"
#     "imports/Coffee/Constants.qml"
#     "imports/Coffee/TitilliumWeb-Regular.ttf"
#     "imports/Coffee/qmldir"
#     "main.qml"
#     "qtquickcontrols2.conf"
# )

# qt6_add_resources(appTryingCoffee "qml"
#     PREFIX
#         "/"
#     FILES
#         ${qml_resource_files}
# )

# qt6_add_resources(appTryingCoffee "config"
#     PREFIX
#         "/"
#     FILES
#         "qtinsight.conf"
#     OPTIONS
#         -threshold 0
# )

# install(TARGETS appTryingCoffee
#     RUNTIME DESTINATION "${INSTALL_EXAMPLEDIR}"
#     BUNDLE DESTINATION "${INSTALL_EXAMPLEDIR}"
#     LIBRARY DESTINATION "${INSTALL_EXAMPLEDIR}"
# )


cmake_minimum_required(VERSION 3.16)
project(TryingCoffee LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Core Gui Qml Quick InsightTracker StateMachine REQUIRED)

qt_policy(SET QTP0001 NEW)

qt_add_executable(appTryingCoffee
    main.cpp
    ApplicationFlowModel.cpp
    CoffeeModel.cpp
)

qt_add_qml_module(appTryingCoffee
    URI TryingCoffee
    VERSION 1.0
    QML_FILES
        main.qml
        SideBar.qml
        CoffeeDelegate.qml
        CoffeeButton.qml
        CupForm.qml
    SOURCES
        ApplicationFlowModel.h
        ApplicationFlowModel.cpp
        CoffeeModel.h
        CoffeeModel.cpp
)

set_target_properties(appTryingCoffee PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appTryingCoffee PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
    Qt::InsightTracker
    Qt6::StateMachine
)

qt6_add_resources(appTryingCoffee "resources"
    PREFIX "/"
    FILES
        images/icons/coffees/cappucino.png
        images/icons/coffees/Espresso.png
        images/icons/coffees/Latte.png
        images/icons/coffees/Macchiato.png
        images/icons/coffees/Americano.png
        images/cup_structure/cup_elements/coffee_cup_back.png
        images/cup_structure/cup_elements/coffee_cup_front.png
        images/cup_structure/liquids/liquid_coffee.png
        images/cup_structure/liquids/liquid_milk.png
        images/cup_structure/liquids/liquid_foam.png
        images/cup_structure/coffee_cup_large.png
        images/ui_controls/line.png
        imports/Coffee/Constants.qml
        imports/Coffee/TitilliumWeb-Regular.ttf
        imports/Coffee/qmldir
)

include(GNUInstallDirs)
install(TARGETS appTryingCoffee
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

