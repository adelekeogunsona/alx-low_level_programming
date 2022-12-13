#include "lists.h"

/**
 * add_dnodeint_end - function to add node to the end of a dlistint_t list
 * @head: input pointer to head of dlistint_t list
 * @n: input data to insert in new node
 *
 * Return: pointer to newly added element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = &new_node;
		return (new_node);
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
