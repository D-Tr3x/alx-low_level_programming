#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of listint_t
 * @head: double pointer to head of the list
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
