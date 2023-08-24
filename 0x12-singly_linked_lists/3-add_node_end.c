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
	unsigned int count;

	new = malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	while (str[count])
		count++;
	while (last != NULL)
		last = last->next;
	last->next = new;
	new->str = strdup(str);
	new->len = count;
	new->next = NULL;
	return (new);
}
