#include "holberton.h"
/**
 * _strlen_recursion - function that return the lenght of a string
 * @s: variable pointer s
 *
 * Return: the function
 */
int _strlen_recursion(char *s)
{
int n;
if (*s == '\n')
{
return;
}
else
{
n = n + _strlen_recursion(s + 1);

}
return (n);
}
