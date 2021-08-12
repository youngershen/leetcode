/*
 * Project: leetcode
 * File : decimal-scale.c
 * Date : 2021/8/10 18:58
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include <stdio.h>
#include <stdlib.h>
#include "../dsa/types/types.h"
#include "decimal-scale.h"


STRING dec2oct(STRING number)
{
  STRING ret = "666";
  return ret;
}

STRING dec2hex(STRING number)
{
  STRING ret = "";
  return ret;
}

/*
 * 十进制转二进制算法
 *
 *
 */
STRING dec2bin(STRING number)
{
  INT n = atoi(number);
  INT size = 20;
  char * decimal = (char*) malloc(sizeof(char) * size);

  if(n == 0)
  {
    return NULL;
  }
  else
  {
    int index = 0;
    while( n != 0)
    {
      int bit = n % 2;
      *(decimal + index) = (bit == 1 ? '1' : '0');
      index += 1;
      n = n / 2;
    }

    *(decimal + index) = 'B';
    *(decimal + index + 1) = '\0';
    return decimal;
  }
}

void decimal_scale_test()
{
  STRING number = "6";
  STRING ret = dec2bin(number);

  if(ret == NULL)
  {
    printf("Format error.\r\n");
  }
  else
  {
    printf("Result is %s. \r\n", ret);
  }
}