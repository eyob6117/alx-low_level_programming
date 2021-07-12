#include <stdio.h>
#include "holberton.h"
/**
 * main - program that multiples two numbers
 * @argc: integer variable
 * @argv: variable array pointer
 *
 * Return: Always(0)
 */

int main(int argc, char *argv[])
{
int i;
int mul;
if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
for (i = 0; i < argc; i++)
{
mul = atoi(argv[i]) * atoi(argv[i + 1];
}
printf("%d\n", mul);
}
}
return (0);
}
