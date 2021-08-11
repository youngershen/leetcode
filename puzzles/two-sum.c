/*
 * Project: leetcode
 * File : two-sum.c
 * Date : 2021/8/11 21:11
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include <stdlib.h>
#include "../utils.h"
#include "two-sum.h"

// * 链接：https://leetcode-cn.com/problems/two-sum

/*
 * 两数之和
 * 给定一个整数数组 nums 和一个整数目标值 target，
 * 请你在该数组中找出 和为目标值 target 的那 两个整数，
 * 并返回它们的数组下标。
 * 你可以假设每种输入只会对应一个答案。
 * 但是，数组中同一个元素在答案里不能重复出现。
 * 你可以按任意顺序返回答案。
 * 来源：力扣（LeetCode）
 *
 * 示例 1:
 *
 * 输入：nums = [2,7,11,15], target = 9
 * 输出：[0,1]
 * 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
 *
 * 示例 2:
 * 输入：nums = [3,2,4], target = 6
 * 输出：[1,2]
 * 示例 3：
 * 输入：nums = [3,3], target = 6
 * 输出：[0,1]
 *
 * 提示:
 * 2 <= nums.length <= 10^4
 * -10^9 <= nums[i] <= 10^9
 * -10^9 <= target <= 10^9
 * 只会存在一个有效答案
 * 进阶：你可以想出一个时间复杂度小于 O(n2) 的算法吗？
 */

INT* two_sum_v1(INT* array,
                INT size,
                INT target,
                INT* result_size)
{
  INT rsize = 2; // return size
  *result_size = rsize;
  INT* result = (INT*) malloc(sizeof(INT) * rsize);

  for(INT i = 0; i < size; i ++)
  {
    for(INT n = 0 ; n< size; n ++ )
    {
      INT sum = array[i] + array[n];
      if(sum == target && i != n )
      {
        *(result) = i;
        *(result + 1) = n;
      }
    }
  }
  return result;
}

void two_sum_test()
{
  INT array[5] = {1, 2, 3, 4, 5};
  INT size = 5;
  INT target = 5;
  INT result_size = 2;
  INT* result = two_sum_v1(array, size, target, &result_size);
  print_array_int(result, result_size);
}