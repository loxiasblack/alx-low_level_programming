#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that count the
 * number of node in the singly linked
 * list
 * @h: pointer to the header
 * Return: the count
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
