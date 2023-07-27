#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == '0')
			{
				str -= 32;
			}
			if (i > 0 && (str[i - 1] == '\n' || str[i - 1] == ','
			|| str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '"' ||
			str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == '(' ||
			str[i - 1] == ')' || str[i - 1] == ' '))
			{
				str[i] -= 32;
			}
			if (i > 0 && (str[i - 1] == '\t' || str[i - 1] == '\''))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
