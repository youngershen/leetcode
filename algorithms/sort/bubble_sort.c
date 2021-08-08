/*
 * Project: leetcode
 * File : bubble_sort.c
 * Date : 2021/8/8 15:41
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include "../../utils.h"
#include "bubble_sort.h"

void bubble_sort(INT* array, INT size, INT order)
{
  for(INT i = 0 ; i < size - 1; i ++)
  {
    for(INT n = i + 1; n < size; n ++)
    {
      if(order == 0 )
      {
        if (array[i] < array[n])
        {
          swap_int(array + i, array + n);
        }
      }
      else
      {
        if(array[i] > array[n])
        {
          swap_int(array + i , array + n);
        }
      }
    }
  }
}

void bubble_sort_test(void)
{
  INT size = 5;
  INT array[5] = {1, 2, 3, 4, 3, };

  bubble_sort(array, size, 0);
  print_array_int(array, size);
}