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
#include "../types/common.h"
#include "decimal-scale.h"

void reverse_string(STRING str)
{

}

char binchar(INT i)
{
  return i == 0 ? '0': '1';
}

char octchar(INT i)
{
  char oct[16] = "01234567";
  return oct[i];
}

char hexchar(INT i)
{
  char hex[16] = "0123456789ABCDEF";
  return hex[i];
}

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
  STRING decimal = (STRING) malloc(sizeof(char) * size);

  if(n == 0)
  {
    return NULL;
  }
  else
  {
    int length = 0;
    while( n != 0)
    {
      int bit = n % 2;
      *(decimal + length) = (bit == 1 ? '1' : '0');
      n = n / 2;
      length += 1;

      if(length >= (size - 2))
      {
        decimal = realloc(decimal, sizeof(char) * size);
      }
    }
    *(decimal + length) = 'B';
    *(decimal + length + 1) = '\0';
    return decimal;
  }
}

void decimal_scale_test()
{
  STRING number = "99999";
  STRING ret = dec2bin(number);

  if(ret == NULL)
  {
    printf("Format error.\r\n");
  }
  else
  {
    printf("Result is %j2j. \r\n", ret);
  }

  char a = hexchar(15);

  printf("char is %c\r\n", a);
}