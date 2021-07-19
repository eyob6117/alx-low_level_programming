#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dao
 * @name: character pointer name
 * @age: float variable
 * @owner: character pointer variable
 * Return: d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
d -> name = name;
d -> age = age;
d -> owner = owner;
return (d);
}
