#include <stdlib.h>
#include "dog.h"
#include <string.h>
char *_strdup(char *str);
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
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
/**
 * _strdup - duplicate a string in another place in memory
 * @str: str to duplicate
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
