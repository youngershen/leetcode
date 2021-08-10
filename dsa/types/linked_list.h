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

#include "types.h"

typedef struct LLIST
{
  INT payload;
  struct LLIST * next;

} LINKED_LIST;

#endif //LEETCODE_LINKED_LIST_H
