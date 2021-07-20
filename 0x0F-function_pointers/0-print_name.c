#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: pointer varible to char
 * @f: variable pointer
 */
void print_name(char *name, void (*f)(char *))
{
f = &print_name_as_is;
f = &print_name_uppercase;
name = f;
printf("%s", name);
}
