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
#include "threadpoollegacyapiset.h"

STATUS seqlist_init(SEQLIST_PTR ptr)
{
  if(ptr)
  {
    ptr->size = DEFAULT_BUFFER_SIZE;
    ptr->length = 0;
    int * buffer = (int *) malloc(sizeof(int) * ptr->size);
    
    if(buffer)
    {
      ptr->buffer = buffer;
      return 0;
    }
  }
  return 1;
}

SEQLIST_PTR seqlist_create()
{
  SEQLIST_PTR ptr = (SEQLIST_PTR) malloc(sizeof(SEQLIST));
  
  if (ptr)
  {
    int ret = seqlist_init(ptr);
    if (ret == 0)
    {
      return ptr;
    }
  }
  return NULL;
}

STATUS seqlist_insert(SEQLIST_PTR ptr, int pos, int elem)
{
  
  if(!ptr)
  {
    return 1; // 空指针异常
  }
  
  if(pos < 0 || pos > ptr->length)
  {
    return 2; // 插入位置错误, 插入位置只能是闭区间 [0, length]
  }
  
  if(ptr->length >= ptr->size)
  {
    return 3; // 缓冲区已满, 直接退出函数
  }
  
  if((ptr->size - ptr->length) == 1)
  {
    return 4; // 缓冲区差一个满, 则要求重新分配内存
  }

  if( ptr->length == 0)
  {
    *(ptr->buffer + pos) = elem;
  }
  else
  {
    // 出错处理完毕, 从这里开始插入流程 -1 ,-1
    for(int i = ptr->length - 1; i >= pos - 1; i--)
    {
      // 计算出要移动到的位置, 也就是 i 的下一个元素的位置
      int dest = i + 1;
      // 把第 i 个元素直接移动到下一个位置
      *(ptr->buffer + dest) = *(ptr->buffer + i);
    }
    // 移动元素完成之后, 在 pos 的位置插入 elem 元素
    *(ptr->buffer + pos - 1) = elem;
  }
  // length 自增 1
  ptr->length += 1;
  
  // 返回 0 表示插入成功
  return 0;
}


/*
 *  扩展线性表的存储取, 在存储区即将占满的情况下, 直接扩展
 *  DEFDEFAULT_EXTEND_BUFFER_SIZE (10) 个单位的存储空间
 *  该宏定义在 sequence_list.h 头文件中
 */
STATUS seqlist_extend_buffer(SEQLIST_PTR ptr)
{
  return 0;
}


void seqlist_print(SEQLIST_PTR ptr)
{

  if(!ptr)
  {
    // 空指针异常
    printf("PTR is NULL");
  }
  
  if(ptr->length < 1)
  {
    // 空表异常
    printf("Empty list");
  }

  for( int i = 0; i < ptr->length; i ++)
  {
    printf("%d ", *(ptr->buffer + i));
  }

  printf("\r\n");
  printf("print complete\r\n");
}

void seqlist_test()
{
  SEQLIST_PTR ptr1 = seqlist_create();
  seqlist_insert(ptr1, 0, 100);
  seqlist_insert(ptr1, 1, 101);
  seqlist_print(ptr1);
}