#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node - will add new node at the beginning.
 * @head: pointer to list
 * @str: constant string
 * Return: pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	new->len = len;
	*head = new;
	return (new);
}
