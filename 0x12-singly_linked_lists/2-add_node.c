#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that add a node to
 * the linked list
 * @head: the adresse the first node in th
 * single list
 * @str: the string to add the singly linked
 * list
 * Return: the head of linked list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	if (*head == NULL)
		*head = node;
	else
		*head = node;
	return (node);
}
