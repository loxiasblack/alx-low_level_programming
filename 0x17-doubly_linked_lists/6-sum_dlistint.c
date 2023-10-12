#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: pointer to first node
 * Return: sum of data, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *node;
if (head == NULL)
return (0);
node = head;
while (node)
{
sum += node->n;
node = node->next;
}
return (sum);
}
