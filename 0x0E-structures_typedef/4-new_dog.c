#include <stdlib.h>
#include "dog.h"
#include <string.h>
char *_strdup(char *str);
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
	my_dog->name = _strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = _strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	return (my_dog);
}
/**
 * _strdup - function that duplicate string
 * @str: string to duplicate
 * Return: s success
*/
char *_strdup(char *str)
{
	char *s;
	int len;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
