#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - print linked list and stop
 * to avoid the infinite loop
 * @head: first node of linked list
 * Return: the count or exit 98 if it fail
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	while (fast && fast->next)
	{
		count++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)fast, fast->n);
				slow = slow->next;
				fast = fast->next;
			}
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}
	}
	while (slow)
	{
		count++;
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
	}
	return (count);
}
