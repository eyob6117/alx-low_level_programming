#include "holberton.h"
0;276;0c/**
 * _puts_recursion - function that prints a string, followed by a  newline
 * @s: variable pointer s
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_putchar(*s + '\n');
_puts_recursion(s + 1);
}
