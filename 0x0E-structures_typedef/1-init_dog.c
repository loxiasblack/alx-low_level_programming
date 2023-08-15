#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function that initialize a varibale
 * of type struct dog
 * @name: name of dog
 * @d: pointer to struct dog
 * @age: age of dog
 * @owner: name of owner owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d ==  NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
