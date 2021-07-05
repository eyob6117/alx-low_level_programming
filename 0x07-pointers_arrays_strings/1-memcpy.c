#include "holberton.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: variable pointer  dest
 * @src: variable pointer src
 * @n: integer variable n
 *
 * Retrun: to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
unsigned char *destination = dest;
const  unsigned char *source = src;


for (i = 0; i < n; i++)
{
destination[i] = source[i];
}
return (dest);
}
