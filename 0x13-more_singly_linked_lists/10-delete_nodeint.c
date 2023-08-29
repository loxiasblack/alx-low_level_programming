#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function delete node
 * @head: the adresse of the head node
 * @index: index to delete on
 * Return: 1 or -1 if it fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *next_node, *prev_node;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (index--)
	{
		if (tmp == NULL)
			return (-1);
		prev_node = tmp;
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
		return (-1);
	next_node = tmp->next;
	prev_node->next = next_node->next;
	free(tmp);
	return (1);
}
