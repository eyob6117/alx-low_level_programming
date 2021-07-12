#include <stdio.h>
/**
 * main - program that prints its name
 *
 * Return: Always(0) sucess
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s",argv[i]);
}
return (0);
}
