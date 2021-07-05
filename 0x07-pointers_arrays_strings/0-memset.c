#include "holberton.h"
/**
 * *_memset - function that filss memory with a constant byte
 * 
 * @s: character variable pointer
 * @b: character variable b
 * @n: unsigned int n
 * 
 * Return: to character s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *memory = s, value = b;
while (i < n)
{
*s++ = value;
i++;
}
return (memory);
}
