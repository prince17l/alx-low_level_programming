#include <stdlib.h>
#include "lists.h"
/**
 * free_list - will print the ech element of the list
 * @head: the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
