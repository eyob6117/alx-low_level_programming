#include <stdio.h>
/**
 * main - Print all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; i <=9; i++)
{
putchar(i + '0');
putchar(j + '0');

if (!(i == 9 && j == 9))
{
    
putchar(',');
putchar(' '); 
 
}
}
}
putchar('\n');
/**
 * main - Print numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */
return (0);
}
