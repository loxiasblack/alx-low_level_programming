#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that return the
 * len of linked list
 * @h: the head of linked list
 * Return: the len of linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
