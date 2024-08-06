#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the list
 * @h: pointer to the list listint_t
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
