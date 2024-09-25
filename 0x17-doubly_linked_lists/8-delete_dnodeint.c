#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at (index) of a dlistint_t list
 * @head: double pointer to head of the list
 * @index: the index to be deleted from
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = *head;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (; i < index && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);

	return (1);
}
