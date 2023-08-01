#include "main.h"
/**
 * set_string - set the value of a pointer to char
 * @s: the pointer to a pointer
 * @to: the pointer
 * Return: nothing
*/
void set_string(char **s, char *to)
{
	*s = to;
}
