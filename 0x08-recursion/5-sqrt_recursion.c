#include "holberton.h"
/**
 * _sqrt_recursion - function that returns the natural square root 
 * 
 * @n: integer variable n
 *
 * Return: Always (0)
 */

int _sqrt_recursion(int n)
{
if (n ^ 0.5 != 0)
{
return (-1);
}
else
{
return (_sqrt_recursion(n ^ 0.5));
}
}
