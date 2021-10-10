//
// Created by youngershen on 2021/9/26.
//

#ifndef LEETCODE_SEQ_LIST_H
#define LEETCODE_SEQ_LIST_H
#define SEQ_LIST_DEFAULT_BUFFER 32

#include "common.h"

typedef INT DATA;

typedef struct SEQ_LIST{
  
  DATA * buffer;
  INT  length;
  INT  buffer_size;
  
} SEQ_LIST, * SEQ_LIST_HEAD;

SEQ_LIST_HEAD  seq_list_init();

INT seq_list_count(SEQ_LIST_HEAD head);

INT seq_list_append(SEQ_LIST_HEAD head, DATA data);

INT seq_list_push(SEQ_LIST_HEAD head, DATA data);

INT seq_list_insert(SEQ_LIST_HEAD head, INT index, DATA data);

INT seq_list_delete(SEQ_LIST_HEAD head, UINT32 index);

DATA seq_list_rand(SEQ_LIST_HEAD head);

INT seq_list_merge(SEQ_LIST_HEAD head1, SEQ_LIST_HEAD head2);

INT seq_list_find(SEQ_LIST_HEAD head, DATA data);

DATA seq_list_get(SEQ_LIST_HEAD head, INT index);

INT seq_list_rest_buffer(SEQ_LIST_HEAD head);

INT seq_list_is_full(SEQ_LIST_HEAD head);
INT seq_list_is_full(SEQ_LIST_HEAD head);












void seq_list_test();

#endif //LEETCODE_SEQ_LIST_H
