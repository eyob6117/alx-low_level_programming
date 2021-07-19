#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - function that  prints a struc dog
 * @d: pointer variable
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return (1);
}
if (d->name == NULL || d->age == NULL || d->owner == NULL)
{
printf("nil");
}
printf("%s\n", d->name);
printf("%s\n", d->age);
printf("%s", d->owner);
}
