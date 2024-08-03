#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: double pointer to list_t list
 * @str: string to be duplicated and added to list
 *
 * Return: address of new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *ptr;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	node->str = ptr;
	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}
