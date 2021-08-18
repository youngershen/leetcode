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

/*
 * 冒牌排序
 * https://en.wikipedia.org/wiki/Bubble_sort#In_practice
 * https://www.geeksforgeeks.org/bubble-sort/
 * https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm
 *
 * 流程分析:
 * 1. 外层循环从 0 到 n  -1
 * 2. 内层循环每次都比外层少一次
 * 3. 每次拿外层循环中的下标中的数字去比较内层循环中的每一个数字，根据 order 参数指定的规则进行交换
 * 4. 如果符合交换条件则通过指针交换两个数字在数组中的位置。
 *
 * 复杂度分析:
 *
 * 作为交换排序，冒泡排序的操作主要是比较和交换，根据 N 的大小，
 * 每次需要比较的次数为, 1 + 2 + 3 .... + N,
 * 所以可以得出总共的比较次数是 (1 + n) * 1 / 2 次。
 * 交换的次数最坏情况下也是需要同样的次数的，
 * 所以得出的时间复杂度为  (1/2 + n/2) * (1/2 + n / 2)
 * 舍去常数项和一次项，最后得到的最坏时间复杂度为 N * N。
 *
 * 其次是最佳时间复杂度为 O(n), 即为不需要交换的情况。
 *
 * 空间复杂度为 O(1), 即冒泡排序不需要额外的存储空间存储临时数据。
 *
 * 总结：
 * 最坏和平均时间复杂度为: O(N*N)
 * 最坏情况下列表的顺序与要排序的顺序恰恰相反，这意味着每一次比较之后都要进行交换
 * */


/*
 * 第一个版本是我最初学会的版本，也是很容易就能想到的版本，非常简单
 * 那么我们怎么确定一个数组是有序的呢？经过我的研究，发现只要第一次
 * 循环过程中没有任何一次的交换，那么它就是有序的，所以我们只要设置
 * 一个表标志位，在第一次循环中没有交换，则表示数组是有序的，那么我们
 * 便直接跳过之后的所有循环就可以了。
 *
 * */
void bubble_sort_v1(INT* array, INT size, INT order)
{
  for(INT i = 0 ; i < size - 1; i ++)
  {
    for(INT n = i + 1; n < size; n ++)
    {
      if(order == 0 )
      {
        if (array[i] > array[n])
        {
          swap_int(array + i, array + n);
        }
      }
      else
      {
        if(array[i] < array[n])
        {
          swap_int(array + i , array + n);
        }
      }
    }
  }
}

/*
 * 第二个版本和第一个版本稍有不同, 第一个版本是从前往后冒泡，
 * 第二个版本是从后往前冒泡。
 *
 * 复杂度都是一样的，就是循环的写法有些差别。
 * */
void bubble_sort_v2(INT* array, INT size, INT order)
{
  for(int i = 0 ; i < size - 1; i ++)
  {
    for(int n = 0 ; n < size - i - 1; n ++)
    {
      if(order == 0)
      {
        if(array[n] > array[n + 1])
        {
          swap_int(array + n, array + n + 1);
        }
      }
      else
      {
        if(array[n] < array[n + 1])
        {
          swap_int(array + n, array + n + 1);
        }
      }
    }
  }
}

/**
 *
 * 第三个版本的算法是改良过的冒牌排序，版本一和版本二的冒泡排序在数组已经
 * 有序的情况下依然会进行比较，这个时候我们可以直接在循环中跳出，来避免
 * 没有意义的比较。
 *
 * 我们只要确定在一次循环中没有发生交换，就可以确定这个数组已经是有序的，那么
 * 就可以直接跳过之后的循环了。
 *
 * @param array 待排序的数组
 * @param size  数组的程度
 * @param order 0 为升序， 其他为降序
 */
void bubble_sort_v3(INT* array, INT size, INT order)
{
  for(int i = 0 ; i < size - 1; i ++)
  {
    INT is_swapped = FALSE;
    for(int n = 0; n < size - i - 1; n ++)
    {
      if(order == 0)
      {
        if(array[n] > array[n+1])
        {
          swap_int(array + n, array + n + 1);
          is_swapped = TRUE;
        }
      }else
      {
        if(array[n] < array[n+1])
        {
          swap_int(array + n, array + n + 1);
          is_swapped = TRUE;
        }
      }
    }
    if(is_swapped == FALSE)
    {
      break;
    }
  }
}

void bubble_sort_v4(INT* array, INT size, INT order)
{
  for(int i = 0 ; i < size - 1; i ++)
  {
    for(int n = 0; n < size - i - 1; n++)
    {

    }
  }
}

void bubble_sort_test(void)
{
  INT size = 5;
  INT array[5] = {2, 1, 3, 4, 5,};

  bubble_sort_v4(array, size, 0);
  print_array_int(array, size);
}