#include <stdlib.h>
#include "holberton.h"
#include <limits.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: integer variable
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *mal = malloc(b);
if (mal == NULL)
{
exit(98);
}
else
return (mal);
}
