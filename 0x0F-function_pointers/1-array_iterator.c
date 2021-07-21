#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - executes function a given parmaeter
 * @array: argument 1
 * @size: integer variable
 * @action: pointer variable
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (action == NULL || array == NULL)
{
return;
}
while (i < size)
{
action(array[i]);
i++;
}
}
