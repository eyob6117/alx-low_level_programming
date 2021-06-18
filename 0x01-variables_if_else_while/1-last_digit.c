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
/* your code goes there */
int res;
res=n%10;
if (res > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n,res); 
}
if (res == 0)
{
print("Last digit of %d is %d and is %d\n", n,res,res);
}
if (res < 6)
{
print("Last digit of %d is %d and is less than 6 and not 0\n", n,res);
}
/**
 * discription
 */	
return (0);
}
