#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a  newline
 * @s: variable pointer s
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
_putchar(*s);
_puts_recursion(s + 1);
}
