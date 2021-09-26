//
// Created by youngershen on 2021/9/26.
//

#ifndef LEETCODE_SEQ_LIST_H
#define LEETCODE_SEQ_LIST_H
#define SEQ_LIST_DEFAULT_BUFFER 32

#include "types.h"

typedef INT32 DATA;

typedef struct SEQ_LIST{
  
  DATA * buffer;
  INT32  length;
  INT32  buffer_size;
  
} SEQ_LIST, * SEQ_LIST_HEAD;

SEQ_LIST_HEAD  seq_list_init();

int seq_list_count(SEQ_LIST_HEAD head);

int seq_list_append(SEQ_LIST_HEAD head, DATA data);

int seq_list_push(SEQ_LIST_HEAD head, DATA data);

int seq_list_insert(SEQ_LIST_HEAD head, DATA data);

void seq_list_delete(SEQ_LIST_HEAD head, UINT32 index);

void seq_list_merge(SEQ_LIST_HEAD head1, SEQ_LIST_HEAD head2);

void seq_list_find(SEQ_LIST_HEAD head, DATA data);

void seq_list_rest_buffer(SEQ_LIST_HEAD head);

#endif //LEETCODE_SEQ_LIST_H
