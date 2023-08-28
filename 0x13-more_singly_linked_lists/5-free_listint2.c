#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that free list
 * @head: adresse of head
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
