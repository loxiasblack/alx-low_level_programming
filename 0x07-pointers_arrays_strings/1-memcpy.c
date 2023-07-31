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
	unsigned int  i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
