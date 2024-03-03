cmake_minimum_required (VERSION 3.8)

project (OpenCBDependencyTest)


# some magic
set(CMAKE_AUTOMOC ON)
#set(CMAKE_INCLUDE_CURRENT_DIR ON)
INCLUDE(C:/vcpkg/scripts/buildsystems/vcpkg.cmake)  # so that vcpkg installed packages are seen


# find packages
find_package(Qt6Core REQUIRED)
find_package(Qt6Gui REQUIRED)
find_package(Qt6Widgets REQUIRED)

find_package(OpenCV REQUIRED)

find_package(GTest REQUIRED)


# include files
set(IP_DIR "${CMAKE_SOURCE_DIR}/ip")
set(UA_DIR "${CMAKE_SOURCE_DIR}/ua")
set(VAR_DIR "${CMAKE_SOURCE_DIR}/var")
set(TEST_DIR "${CMAKE_SOURCE_DIR}/test")

include_directories(${IP_DIR})
include_directories(${UA_DIR})
include_directories(${VAR_DIR})
include_directories(${TEST_DIR})

file(GLOB_RECURSE SOURCES
    "${IP_DIR}/*.cpp"
    "${IP_DIR}/*.h"
    "${UA_DIR}/*.cpp"
    "${UA_DIR}/*.h"
    "${VAR_DIR}/*.cpp"
    "${VAR_DIR}/*.h"
    "Main.cpp"
)
file(GLOB_RECURSE TEST_SOURCES
    "${TEST_DIR}/*.cpp"
    "${TEST_DIR}/*.h"
)
add_executable (OpenCBDependencyTest ${SOURCES})
add_executable (Tests ${TEST_SOURCES}) # separate executable, depending on gtest


# link libraries
target_link_libraries(OpenCBDependencyTest Qt::Core)
target_link_libraries(OpenCBDependencyTest Qt::Gui)
target_link_libraries(OpenCBDependencyTest Qt::Widgets)

target_link_libraries(OpenCBDependencyTest ${OpenCV_LIBS})

target_link_libraries(Tests GTest::gtest)
