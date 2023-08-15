#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creat a new variable of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: d succes;
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = owner;
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
