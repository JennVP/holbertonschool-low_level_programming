#include"holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
/*@i: storage the value of 'a'= 98 instead of *b = 42 */
*b = i;
}
