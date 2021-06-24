#include "holberton.h"
#include <stdio.h>
/**
 * print_square - function to print a square
 * @size: integer value
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
{
for (i = 1; i < size; i++)
{
for (j = 1; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
}
