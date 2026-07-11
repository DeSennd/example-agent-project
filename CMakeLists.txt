cmake_minimum_required(VERSION 3.22)
project(example-agent-project VERSION 1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

add_library(calc STATIC src/calc.cpp)
target_include_directories(calc PUBLIC src)

add_executable(example src/main.cpp)
target_link_libraries(example PRIVATE calc)

enable_testing()
add_executable(test_calc tests/test_calc.cpp)
target_link_libraries(test_calc PRIVATE calc)
add_test(NAME test_calc COMMAND test_calc)
