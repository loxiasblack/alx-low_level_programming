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
	listint_t *temp, *prev_node, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (index--)
	{
		if (temp == NULL)
			return (-1);
		prev_node = temp;
		temp = temp->next;
	}
	next_node = temp->next;
	prev_node->next = next_node;
	free(temp);
	return (1);
}
