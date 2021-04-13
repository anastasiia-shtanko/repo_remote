
add_executable(SimpleTest main.cpp)

target_link_libraries(SimpleTest gtest gmock gtest_main containers)

add_test(SimpleTest SimpleTest)


