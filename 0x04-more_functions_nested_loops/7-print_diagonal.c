#include "holberton.h"

/**
 * print_dagonal - print a diagonal line on the terminal.
 * @n - integer value
 *
 */
void print_diagonal(int n)
{
int len;

if (n > 0)
{   
for (len = 0; len < n; len++)
{
_putchar("'\'");
}

putchar('\n');
}
