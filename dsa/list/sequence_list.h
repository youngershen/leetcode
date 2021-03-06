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
#define DEFAULT_BUFFER_SIZE 10
#define DEFAULT_EXTEND_BUFFER_SIZE 10

typedef struct
{
  int length; // 当前的表长度
  int size; // 存储区的长度
  int * buffer;
  
} * SEQLIST_PTR, SEQLIST;

STATUS seqlist_init(SEQLIST_PTR ptr);
void seqlist_init_test();

STATUS seqlist_insert(SEQLIST_PTR ptr, int pos, int elem);
void seqlist_insert_test();

SEQLIST_PTR seqlist_create();
void seqlist_create_test();

STATUS seqlist_extend_buffer(SEQLIST_PTR ptr);

void seqlist_print(SEQLIST_PTR ptr);
void seqlist_test();

#endif //LEETCODE_SEQUENCE_LIST_H
