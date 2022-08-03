#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize a variable of type struct dog.
* @d: pointer to the structure.
* @name: pointer to the dog's name.
* @age: pointer to the dog's age.
* @owner: pointer to the dog's owner.
* Return: Nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
