#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - This func free a dlistint_t list
 * @head: pointer to the start of the linked list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
