/*
 * Project: leetcode
 * File : insert_sort.h
 * Date : 2021/8/8 16:18
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#ifndef LEETCODE_INSERT_SORT_H
#define LEETCODE_INSERT_SORT_H

#include "../types/common.h"

// 普通版本的插入排序
void insert_sort_v1(INT* array, INT size, INT order);

// 使用二分查找的插入排序

// 插入排序的另一个变种
void insert_sort_v3(INT* array, INT size, INT order);

void insert_sort_v4(INT* array, INT size, INT order);

void insert_sort_v5(INT* array, INT size, INT order);

void insert_sort_v6(INT* array, INT size, INT order);

void insert_sort_test();

void insert_sort_test();


#endif //LEETCODE_INSERT_SORT_H
