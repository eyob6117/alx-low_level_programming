#include "holberton.h"
#include <stdio.h>
/**
 * print_line - draw a straight line in the terminal
 */
void print_line(int n)
{
int c;
if (n > 0)
{
for (c = 0; c <= n; c++)
_putchar('-');
}
_putcha('\n');

