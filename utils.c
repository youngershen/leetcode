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
#include <stdlib.h>
#include <time.h>
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

INT* get_rand_array_int(INT size)
{
  INT* array = (INT*)malloc(sizeof(INT) * size);
  
  for(int i =  0; i < size; i ++)
  {
    array[i] = get_rand_int(100);
  }
  return array;
}

INT get_rand_int(INT m)
{
  return (int) rand() % m;
}

void init_rand_seed()
{
  time_t t;
  srand((unsigned) time(&t));
}
