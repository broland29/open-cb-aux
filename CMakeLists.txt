cmake_minimum_required (VERSION 3.8)

project (OpenCBDependencyTest)

#some magic
set(CMAKE_AUTOMOC ON)
#set(CMAKE_INCLUDE_CURRENT_DIR ON)


# find packages
find_package(Qt6Core REQUIRED)
find_package(Qt6Gui REQUIRED)
find_package(Qt6Widgets REQUIRED)


# include files
set(IP_DIR "${CMAKE_SOURCE_DIR}/ip")
set(UA_DIR "${CMAKE_SOURCE_DIR}/ua")
set(VAR_DIR "${CMAKE_SOURCE_DIR}/var")

include_directories(${IP_DIR})
include_directories(${UA_DIR})
include_directories(${VAR_DIR})

file(GLOB_RECURSE SOURCES
    "${IP_DIR}/*.cpp"
    "${IP_DIR}/*.h"
    "${UA_DIR}/*.cpp"
    "${UA_DIR}/*.h"
    "${VAR_DIR}/*.cpp"
    "${VAR_DIR}/*.h"
    "Main.cpp"
)
add_executable (OpenCBDependencyTest ${SOURCES})

# link libraries
target_link_libraries(OpenCBDependencyTest Qt::Core)
target_link_libraries(OpenCBDependencyTest Qt::Gui)
target_link_libraries(OpenCBDependencyTest Qt::Widgets)
