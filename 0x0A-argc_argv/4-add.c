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
if (argv[i] > 0)
{
if (argc < 2)
{
printf("%d",0);
}
for (i = 0; i < argc; i++)
{
if (isdigit(atoi(argv[i]))
{
sum += argv[i];
}
else
{
printf("%s\n","Error");
return (1);
}
}
printf("%d", sum);
}
return (0);
}
}
