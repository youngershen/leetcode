/*
 * Project: leetcode
 * File : select_sort.c
 * Date : 2021/8/18 22:50
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include "select_sort.h"
#include "../types/types.h"
#include "../../utils.h"

/*
 * 插入排序
 *
 * 最简单的插入排序，每次比较都将结果放入当前数组的最前面
 * 不足的地方是在每次有效比较之后都做了交换。
 */
INT select_sort_v1(INT* array, INT size, INT order)
{
  for(int i = 0; i < size - 1; i ++)
  {
    for(int n = i + 1; n < size; n ++)
    {
      if(array[i] < array[n])
      {
        int temp = array[i];
        array[i] = array[n];
        array[n] = temp;
      }
    }
  }
  return 0;
}

INT select_sort_v2(INT* array, INT size, INT order)
{
  int target = 0;

  for(int i = 0 ; i < size - 1; i ++)
  {
    target = i;

    for(int n = i; n < size; n ++)
    {
      if(array[n] < array[target])
      {
        target = n;
      }
    }

    if( i != target)
    {
      int t = array[i];
      array[i] = array[target];
      array[target] = t;
    }
  }
  return 0;
}


void select_sort_test()
{
  INT size = 5;
  INT array[5] = {1, 1, 3, 4, 1};
  select_sort_v2(array, size, 0);
  print_array_int(array, size);
}

