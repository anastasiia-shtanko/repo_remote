cmake_minimum_required(VERSION 3.5)

project(cmake_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include_directories(containers_library/)

add_subdirectory(tests/)
add_subdirectory(containers_library/)
add_subdirectory(gtests/)