#include "main.h"
/**
 * _strstr - function that return first occurence
 * @haystack: first parametre
 * @needle: the substring searched
 * Return: haystack or null
*/
char *_strstr(char *haystack, char *needle)
{
	char *current_needle;

	while (*haystack)
	{
		current_needle = needle;

		while (*current_needle)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			current_needle++;
		}
		haystack++;
	}
	return (NULL);
}
