#include "main.h"
/**
 * _strcpy - copy a strc,
 * @dest: string
 * @src: string
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
