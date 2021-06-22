#include "holberton.h"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char ch  = 'a';
while(ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
int main(void)
{
  print_alphabet();
  return (0);
}
