#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - print half of a string,
 * @str: pointer variable str
 */

void puts_half(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len; i++)
{
if (i % 2 != 0)
{
len = (strlen(str) - 1) / 2;
}
else 

if (i < len/2)
{
continue;
}
else
{   
_putchar(str[i]);
}
}
_putchar('\n');
}
