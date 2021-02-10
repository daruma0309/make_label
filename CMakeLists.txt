cmake_minimum_required(VERSION 3.0.2)
project(make_label CXX)
add_compile_options(-std=c++11)

add_executable(make_label src/main.cpp)

include_directories(
  include
)

target_link_libraries(${PROJECT_NAME}
)
