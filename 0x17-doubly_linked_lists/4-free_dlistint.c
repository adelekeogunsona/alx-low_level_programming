#include "lists.h"

/**
 * free_dlistint - function to free all elements of a dlistint list
 * @head: input head of dlistint_t list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
