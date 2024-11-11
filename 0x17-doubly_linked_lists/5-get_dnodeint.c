#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of dlistint_t list
 * @index: index of the node, starting from 0;
 *
 * Return: pointer to the nth node or NULL if te node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	return (head);
}
