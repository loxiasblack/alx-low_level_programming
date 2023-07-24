#include "main.h"
/**
 * rev_string -  reverse string,
 * @s: the string
 */
void rev_string(char *s)
{
	int n = strlen(s);
	char *ss, temp;

	ss = s + n - 1;
	while (ss >= s)
	{
		temp = *s;
		*s = *ss;
		*ss = temp;
		s++;
		ss--;
	}
}
