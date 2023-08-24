#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end - will add new node at the beginning.
 * @head: pointer to list
 * @str: constant string
 * Return: pointer to head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	unsigned int count = 0;

	while (str[count])
		count++;

	new = malloc(sizeof(list_t));
	if (new != NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;

	return (new);

}
