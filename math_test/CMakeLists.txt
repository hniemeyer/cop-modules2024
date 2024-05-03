add_executable(math_test math_test.cpp)
target_link_libraries(math_test PRIVATE math Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(math_test)