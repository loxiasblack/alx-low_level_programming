#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly
 * linked list
 * @h: pointer to header
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
