#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - function that print numbers
 * @separator: first argument
 * @n: second argument
 * @...: A variable number of numbers to be printed. 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list li;
va_start(li, n);
for (i = 0; i < n; i++)
{
printf("%d",va_arg(li, int));
if (i != (n -1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(li);
}
