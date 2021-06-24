#include "holberton.h"
#include <stdio.h>
/**
 * void print numbers
 * 
 * Return: nothing
 */
void print_numbers(void)
{
int i = 0;
while(i < 10)  
{
putchar(i + '0');
}
putchar('\n');
}
