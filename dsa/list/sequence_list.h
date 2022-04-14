/*
 * Project: leetcode
 * File : sequence_list.h
 * Date : 2022/4/14 16:46
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#ifndef LEETCODE_SEQUENCE_LIST_H
#define LEETCODE_SEQUENCE_LIST_H
#define STATUS int

typedef struct
{
  int length; // 当前的表长度
  int size; // 存储区的长度
  int * buffer;
  
} * SEQLIST_PTR, SEQLIST;

STATUS seqlist_init(SEQLIST_PTR ptr, int size);
STATUS seqlist_insert(SEQLIST_PTR ptr, int pos, int elem);

SEQLIST_PTR seqlist_create(int size);

void seqlist_test();

#endif //LEETCODE_SEQUENCE_LIST_H
