#include "holberton.h"
/**
 * _pow_recursion - function that reutrns the value of x reised to y
 * @x: integer variable x
 * @y: integer variable y
 *
 * Return: Always(0)
 */

int _pow_recursion(int x, int y)

{
if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y-1);
}
