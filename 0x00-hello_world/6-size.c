#include<stdio.h>
/*
 * This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 */
int main() {

char charType;
int intType;
float floatType;
long int longType;
long long longlongType;


printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longType));
printf("Size of long long: %zu byte\n", sizeof(longlongype));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}
