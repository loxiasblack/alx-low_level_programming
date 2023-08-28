#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - function that add node at
 * the beginning of of linked lists
 * @head: the head node
 * @n: integer to add
 * Return: new_node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	*head = new_node;
	return (new_node);
}
