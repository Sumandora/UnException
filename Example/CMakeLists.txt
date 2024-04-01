cmake_minimum_required(VERSION 3.20)
project(UnExceptionExample)

add_executable(UnExceptionExample "Source/Main.cpp")
target_link_libraries(UnExceptionExample PUBLIC UnException)

add_test(NAME TestUnException COMMAND $<TARGET_FILE:UnExceptionExample>)
