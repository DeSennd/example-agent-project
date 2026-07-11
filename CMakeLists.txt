cmake_minimum_required(VERSION 3.22)
project(example-agent-project VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
add_executable(example src/main.cpp src/calc.cpp)

# Tests
enable_testing()
add_executable(test_calc tests/test_calc.cpp)
target_link_libraries(test_calc PRIVATE example)
add_test(NAME test_calc COMMAND test_calc)
