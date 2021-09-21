cmake_minimum_required(VERSION 3.19)
project(cpp_modules)

set(CMAKE_CXX_STANDARD 98)

include_directories(include)
add_executable(cpp_modules src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp src/DiamondTrap.cpp)
