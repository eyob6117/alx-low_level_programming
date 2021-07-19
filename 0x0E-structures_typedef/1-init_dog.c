#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dao
 * @d: struct name
 * @name: character pointer name
 * @age: float variable
 * @owner: character pointer variable
 * Return: d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
return;
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
