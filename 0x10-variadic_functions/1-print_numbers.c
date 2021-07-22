#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - function that print numbers
 * @separator: first argument
 * @n: second argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list li;
if (separator == NULL)
return;
va_start(li, n);
for (i = 1; i < n; i = va_arg(li, int))
{
printf("%d %s",i,separator);
va_end(li);
}
putchar('\n');
}
