#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to first node
 * @idx: index of the list where the new node should be added
 * @n: data of the inserted node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *prev_node, *next_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
if (idx == 0)
{
next_node = *h;
*h = new_node;
new_node->n = n;
new_node->next = next_node;
new_node->prev = NULL;
return (new_node);
}
prev_node = *h;
while (--idx)
{
if (prev_node == NULL)
return (NULL);
prev_node = prev_node->next;
}
next_node = prev_node->next;
prev_node->next = new_node;
new_node->n = n;
new_node->next = next_node;
new_node->prev = prev_node;
if (next_node != NULL)
next_node->prev = new_node;

return (new_node);
}
