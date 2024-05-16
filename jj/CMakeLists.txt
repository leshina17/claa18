cmake_minimum_required(VERSION 3.8)


project(
	CPlusPlusBestC
	LANGUAGES CXX)
	
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_executable(main main.cpp)