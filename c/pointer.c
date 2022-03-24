/*
 * Project: leetcode
 * File : pointer.c
 * Date : 2022/3/24 15:54
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include "stdio.h"
#include "pointer.h"

int add(int a, int b)
{
  return a + b;
}

void fpointer_test()
{
  int(*ptr)(int, int) = &add;
  
  printf("%p", ptr);
}

void pointer_test()
{
  fpointer_test();
}