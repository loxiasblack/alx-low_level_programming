#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that return the node
 * in the indexe
 * @head: the head of the list
 * @index: the index of the list
 * Return: the node success;
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	while (head)
	{
		if (i == index)
		{
			node = head;
			return (node);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
