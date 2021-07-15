#include <stdlib.h>
#include "holberton.h"
#include <limits.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: integer variable
 */
void *malloc_checked(unsigned int b)
{
int *mall;
mal = (int *)malloc(sizeof(*mall) * b);
if (mal == NULL)
return (98);
else
return (mal);
}
