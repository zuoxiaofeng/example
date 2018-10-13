project(example-main)


include_directories(${blog_example_SOURCE_DIR}/src/static-library)

add_executable(example1-main example1-main.cpp)
add_executable(example2-main example2-main.cpp)

target_link_libraries(example1-main static-library-example1)
target_link_libraries(example2-main static-library-example2 static-library-example1)