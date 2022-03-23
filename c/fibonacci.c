/*
 * Project: leetcode
 * File : fibonacci.c
 * Date : 2022/3/22 15:56
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include "stdio.h"
#include "stdlib.h"
#include "fibonacci.h"

/*
 * 递归求 fibonacci
 */
int fibonacci(int i)
{
  if (i < 1)
  {
    return 0;
  }
  
  if (i == 1)
  {
    return 1;
  }
  
  if (i == 2)
  {
    return 1;
  }
  
  return fibonacci(i - 1) + fibonacci(i - 2);
}

/*
 * 非递归求 fibonacci
 */
int fibonacci_a(int i)
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
  
  for(int n = 3; n <= i ; n++)
  {
    int t = b;
    c = a + b;
    b = c;
    a = t;
  }
  return c;
}

/*
 * 非递归求 fibonacci 前 N 项
 * 返回一个堆上的存储结构指针
 * 第 0 项目是第 i 项的值
 * 随后是其余项的值
 * 因为每次求第 i 项
 * 必然会求出前 i - 1 项
 * 所以附带返回
 */
int* fibonacci_b(int i)
{
  if( i < 1) return NULL;
  int buf_size = i + 1;
  int * buf = (int * ) malloc(sizeof(int) * (buf_size));
  
  *(buf + 1) = 1;
  *(buf + 2) = 1;
  
  for(int n = 3; n <= i; i ++)
  {
    int temp = *(buf + n - 1);
    *(buf + n) = *(buf + n - 1) + *(buf + n - 2);
    *(buf + n - 2) = *(buf + n - 1);
    *(buf + n - 1) = temp;
  }
  
  return buf;
}

void fibonacci_b_test()
{
  int i = 5;
  
  int * buf = fibonacci_b(i);
  printf("%d\r\n", *(buf + 1));
}

void fib_test()
{
  for(int i = 0; i < 10; i++)
  {
//    int n = fibonacci_a(i);
//    printf("%d ", n);
  }
  
  printf("\r\n");

  fibonacci_b_test();
}