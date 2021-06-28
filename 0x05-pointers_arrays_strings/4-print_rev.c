#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - a function that prints a string in reverse
 * @s: pointer variable s
 */
void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
}
