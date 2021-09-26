/*
 * Project: leetcode
 * File : decimal-scale.h
 * Date : 2021/8/10 18:58
 * Author: Younger Shen <申延刚>
 * Web: https://github.com/youngershen
 * Cell: 13811754531
 * Email : shenyangang@163.com
*/

#ifndef LEETCODE_DECIMAL_SCALE_H
#define LEETCODE_DECIMAL_SCALE_H

#include "../dsa/types/common.h"


// decimal to tocal
STRING dec2oct(STRING number);

// decimal to binary
STRING dec2bin(STRING number);

// binary to decimal
STRING bin2dec(STRING number);

// decimal to hexadecimal
STRING dec2hex(STRING number);

void decimal_scale_test();

#endif //LEETCODE_DECIMAL_SCALE_H
