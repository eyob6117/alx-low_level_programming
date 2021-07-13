#include "holberton.h"
0;276;0c/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * @str: pointer variable
 * Return: char
 */
char *_strdup(char *str)
{
char array[];
unsigned int i;
if (str == NULL)
return(NULL);   
for (i = 0; str[i] < '\0'; i++)
array[i] = str[i];
return (array);
}
