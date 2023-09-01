#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
    listint_t *fast_node = *h;
    listint_t *slow_node = *h;
    listint_t *tmp;
    size_t count = 0;

    while (fast_node && fast_node->next)
    {
        count++;
        if (fast_node == slow_node)
        {
            slow_node = *h;
            while (slow_node != fast_node)
            {
                count++;
                tmp = *h;
                (*h) = (*h)->next;
                free(tmp);
                slow_node = slow_node->next;
                fast_node = fast_node->next;
            }
            *h = NULL;
            return (count);
        }
        fast_node = fast_node->next->next;
        slow_node = slow_node->next;
        tmp = *h;
        *h = (*h)->next;
        free(tmp);
    }
    
    while (slow_node)
    {
        count++;
        tmp = *h;
        *h = (*h)->next;
        free(tmp);
        slow_node = slow_node->next;
    }
    *h = NULL;
    return (count);
}