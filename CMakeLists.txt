project(blog_example)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build/out/bin/${CMAKE_BUILD_TYPE})
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/out/lib/${CMAKE_BUILD_TYPE})

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/static-library)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/main)
# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/dynamic-library)