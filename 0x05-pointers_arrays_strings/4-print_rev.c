#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - a function that prints a string in reverse
 * @s: pointer variable s
 */
void print_rev(char *s)
{
int len = strlen(s)-1;
int i;
for (i = len; i >= len / 2 ; i--)
char temp = s[i];
s[i] = s[len -i];
s[len-i]=temp;
}
