#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer variable a
 * @b: pointer variable b
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
