#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer variable a
 * @b: pointer variable b
 */
void swap(int *a, int *b)
{
int *c;
*a = *b;
*c = *a;
*b = *c;
}