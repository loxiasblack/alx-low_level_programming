#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	char *current_accept;

	while (*s)
	{
		current_accept = accept;

		while (*current_accept)
		{
			if (*current_accept == *s)
			{
				sum += 1;
				break;
			}
			current_accept++;
		}
		if (*current_accept == '\0')
		{
			break;
		}
		s++;
	}
	return (sum);
}