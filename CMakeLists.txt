cmake_minimum_required(VERSION 3.19)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c dsa/sort/bubble_sort.c dsa/sort/bubble_sort.h dsa/types/types.c dsa/types/types.h utils.c utils.h dsa/sort/insert_sort.c dsa/sort/insert_sort.h dsa/sort/sort.h puzzles/1.c puzzles/1.h)