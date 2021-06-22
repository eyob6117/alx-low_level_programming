#include "holberton.h"

/**
 * print_alphabet - Print the alphabet in lowercase.
 *
 * Return: void.
 */

void print_alphabet(void)
{
char ch;  
int i = 0;
while (i < 10)
{
for (ch = 'a'; ch < 'z'; ch++)
{
_putchar(ch);      
}
i++;
_putchar('\n');
}
}
