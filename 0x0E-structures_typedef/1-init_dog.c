#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - function that initialize variable of type
 * struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (d->name && d->age)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
	else
	{
		free(d->name);
		free(d->owner);
	}
}
