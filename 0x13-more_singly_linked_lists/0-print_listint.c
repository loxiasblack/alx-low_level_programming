#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print the linked list
 * @h: the head of the linked lists
 * Return: number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
