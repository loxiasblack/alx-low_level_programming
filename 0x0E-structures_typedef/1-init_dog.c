#include "dog.h"
#include <stdlib.h>
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
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->age = age;
	d->name = name;
	d->owner = owner;
}
