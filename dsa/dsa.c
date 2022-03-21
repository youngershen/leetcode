/*
 * Project: leetcode
 * File : dsa.c
 * Date : 2022/3/21 15:30
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include "stdio.h"
#include "dsa.h"
#include "./linked_list.h"

int fibonacci(int i)
{
  if(i < 1)
  {
    return 0;
  }
  
  if(1 == i)
  {
    return 1;
  }
  
  if(2 == i)
  {
    return 1;
  }
  
  return fibonacci(i - 1) + fibonacci( i - 2);
}


void dsa_test()
{
  for(int i = 1; i < 10; i++)
  {
    int n = fibonacci(i);
    printf("%d ", n);
  }
}
