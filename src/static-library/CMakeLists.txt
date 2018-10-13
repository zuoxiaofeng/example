project(static-library-example)

add_library(static-library-example1 STATIC static-library-example1.cpp)
add_library(static-library-example2 STATIC static-library-example2.cpp)

#target_link_libraries(static-library-example2 static-library-example1)