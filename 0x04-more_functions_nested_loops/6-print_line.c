#include "holberton.h"
#include <stdio.h>
/**
 * print_line - draw a straight line in the terminal
 */
void print_line(int n)
{
char c;
for (c = 0; c <= n; c++)
{
_putchar('-');
_putcha('\n');
}
}
