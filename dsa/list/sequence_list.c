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
  if(ptr)
  {
    ptr->size = size;
    ptr->length = 0;
    ptr->buffer = (int *) malloc(sizeof(int) * size);
    return 0;
  }
  else
  {
    return 1; // 空指针异常
  }
}

SEQLIST_PTR seqlist_create(int size)
{
  SEQLIST_PTR ptr = (SEQLIST_PTR) malloc(sizeof(SEQLIST));
  
  if(ptr)
  {
    int ret = seqlist_init(ptr, size);
    if( ret == 0)
    {
      return ptr;
    }
    else
    {
      NULL;
    }
  }
  else
  {
    return NULL;
  }
}

void seqlist_test()
{
  SEQLIST_PTR ptr1 = seqlist_create(10);
  SEQLIST_PTR ptr2 = (SEQLIST_PTR) malloc(sizeof(SEQLIST));
  seqlist_init(ptr2, 20);
  
  printf("%p\r\n", ptr1);

}