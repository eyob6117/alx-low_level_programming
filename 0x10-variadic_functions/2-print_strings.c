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
char *store;
va_start(str, n);
for (i = 0; i < n; i++)
{
store = va_arg(str, char *);
if (store  == NULL)
{
printf("(nil)");
}
else
{
printf("%s", store);
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(str);
}
