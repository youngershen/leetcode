/*
 * Project: leetcode
 * File : sequence_list.c
 * Date : 2022/4/14 16:46
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include "stdlib.h"
#include "stdio.h"
#include "sequence_list.h"

STATUS seqlist_init(SEQLIST_PTR ptr, int size)
{
  if(ptr && size > 1)
  {
    ptr->size = size;
    ptr->length = 0;
    int * buffer = (int *) malloc(sizeof(int) * size);
    
    if(buffer)
    {
      ptr->buffer = buffer;
      return 0;
    }
  }
  return 1;
}

SEQLIST_PTR seqlist_create(int size)
{
  SEQLIST_PTR ptr = (SEQLIST_PTR) malloc(sizeof(SEQLIST));
  
  if (ptr)
  {
    int ret = seqlist_init(ptr, size);
    if (ret == 0)
    {
      return ptr;
    }
  }
  return NULL;
}

void seqlist_test()
{
  SEQLIST_PTR ptr1 = seqlist_create(0);
  SEQLIST_PTR ptr2 = (SEQLIST_PTR) malloc(sizeof(SEQLIST));
  int code = seqlist_init(ptr2, 0);
  
  printf("%p\r\n", ptr1);
  printf("%p\r\n", ptr2);
  printf("code : %d \r\n", code);
}