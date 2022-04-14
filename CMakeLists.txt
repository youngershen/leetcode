cmake_minimum_required(VERSION 3.19)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c
        utils.c
        utils.h

        quiz/fibonacci.c
        quiz/fibonacci.h
        quiz/quiz.h
        quiz/decimal-scale.c
        quiz/decimal-scale.h
        quiz/tower-of-hanoi.c
        quiz/tower-of-hanoi.h
        quiz/two-sum.c
        quiz/two-sum.h
        dsa/list/linked_list.c
        dsa/list/linked_list.h
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
        c/pointer.h
        c/types.c
        c/types.h
        c/basic.c
        c/basic.h
        dsa/list/sequence_list.c
        dsa/list/sequence_list.h)