#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly linked list
 * @head: pointer to first node
 * @index: index of the node
 * Return: pointer to matching node, or 0 if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *node;
node = head;
while (index--)
{
if (node == NULL)
return (NULL);
node = node->next;
}
return (node);
}
