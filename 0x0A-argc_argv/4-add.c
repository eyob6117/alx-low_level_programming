#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: integer variable
 * @argv: variaple pointer 
 *
 * Return: Always(0)
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc < 1)
{
return (0);
}
else
{   
for (i = 0; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("%s\n", "Error");
return (1);
}
else
{
sum += argv[i];
}
}  
printf("%d", sum);
}
return (0);
}
