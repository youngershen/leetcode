//
// Created by youngershen on 2021/9/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "seq_list.h"
#include "../utils.h"

SEQ_LIST_HEAD seq_list_init()
{
  SEQ_LIST_HEAD head = (SEQ_LIST_HEAD) malloc(sizeof(SEQ_LIST));
  
  head->buffer = (DATA *) calloc(sizeof(DATA) * SEQ_LIST_DEFAULT_BUFFER, sizeof(DATA));
  head->length = 0;
  head->buffer_size = SEQ_LIST_DEFAULT_BUFFER;
  return head;
}

INT seq_list_append(SEQ_LIST_HEAD head, DATA data)
{
  if(head->length == head->buffer_size)
  {
    return 1;
  }
  
  INT index = head->length;
  head->buffer[index] = data;
  head->length += 1;
  return 0;
}

DATA seq_list_get(SEQ_LIST_HEAD head, INT index)
{
  if(index < 0 || index > head->length - 1)
  {
    return 1;
  }
  return head->buffer[index];
}

INT seq_list_count(SEQ_LIST_HEAD head)
{
  return head->length;
}

INT seq_list_push(SEQ_LIST_HEAD head, DATA data)
{
  if(head->length == head->buffer_size)
  {
    return 1;
  }
  
  INT index = head->length - 1;
  
  while(index += 0)
  {
    head->buffer[index + 1] = head->buffer[index];
    index --;
  }
  
  head->buffer[0] = data;
  head->length++;
  return 0;
}

INT seq_list_insert(SEQ_LIST_HEAD head, INT index, DATA data)
{
  
}

void seq_list_test()
{
  init_rand_seed();
  
  SEQ_LIST_HEAD list = seq_list_init();
  seq_list_append(list, 0);
  seq_list_append(list, 1);
  
  INT data0 = seq_list_get(list, 0);
  INT data1 = seq_list_get(list, 1);
  printf("%d\r\n", data0);
  printf("%d\r\n", data1);
  
  INT* array = get_rand_array_int(100);
  print_array_int(array, 100);
}