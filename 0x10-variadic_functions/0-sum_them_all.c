#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_thme_all - function that returns the sum of all its parameters
 * @n: first parameter
 *
 * Return: to the function
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;
va_list ap;
va_start(ap, n);
if (n != 0)
{
for (i = 0; i < n; i++)
{
sum += va_arg (ap, int);
}
va_end(ap);
return (sum);
}
return (0);
}
