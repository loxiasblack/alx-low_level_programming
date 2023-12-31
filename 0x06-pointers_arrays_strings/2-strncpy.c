#include "main.h"
/**
 * _strncpy - copy a n element from strc,
 * @dest: string
 * @src: string to copy
 * @n: number of element to be copied
 * Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
