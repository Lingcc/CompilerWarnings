/*
 * ============================================================================
 *
 *       Filename:  0001_pointer_type_conv_const_char_to_char.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  10/04/2015 09:04:27 AM
 *       Revision:  none
 *       Compiler:  
 *
 *         Author:  Kun Ling < kunling@lingcc.com>
 *   Organization:  Lingcc.com
 *
 * ============================================================================
 */
#include <stdio.h>

static char* a = "hello world";

int main() {
  a[3] = 'e';
  printf("%s\n", a);
  return 0;
}
