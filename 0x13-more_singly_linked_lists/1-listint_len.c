#include "lists.h"

/**
 * listint_len - returns total number of elements in list
 * @h: pointer to list listint_t
 *
 * Return: number of elements in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
