#include <stdlib.h>
#include "holberton.h"
#include <limits.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: integer variable
 */
void *malloc_checked(unsigned int b)
{
void *mall;
mal = malloc(b);
if (mal == NULL)
exit(98);
else
return (mal);
}
