cmake_minimum_required(VERSION 3.19)
project(cpp_modules)

set(CMAKE_CXX_STANDARD 98)

include_directories(include)
add_executable(cpp_modules src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp)
