#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
    listint_t *fast_node = *h;
    listint_t *slow_node = *h;
    listint_t *tmp;
    size_t count = 0;
    
    if (*h == NULL)
    {
        return (count);
    }
    
    while (*h)
    {
        count++;
        slow_node = slow_node->next;
        fast_node = fast_node->next->next;
        if (slow_node == fast_node)
        {
            slow_node = *h;
            while (slow_node != fast_node)
            {
                count++;
                tmp = *h;
                *h = (*h)->next;
                fast_node = fast_node->next;
                slow_node = slow_node->next;
                free(tmp);
            }
            *h = NULL;
            return (count);
        }
        tmp = *h;
        *h = (*h)->next;
        free(tmp);
    }
    *h = NULL;
    return (count);
}