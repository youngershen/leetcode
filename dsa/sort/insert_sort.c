/*
 * Project: leetcode
 * File : insert_sort.c
 * Date : 2021/8/8 16:18
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include "insert_sort.h"
#include "../../dsa/types/types.h"
#include "../../utils.h"

/*
 * https://www.geeksforgeeks.org/insertion-sort/
 *
 *
 */

void shift(INT* array, INT start, INT stop)
{
  for(int i = stop; i >= start; i --)
  {
    array[i + 1] = array[i];
  }
}

INT search(const INT* array,
           INT start,
           INT stop,
           INT index,
           INT order)
{
  int result = 0;

  for(int i = start; i < stop; i ++)
  {
    if(order == 0)
    {
      if(index < array[i])
      {
        result = i - 1;
        break;
      }
    }
    else
    {
      if(index > array[i])
      {
        result = i  - 1;
      }
    }
  }
  return result;
}

INT binary_search(INT* array, INT start, INT stop, INT index)
{
  return 0;
}

void insert_sort_v1(INT* array, INT size, INT order)
{
  for(int i = 1 ; i < size; i ++)
  {
    // find the position to insert
    int index = search(array, 0, i, array[i], order);
    // shift the element
    shift(array, index + 1, i);
    // insert the index
    array[index] = array[i];
  }
}

/*
 * 使用二分查找的插入排序
 */
void insert_sort_v2(INT* array, INT size, INT order)
{

}

void insert_sort_test()
{
  INT size = 5;
  INT array[5] = {1, 2, 3, 4, 5};
  insert_sort_v1(array, 5, 0);
//  print_array_int(array, size);
}