#include "holberton.h"
#include <stdio.h>
/**
 * puts - function that prints every other character of a string,with the
 *    first charcter.
 * @str: pointer variable str
 */
void puts2(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
