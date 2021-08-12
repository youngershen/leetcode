/*
 * Project: leetcode
 * File : linked_list.c
 * Date : 2021/8/10 19:24
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#include <stdlib.h>
#include "linked_list.h"

LINKED_LIST_HEAD linked_list_create()
{
  LINKED_LIST_HEAD head = (LINKED_LIST_HEAD)(malloc(sizeof(LINKED_LIST_NODE)));
  return head;
}

INT linked_list_append(LINKED_LIST_HEAD head,
                       LINKED_LIST_NODE node)
{

  *(head)->next = node;
  return 0;
}

void linked_list_test()
{
  LINKED_LIST_HEAD list = linked_list_create();

  LINKED_LIST_NODE node;
  node.payload = 0;



}