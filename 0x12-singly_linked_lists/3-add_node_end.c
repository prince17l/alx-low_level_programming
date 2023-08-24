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
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);

}
