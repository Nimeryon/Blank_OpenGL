cmake_minimum_required (VERSION 3.8)
project ("Blank")

add_executable (Blank "main.cpp")

target_link_libraries (Blank 
	glfw
	libglew_static
)