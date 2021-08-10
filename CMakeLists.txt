cmake_minimum_required(VERSION 3.19)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c dsa/sort/bubble_sort.c dsa/sort/bubble_sort.h dsa/types/types.c dsa/types/types.h utils.c utils.h dsa/sort/insert_sort.c dsa/sort/insert_sort.h dsa/sort/sort.h puzzles/fibonacci.c puzzles/fibonacci.h puzzles/puzzles.h puzzles/decimal-scale.c puzzles/decimal-scale.h puzzles/tower-of-hanoi.c puzzles/tower-of-hanoi.h dsa/types/linked_list.c dsa/types/linked_list.h)