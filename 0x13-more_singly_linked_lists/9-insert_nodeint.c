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
	listint_t *prev_node, *tmp, *next_node;

	prev_node = malloc(sizeof(listint_t));
	if (prev_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		next_node = *head;
		*head = prev_node;
		prev_node->n = n;
		prev_node->next = next_node;
		return (prev_node);
	}
	tmp = *head;
	while (--idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	next_node = tmp->next;
	tmp->next = prev_node;
	prev_node->n = n;
	prev_node->next = next_node;
	return (prev_node);
}
