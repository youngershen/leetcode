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
        quiz/fibonacci.c
        quiz/fibonacci.h
        quiz/puzzles.h
        quiz/decimal-scale.c
        quiz/decimal-scale.h
        quiz/tower-of-hanoi.c
        quiz/tower-of-hanoi.h
        dsa/types/linked_list.c
        dsa/types/linked_list.h
        quiz/two-sum.c
        quiz/two-sum.h
        dsa/sort/quick_sort.c
        dsa/sort/quick_sort.h
        dsa/sort/select_sort.c
        dsa/sort/select_sort.h
        dsa/types/seq_list.c
        dsa/types/seq_list.h dsa/types/array_list.c dsa/types/array_list.h)