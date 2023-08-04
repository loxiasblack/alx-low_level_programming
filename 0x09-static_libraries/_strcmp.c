#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (result = 0);
		}
		i++;
	}
	if (s1[i] != s2[i])
	{
		result = s1[i] - s2[i];
	}
	return (result);
}