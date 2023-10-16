#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string to be appended to
 * @src : string to be appended to dest
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = src[n];
	return (dest);
}
