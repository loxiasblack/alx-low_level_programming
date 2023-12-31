#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - function that return name
 * @name: name
 * @f: pointer of function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
