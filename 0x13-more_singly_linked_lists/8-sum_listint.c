#include "lists.h"

/**
 * sum_listint - program returns the sum of all the data (n) of linked list
 * @head: head of a list
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
