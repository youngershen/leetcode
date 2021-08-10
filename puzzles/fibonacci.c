/*
 * Project: leetcode
 * File : 1.c
 * Date : 2021/8/9 17:43
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/
#include <stdlib.h>
#include <stdio.h>
#include "fibonacci.h"
#include "../dsa/types/types.h"

INT* allocate_memory(INT size)
{
  INT* mem = (INT*) malloc(sizeof(INT) * size);
  return mem;
}


/*
 * 使用递归计算第 n 个 fibonacci.
 */
INT fibonacci_index_v1(INT index)
{
  if(index == 1)
  {
    return 1;
  }

  if(index == 2)
  {
    return 1;
  }

  return fibonacci_index_v1(index - 1) + fibonacci_index_v1(index - 2);
}

/*
 * 不使用递归求第 n 个 fibonacci
 */
INT fibonacci_index_v2(INT index)
{

  INT temp1 = 1; // n - 2
  INT temp2 = 1; // n - 1
  INT result = 0; // n

  for(int i = 0; i < index - 2; i ++)
  {
    result = temp1 + temp2;
    temp1 = temp2;
    temp2 = result;
  }
  return result;
}


INT* fibonacci_v1(INT* array, INT index)
{

  if(array == NULL)
  {
    array = allocate_memory(index);
  }

  return array;
}

INT* fibonacci_v2(INT index)
{
  INT* array = allocate_memory(index);
  return array;
}

void fibonacci_test()
{
  INT index = 7;
  INT result = fibonacci_index_v2(index);
  printf("the fibonacci number of %d is %d \r\n", index, result);
}
