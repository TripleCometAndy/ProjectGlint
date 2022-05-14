cmake_minimum_required(VERSION 3.20)

# set the project name
project(PlayerJumpLogic)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(PlayerJumpLogic)

target_include_directories(PlayerJumpLogic PRIVATE
	include
	src
)

add_subdirectory(src)

