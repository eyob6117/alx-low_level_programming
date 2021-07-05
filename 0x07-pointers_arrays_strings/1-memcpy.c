#include "holberton.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: variable pointer  dest
 * @src: variable pointer src
 * @n: integer variable n
 *
 * Return: pointer to beginning of memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
char *start = dest;

while (i < n)
{
*dest++ = *src++;
i++;
}
return (start);
}
