#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that free linked list
 * @head: firat node in the linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
