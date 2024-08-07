#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: double pointer to the list
 * @n: number to be added
 *
 * Return: address of the new element, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
