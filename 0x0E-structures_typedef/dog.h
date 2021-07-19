#ifndef DOG_H
#define DOG_H

/**
 * struct dog - declaration of struct
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: declaring struct and intialize with inside scope
 */
typedef struct dog
{
char *name;
float age;
char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
