#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always sucess(0)
 */
int main(void)
{
int a = 1;
int b = 1;
int res;
int i;
for (i = 0; i < 50; i++)
{
putchar(a + '0');
res = a + b;
a = b;
b = res;
}
putchar(',');
putchar('\n');
return (0);
}
