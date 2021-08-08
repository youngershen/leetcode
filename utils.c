/*
 * Project: leetcode
 * File : utils.c
 * Date : 2021/8/8 15:51
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include <stdio.h>
#include "utils.h"

void print_array_int(INT* array, INT size)
{
  for(INT i = 0 ; i < size; i ++)
  {
    printf("%d ", array[i]);
  }
  printf("\r\n");
}

void swap_int(INT* a, INT* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
