#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: string to be filled
 * @n: first bytes to be filled
 * @b: constant to be filled with
 * Return: pointer to the result s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
