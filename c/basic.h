/*
 * Project: leetcode
 * File : basic.h
 * Date : 2022/4/5 15:49
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

/*
 * 近期工作需要重新学习 C 语言,
 * 这里包含了一些关于 C 语言的基础知识,
 * 以及相关的文档, 供学习中的参考使用.
 *
 *  GLIBC WIKI : https://sourceware.org/glibc/wiki/HomePage
 *
 */

#ifndef LEETCODE_BASIC_H
#define LEETCODE_BASIC_H

#define STATUS int
#define STATUS_OK 0
#define STATUS_ERROR 1
#define STATUS_EXCEPTION 2

// redefine integer types
#define UINT16 int
#define UINT16 int
#define UINT32 int
#define INT32 int
#define UINT64 int
#define INT64 int

// hello world
STATUS hello_world(char *);

// something basic about printf
STATUS printf_test();

// common data types
STATUS type_test();

// variables
STATUS var_test();

// array
STATUS array_test();

// string
STATUS string_test();

// add functions
INT64 int_add(INT64, INT64);
STATUS int_add_test();

STATUS basic_test();

#endif //LEETCODE_BASIC_H
