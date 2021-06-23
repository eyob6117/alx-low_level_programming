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
printf("%d",a);
res = a + b;
a = b;
b = res;
}
printf(",");
printf("\n");
return (0);
}
