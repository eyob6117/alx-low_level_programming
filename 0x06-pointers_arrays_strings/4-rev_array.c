#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array integer
 * @a: variable pointed by integer a
 * @n: integer variable n
 */

void reverse_array(int *a, int n)
{
int i = 0;
int tmp;
for (i = n - 1; i >= n/2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}
