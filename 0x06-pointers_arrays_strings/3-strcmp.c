#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * @s1: character pointer s1
 * @s2: characteter pointer s2
 * Return: to int
 */
int _strcmp(char *s1, char *s2)
{
while (s1 && s2 && s1 == s2)
{
s1++;
s2++;
} 
return (s1 - s2);
} 
