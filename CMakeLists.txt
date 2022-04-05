cmake_minimum_required(VERSION 3.19)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c
        sort/bubble_sort.c
        sort/bubble_sort.h
        types/common.c
        types/common.h
        utils.c
        utils.h
        sort/insert_sort.c
        sort/insert_sort.h
        sort/sort.h
        quiz/fibonacci.c
        quiz/fibonacci.h
        quiz/quiz.h
        quiz/decimal-scale.c
        quiz/decimal-scale.h
        quiz/tower-of-hanoi.c
        quiz/tower-of-hanoi.h
        types/linked_list.c
        types/linked_list.h
        quiz/two-sum.c
        quiz/two-sum.h
        sort/quick_sort.c
        sort/quick_sort.h
        sort/select_sort.c
        sort/select_sort.h
        types/seq_list.c
        types/seq_list.h
        types/array_list.c
        types/array_list.h
        dsa/linked_list.c
        dsa/linked_list.h
        dsa/dsa.c
        dsa/dsa.h
        c/c.c
        c/c.h
        cpp/cpp.cpp
        cpp/cpp.h
        c/fibonacci.c
        c/fibonacci.h
        c/struct.c
        c/struct.h
        c/union.c
        c/union.h
        c/pointer.c
        c/pointer.h c/types.c c/types.h c/basic.c c/basic.h)