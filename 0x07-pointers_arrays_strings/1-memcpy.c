#include "main.h"
/**
 * _memcpy - function that copy from a string to another string
 * @dest: the buffer
 * @src: the constant string
 * @n: integer
 * Return: dest success
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	while (!*dest)
	{
		if (j < n)
		{
			*dest = *src;
		}
		j++;
		src++;
		dest++;
	}
	return (dest);
}
