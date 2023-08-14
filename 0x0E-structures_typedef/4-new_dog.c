#include <stdlib.h>
#include "dog.h"
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
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
