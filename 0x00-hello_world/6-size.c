#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char charType;
int intType;
float floatType;
long int longType;
long long longlongType;
fprintf(stderr, "Size of char: %zu byte(s)\n", sizeof(charType));
fprintf(stderr, "Size of int: %zu byte(s)\n", sizeof(intType));
fprintf(stderr, "Size of long int: %zu byte(s)\n", sizeof(longType));
fprintf(stderr, "Size of long long: %zu byte(s)\n", sizeof(longlongType));
fprintf(stderr, "Size of float: %zu byte(s)\n", sizeof(floatType));
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
return (0);
}
