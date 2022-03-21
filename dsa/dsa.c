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

int fibonacci_a(int i)
{
  if(i < 1)
  {
    return 0;
  }
  
  if(i == 1)
  {
    return 1;
  }
  
  if(i == 2)
  {
    return 1;
  }
  
  return fibonacci_a(i - 1) + fibonacci_a( i - 2);
}

int fibonacci_b(int i)
{
  if(i < 1)
  {
    return 0;
  }

  if(i == 1 || i == 2)
  {
    return 1;
  }
  
  int a = 1;
  int b = 1;
  int c = 2;
  
  for(int n = 3; n <= i ; n ++)
  {
    int temp = c;
    c = a + b;
    a = b;
    b = temp;
  }
  return c;
}

void dsa_test()
{
  for(int i = 1; i < 10; i++)
  {
    int n = fibonacci_b(i);
    printf("%d ", n);
  }
}
