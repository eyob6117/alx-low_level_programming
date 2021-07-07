#include "holberton.h"
/**
 * _puts - function that prints a string, followed by a  newline
 * @s: variable pointer s
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
