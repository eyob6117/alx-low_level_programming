#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * array_range - get len, malloc * len
 * loop size of len to insert min++ into new arr
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
int *array, index, size;

if (min > max)
return (NULL);

size = max - min + 1;

array = malloc(sizeof(int) * size);

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] = min++;

return (array);
}
