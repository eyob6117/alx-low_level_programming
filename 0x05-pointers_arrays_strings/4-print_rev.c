#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - a function that prints a string in reverse
 * @s: pointer variable s
 */
void print_rev(char *s)
{
int len = 0;
int i;
while  (s[i])
len++;   
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
