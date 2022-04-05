/*
 * Project: leetcode
 * File : basic.c
 * Date : 2022/4/5 15:49
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

/*
 * this is my basic c programming language and DSA SELF-TOUGHT learning
 * note in 2022 and just for fun.
 */

#include "stdio.h"
#include "basic.h"

int int_add(int a, int b)
{
  return a + b;
}

void int_add_test()
{
  int a = 3;
  int b = 4;
  int c = int_add(a, b);

  printf("The sum of %d and %d is : %d \r\n", a, b, c);
}

void basic_test()
{
  int_add_test();
}
