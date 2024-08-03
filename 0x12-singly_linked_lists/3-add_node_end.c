#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: double pointer to list_t list
 * @str: string to be duplicated and added to list
 *
 * Return: the address of new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
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
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (node);
}
