#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: character variable s
 *
 * Return: Always
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return len;
}
