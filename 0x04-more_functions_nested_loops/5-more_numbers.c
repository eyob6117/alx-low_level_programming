#include <holberton.h>
#include <stdio.h>
/**
 * more_numbers - print 10 times the number from 0 to 14
 */
void more_numbers(void)
{
int i = 0;
int j;
while (i <= 10)
{
for (j = 0; j <=14; j++)
_putchar(j + '0');
_putchar('\n');
i++;
}
}
