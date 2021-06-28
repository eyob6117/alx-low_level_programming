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
int n;
if ((len % 2) == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}
for (i = n; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
