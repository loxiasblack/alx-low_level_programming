#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	char *current_needle;
	char *current_haystack;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		current_needle = needle;
		current_haystack = haystack;

		while (*current_needle && *current_haystack &&
		*current_haystack == *current_needle)
		{
			current_haystack++;
			current_needle++;
		}
		if (*current_needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}