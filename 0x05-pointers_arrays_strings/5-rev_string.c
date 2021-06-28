#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - function that reverse a string
 * @s: variable pointer s
 */

void rev_string(char *s)
{
int len = strlen(s) - 1;
int i;
char tmp;
for (i = 0; i > len / 2; i--)
tmp = s[i];
s[i] = s[len - i];
s[len - i] = tmp;
}
