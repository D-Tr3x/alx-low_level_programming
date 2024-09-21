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

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	if (h == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL && i == idx - 1)
		return (add_dnodeint_end(h, n));

	if (temp->next == NULL || temp == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = temp->next;
	node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = node;

	temp->next = node;

	return (node);
}
