#include "holberton.h"
/**
 * *string_toupper - function that changes all lowercase letters to upper
 * @*: character type
 * Return: character
 */
char *string_toupper(char *str)
{
int i;
while (str[i])
{
if (str[i] >= 97 && stri[i] <= 122)
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
