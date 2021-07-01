#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array integer
 * @a: variable pointed by integer a
 * @n: integer variable n
 */

void reverse_array(int *a, int n)
{
int i;
for (i = n; i >= 0; i--) 
{
if (i != 0)
{    
printf(", ")
}
printf("%d", a[i]);
}
printf("\n");
}
