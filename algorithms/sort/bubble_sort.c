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

// 第一个版本是我最初学会的版本，也是很容易就能想到的版本，非常简单
//void bubble_sort_v1(INT* array, INT size, INT order)
//{
//  for(INT i = 0 ; i < size - 1; i ++)
//  {
//    for(INT n = i + 1; n < size; n ++)
//    {
//      if(order == 0 )
//      {
//        if (array[i] < array[n])
//        {
//          swap_int(array + i, array + n);
//        }
//      }
//      else
//      {
//        if(array[i] > array[n])
//        {
//          swap_int(array + i , array + n);
//        }
//      }
//    }
//  }
//}

// 第二个版本
void bubble_sort_v2(INT* array, INT size, INT order)
{
//  for(int i = 0 ; i < size ; i ++)
//  {
////    for(int n = 0 ; n < size - i - 1; n ++)
////    {
////      if(array[n] < array[n + 1])
////      {
////        swap_int(array + n, array + n + 1);
////      }
////    }
//  }
}

void bubble_sort_test(void)
{
  INT size = 5;
  INT array[5] = {1, 2, 3, 4, 3, };

  bubble_sort_v2(array, size, 0);
  print_array_int(array, size);
}