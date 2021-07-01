#include "holberton.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string
 * @dest: variable pointer dest
 * @src: varable pointer src
 * @n: integer variable n
 * Return: to charcter dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
