#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: head
*
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
