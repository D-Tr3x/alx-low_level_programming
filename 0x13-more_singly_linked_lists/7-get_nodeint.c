#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0;
 *
 * Return: pointer to nth node, or NULL if node not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}

	return (head);
}
