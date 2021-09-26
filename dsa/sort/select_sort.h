/*
 * Project: leetcode
 * File : select_sort.h
 * Date : 2021/8/18 22:50
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#ifndef LEETCODE_SELECT_SORT_H
#define LEETCODE_SELECT_SORT_H

#include "../types/common.h"
#include "sort.h"

INT select_sort_v1(INT* array, INT size, INT order);

INT select_sort_v2(INT* array, INT size, INT order);

INT select_sort_v3(INT* array, INT size, INT order);

INT select_sort_v4(INT* array, INT size, INT order);

INT select_sort_v5(INT* array, INT size, INT order);

INT select_sort_v6(INT* array, INT size, INT order);


void select_sort_test();

#endif //LEETCODE_SELECT_SORT_H
