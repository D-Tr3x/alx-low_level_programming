#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of listint_t list
 * @head: double pointer to listint_t
 * @n: number to be added to list
 *
 * Return: address of new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
