#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - function that prints every other character of string,with the
 *    first charcter.
 * @str: pointer variable str
 */
void puts2(char *str)
{
int len = strlen(str);
int i = 0;
while (i < len)
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
