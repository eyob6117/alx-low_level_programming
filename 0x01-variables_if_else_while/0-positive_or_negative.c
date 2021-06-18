#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/**
 * print postive value
 */
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
/**
 *print zero
 */
if (n == 0)
{
printf("%d is zero\n", n);
}
/**
 *print negative value"
 */
if (n < 0)
{
printf("%d is negative\n", n);
}
/**
 * return value
 */
return (0);
}
