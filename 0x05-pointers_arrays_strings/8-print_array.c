#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that print n, elements of an array of integers.
 * @a: pointer variable a
 * @n: intiger variable n
 */

void print_array(int *a, int n)
{
int p[];
a = p;
int i;
for (i = 0; i < n; i++)
{
printf("array[%d]",a[i]);
printf(",");
}
printf("\n");
}