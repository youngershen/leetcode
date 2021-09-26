cmake_minimum_required(VERSION 3.19)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c
        dsa/sort/bubble_sort.c
        dsa/sort/bubble_sort.h
        dsa/types/types.c
        dsa/types/types.h
        utils.c
        utils.h
        dsa/sort/insert_sort.c
        dsa/sort/insert_sort.h
        dsa/sort/sort.h
        puzzles/fibonacci.c
        puzzles/fibonacci.h
        puzzles/puzzles.h
        puzzles/decimal-scale.c
        puzzles/decimal-scale.h
        puzzles/tower-of-hanoi.c
        puzzles/tower-of-hanoi.h
        dsa/types/linked_list.c
        dsa/types/linked_list.h
        puzzles/two-sum.c
        puzzles/two-sum.h
        dsa/sort/quick_sort.c
        dsa/sort/quick_sort.h
        dsa/sort/select_sort.c
        dsa/sort/select_sort.h
        dsa/types/seq_list.c
        dsa/types/seq_list.h dsa/types/array_list.c dsa/types/array_list.h)