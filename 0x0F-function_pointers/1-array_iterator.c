#include "function_pointer.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - executes function a given parmaeter
 * @array: argument 1
 * @size: integer variable
 * @action: pointer variable
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array == NULL || action == NULL)
return;
while (i < size)
{
action(array[i])
i++;
}
}
