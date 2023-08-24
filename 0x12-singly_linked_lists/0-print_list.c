#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all elements in a list
 * @h: pointer
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
