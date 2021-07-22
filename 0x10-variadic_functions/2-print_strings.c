#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_strings - function that prints  strings
 * @separator: string to be printed
 * @n: number of argument passed
 * @...: indefinete number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list str;
va_start(str, n);
for (i = 0; i < n; i++)
{
if (i != (n - 1) && separator == NULL)
printf("%s", separator);
if (va_arg(str, char *) == NULL)
{
printf("(nil)");
}
else
{
printf("%s", va_arg(str, char *));
}
}
printf("\n");
va_end(str);
}
