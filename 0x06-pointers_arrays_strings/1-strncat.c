#include "holberton.h"
#include <stdio.h>
/**
 * *_strncat - function that concatenates two string
 * @dest: variable pointer dest
 * @src: varable pointer src
 * @n: integer variable n
 * Retrun: to character dest
 */
char *_strncat(char *dest, char *src, int n)
{
if (src < dest)
strncat(dest, src, n);
return (dest);
}
