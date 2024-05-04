add_executable(math_test math_test.cpp)
target_link_libraries(math_test PRIVATE math doctest::doctest)
