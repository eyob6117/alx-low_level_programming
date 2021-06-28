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
int i;
int len;
int result = 0;
len = strlen(s);
for (i = 0; i < len; i++)
{
result = result * 10 + (s[i] - '0');
		 
}
printf("%d", -result);

return (0);
}
