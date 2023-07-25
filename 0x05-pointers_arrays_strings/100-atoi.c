#include "main.h"
/**
 * _atoi - return a string to an integer,
 * @s: the string
 * Return: the integer
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -sign;
			i++;
		}
		else
		{
			sign = sign;
			i++;
		}
	}
	for (; s[i] != '\0'; i++)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res * sign);
}
