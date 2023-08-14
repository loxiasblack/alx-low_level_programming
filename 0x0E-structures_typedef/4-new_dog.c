#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - function that creat a new strcut dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: new struc dog created
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	return (my_dog);
}
