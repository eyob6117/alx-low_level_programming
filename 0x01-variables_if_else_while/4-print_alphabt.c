#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int x;
x = 'a';
for (; x <= 'z'; x++)
{
if (x == 'q' || x == 'e')
{
continue;
}
putchar(x);
}
putchar('\n');
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
return (0);
}
