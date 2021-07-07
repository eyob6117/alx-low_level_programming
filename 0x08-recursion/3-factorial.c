#include "holberton.h"
0;276;0c/**
 * factorial - function that returns the factorial
 * @n: integer varialble
 *
 * Return: Alwyas (0) sucess
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}	  
