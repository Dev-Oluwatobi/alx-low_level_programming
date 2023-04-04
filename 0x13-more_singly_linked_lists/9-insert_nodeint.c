#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - this function insert new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int kdx, int n)
{
	unsigned int k;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (kdx != 0)
	{
		temp = *head;
		for (k = 0; k < kdx - 1 && temp != NULL; k++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (kdx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
