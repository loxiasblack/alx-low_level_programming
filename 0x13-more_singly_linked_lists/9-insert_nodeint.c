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
	listint_t *node;
	listint_t *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			count++;
			tmp = tmp->next;
			if (count == (idx - 1))
			{
				node->next = tmp->next;
				tmp->next = node;
			}
		}
	}
	return (node);
}
