#include "holberton.h"
#include <stdio.h>
/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: Integer amount of _
 */
void print_line(int n)
{
int c;
if (n > 0)
{
for (c = 0; c < n; c++)
_putchar('-');
}
_putchar('\n');
}
