#include "lists.h"

/**
 * sum_listint - sums all of the data (n) of listint_t
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
