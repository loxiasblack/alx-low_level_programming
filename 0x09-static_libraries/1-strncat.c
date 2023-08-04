#include "main.h"
/**
 * _strncat - print a string,
 * @dest: string 1
 * @src: string 2
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[j];
		}
		j++;
		i++;
	}
	return (dest);
}
