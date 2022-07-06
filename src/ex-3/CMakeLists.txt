add_library(rectangle "rectangle.h" "rectangle.c")
add_executable("ex-3.out" main.c)
target_link_libraries("ex-3.out" PRIVATE rectangle)