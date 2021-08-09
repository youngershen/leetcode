cmake_minimum_required(VERSION 3.19)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c algorithms/sort/bubble_sort.c algorithms/sort/bubble_sort.h dsa/types/types.c dsa/types/types.h utils.c utils.h algorithms/sort/insert_sort.c algorithms/sort/insert_sort.h)