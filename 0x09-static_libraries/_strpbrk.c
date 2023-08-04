#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	char *current_accept;

	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		current_accept = accept;

		while (*current_accept)
		{
			if (*current_accept == *s)
			{
				return (s);
			}
			current_accept++;
		}
		s++;
	}
	return (NULL);
}