#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that return
 * the number of node inside the
 * linked list
 * @h: the node of linked list
 * Return: the len (number of nodes);
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
