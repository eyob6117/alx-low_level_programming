#include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: variable pointer s
 */

void _print_rev_recursion(char *s)
{
int i = 0;
if (s[i] == 0)
{
return;
}
_putchar(*s);
_print_rev_recursion(s - 1);
}
