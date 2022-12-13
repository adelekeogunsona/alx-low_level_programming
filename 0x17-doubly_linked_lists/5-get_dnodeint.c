#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint list
 * @head: input head of dlistint_t list
 * @index: input index or n to return node at, starting from 0
 *
 * Return: the node at index or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
