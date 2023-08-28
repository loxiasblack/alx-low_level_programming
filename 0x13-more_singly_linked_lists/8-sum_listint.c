#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that sum the data
 * inside the node
 * @head: head node
 * Return: the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
