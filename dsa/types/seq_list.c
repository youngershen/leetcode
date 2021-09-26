//
// Created by youngershen on 2021/9/26.
//

#include <stdlib.h>
#include "seq_list.h"

SEQ_LIST_HEAD seq_list_init()
{
  SEQ_LIST_HEAD head = (SEQ_LIST_HEAD) malloc(sizeof(SEQ_LIST));
  head->buffer = 0;
  head->length = 0;
  head->buffer_size = SEQ_LIST_DEFAULT_BUFFER;
  return head;
}



