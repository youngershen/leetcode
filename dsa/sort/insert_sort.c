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
  // start = 0
  // stop = 1
  for(int i = stop - 1; i >= start; i --)
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
  int result = stop;

  for(int i = start; i < stop; i ++)
  {
    if(order == 0)
    {
      if(index < array[i])
      {
        result = i;
        break;
      }
    }
    else
    {
      if(index > array[i])
      {
        result = i;
        break;
      }
    }
  }
  return result;
}

INT binary_search(INT* array, INT start, INT stop, INT index, INT order)
{
  INT result = stop;

  for(int i = start; i <= stop; i ++)
  {
    int temp = array[i];
  }

  return 0;
}

/*
 * 1. 查找数据线要插入的位置
 * 2. 顺序移动元素
 * 3. 插入数据项
 * 4. 重复直到排序完成
 */
void insert_sort_v1(INT* array, INT size, INT order)
{
  for(int i = 1 ; i < size; i ++)
  {
    // find the position to insert
    int index = search(array, 0, i, array[i], order);
    // take out the current avlue
    int temp = array[i];
    // shift the element
    shift(array, index, i);
    // insert the index
    array[index] = temp;
  }
}

/*
 * 使用二分查找的插入排序
 */
void insert_sort_v2(INT* array, INT size, INT order)
{
  for(int i = 1; i < size; i++)
  {
    int index = binary_search(array, 0, i, array[i], order);
  }
}

void insert_sort_test()
{
  INT size = 5;
  INT array[5] = {3,2,1,2,3};
  insert_sort_v1(array, size, 1);
  print_array_int(array, size);
}