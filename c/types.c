/*
 * Project: leetcode
 * File : types.c
 * Date : 2022/4/5 15:26
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include "stdio.h"
#include "float.h"
#include "ctype.h"
#include "types.h"

void print_TYPE_SIZE()
{
  // char
  printf("The size of *char* is : %d \r\n", sizeof(char));
  printf("The size of *unsigned char* is : %d \r\n", sizeof(unsigned char));
  
  printf("----------\r\n");
  
  // floating number
  printf("The size of *float* is : %d \r\n", sizeof(float));
  printf("The size of *double* is : %d \r\n", sizeof(double));
  
  printf("----------\r\n");
  
  // short
  printf("The size of *short* is : %d \r\n", sizeof(short int));
  printf("The size of *unsigned short* is : %d \r\n", sizeof(unsigned short));
  
  printf("----------\r\n");
  
  // integer
  printf("The size of *int* is : %d \r\n", sizeof(int));
  printf("The size of *unsignd int* is : %d \r\n", sizeof(unsigned int));

  printf("----------\r\n");

  // long
  printf("The size of *long* is : %d \r\n", sizeof(long));
  printf("The size of *unsigned long* is : %d \r\n", sizeof(unsigned long));

  printf("----------\r\n");

  // long long
  printf("The size of *long long* is : %d \r\n", sizeof(long long));
  printf("The size of *unsigned long long* is : %d \r\n", sizeof(unsigned long long));
  
  printf("----------\r\n");
  
}

void print_FLOAT_MIN()
{
  printf("The minimal float is : %lu \r\n", FLT_MIN);
}

void print_FLOAT_MAX()
{
  printf("The maxmal float is : %lu \r\n", FLT_MAX);
}



void types_test()
{
  print_TYPE_SIZE();
  
  print_FLOAT_MIN();
  print_FLOAT_MAX();
}