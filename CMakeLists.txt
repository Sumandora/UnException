cmake_minimum_required(VERSION 3.20)

include_guard()

project(UnException)

add_library(UnException INTERFACE)
target_include_directories(UnException INTERFACE "${PROJECT_SOURCE_DIR}/Include")

if(PROJECT_IS_TOP_LEVEL)
    enable_testing()
    add_subdirectory("Example")
endif()
