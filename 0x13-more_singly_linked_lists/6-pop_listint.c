#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - remove the head node
 * @head: the head node
 * Return: n(of the node);
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	if (*head == NULL)
		return (0);
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
