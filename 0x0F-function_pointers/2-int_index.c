#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - funcation that searches for an integer
 * @array: array of integer
 * @size: size of array
 * @cmp: callback function
 * 
 * Return: to int
 */
int int_index(int *array, int size, int (*cmp)(int))
{

unsigned int i;
int temp;
if (array == NULL || cmp == NULL)
return;
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
if (cmp(array[i] != 0)
return (i);
else
return (-1);
}
