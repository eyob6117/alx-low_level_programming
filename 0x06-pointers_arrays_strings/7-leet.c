#include "holberton.h"
/**
 * *leet - function that encodes a string into 1337
 * @str: variable pointer
 * Return: encoding string
 */
char *leet(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == 'a' && str[i] == 'A' ||
str[i] == 'e' && str[i] == 'E' ||
str[i] == 'o' && str[i] == 'O' ||
str[i] == 't' && str[i] == 'T' ||
str[i] == 'l' && str[i] == 'L' ||                                    
)
{
'a' && 'A' = '4';
'e' && 'E' = '3';
'o' && 'O' = '0'; 
't' && 'T' = '7';
'l' && 'L' = '1';
}
}
return (0);
}
