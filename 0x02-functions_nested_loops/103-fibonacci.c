#include <stdio.h>
/**
 * main - print fibonaci 
 *
 * Return: Always(0)
 */
int main(void)
{

int count;
unsigned long fib1 = 0, fib2 = 1, sum;

for (count = 0; count < 4000000; count++)
{

if (count % 2 == 0)
{
sum = fib1 + fib2;
printf("%lu", sum);

fib1 = fib2;
fib2 = sum;
}
printf(" ");
}
return (0);
}
