#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function creats an arrays of char
 * @size: integer variable
 * @c: character variable
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
else
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
else
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
