#include "holberton.h"
#include <stdio.h>
#include <stlib.h>
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
printf("%d\n", value);
return (0);
}
