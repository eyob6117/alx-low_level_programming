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
for (i = (len / 2) + 1; i < len; i++)
{  
_putchar(str[i]);
}
_putchar('\n');
}