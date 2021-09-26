/*
 * Project: leetcode
 * File : linked_list.h
 * Date : 2021/8/10 19:24
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#ifndef LEETCODE_LINKED_LIST_H
#define LEETCODE_LINKED_LIST_H

#include "common.h"

typedef struct NODE
{
  INT payload;
  struct NODE * next;
}
LINKED_LIST_NODE,
* LINKED_LIST_HEAD;

LINKED_LIST_HEAD linked_list_create();

INT linked_list_append(LINKED_LIST_HEAD head,
                       LINKED_LIST_NODE node);

INT linked_list_remove();

INT linked_list_search();

INT linked_list_merge(LINKED_LIST_HEAD* l1, LINKED_LIST_HEAD* l2);

void linked_list_test();

#endif //LEETCODE_LINKED_LIST_H
