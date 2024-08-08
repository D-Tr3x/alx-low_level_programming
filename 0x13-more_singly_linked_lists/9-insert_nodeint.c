#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list
 * @idx: the index of the list where the new node should be added.
 * @n: number at the node to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = *head;

	for (i = 0; temp != NULL && i < idx; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = temp->next;
	temp->next = node;

	return (node);
}
