#include "holberton.h"
/**
 * _strlen_recursion - function that return the lenght of a string
 * @s: variable pointer s
 *
 * Return: the function
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
