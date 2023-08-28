#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that insert
 * node at the exact index
 * @head: adresse of the head node
 * @idx: the index where the index should be insert
 * @n: the data of the node
 * Return: linked list
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);	
		return (NULL);
	}
	if (idx == 0)
	{
		node->n = n;
		node->next = *head;
		if (*head == NULL)
			*head = node;
		*head = node;
		return (node);
	}
	node->n = n;
	node->next = NULL;
	tmp = *head;
	while (tmp->next != NULL)
	{
		count++;
		if (count == idx)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);	
		}
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
	{
		free(node);
		return (NULL);
	}
	tmp->next = node;
	return (node);	
}
