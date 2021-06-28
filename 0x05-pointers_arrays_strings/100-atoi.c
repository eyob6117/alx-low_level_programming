#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - function that convert a string to an integer
 * @s: char pointer variable
 *
 * Return: int value
 */

int _atoi(char *s)
{
int value;
value = atoi(s);
_putchar(value);
return (0);
}
