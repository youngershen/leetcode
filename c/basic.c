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
#include "ctype.h"
#include "basic.h"


STATUS hello_world(char * name)
{
  printf("Hello world : %s", name);
  return STATUS_OK;
}

STATUS print_test()
{
  
  
  
  return STATUS_OK;
}

UINT64 int_add(UINT64 a, UINT64 b)
{
  return a + b;
}

STATUS int_add_test()
{
  int a = 3;
  int b = 4;
  int c = int_add(a, b);

  printf("The sum of %d and %d is : %d \r\n", a, b, c);
  
  return STATUS_OK;
}

STATUS basic_test()
{
  hello_world("SYG");
  //  int_add_test();


  return STATUS_OK;
}
