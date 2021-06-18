#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
# output function
#
# parameterdescs, a hash.
#  function => "function name"
#  parameterlist => @list of parameters
#  parameterdescs => %parameter descriptions
#  sectionlist => @list of sections
#  sections => %section descriptions
if (n > 0)
{
printf("%d is positive\n", n);
}
# output function
#
# parameterdescs, a hash.
#  function => "function name"
#  parameterlist => @list of parameters
#  parameterdescs => %parameter descriptions
#  sectionlist => @list of sections
#  sections => %section descriptions
if (n == 0)
{
printf("%d is zero\n", n);
# output function
#
# parameterdescs, a hash.
#  function => "function name"
#  parameterlist => @list of parameters
#  parameterdescs => %parameter descriptions
#  sectionlist => @list of sections
#  sections => %section descriptions
if (n < 0)
{
printf("%d is negative\n", n);
}
/**
 * @c: This is longer description of C
 *
 * Description: You can use paragraphs to describe arguments
 * using this method.
 */
return (0);
}
