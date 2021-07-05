#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int consistC = 0;
int prevC;

while (*s)
{
i = 0;
prevC = consistC;
while (*(accept + i) != '\0')
{
if (*(accept + i) == *s)
consistC++;
i++;
}
if (prevC == consistC)
break;
s++;
}
return (consistC);
}
