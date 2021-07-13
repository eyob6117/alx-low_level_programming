#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function creats an arrays of char
 * @size: integer variable 
 * @c: character variable
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (0);
else
{
c = malloc (sizeof(char)* size));
}
return (c);
}
