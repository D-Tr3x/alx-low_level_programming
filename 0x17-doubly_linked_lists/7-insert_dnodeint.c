#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head of dlistint_t list
 * @idx: index of the list where the new node should be added
 * @n: the integer to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = temp->next;
	node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = node;
	temp->next = node;

	return (node);
}
