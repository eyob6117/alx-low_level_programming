#include <holberton.h>
#include <stdio.h>
/**
 * more_numbers - print 10 times the number from 0 to 14
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
for (i = 0: i <= 10; i++)
{
for (j = 0; j <= 14; j++)
_putchar(j + '0');
}
_putchar('\n');
}