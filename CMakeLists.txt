cmake_minimum_required (VERSION 3.8)
project ("Blank")

add_subdirectory("external/glfw")
add_subdirectory("external/glew")
add_subdirectory("Blank")

target_include_directories(Blank PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/external/glfw/include)
target_include_directories(Blank PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/external/glew/include)
