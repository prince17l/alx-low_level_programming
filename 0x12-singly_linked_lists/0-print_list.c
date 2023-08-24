#include <stdio.h>
#include "lists.h"
/**
 * print_list - will print the ech element of the list
 * @h: element of the list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *temp = (list_t *)h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)");
		}
		printf("[%u] %s", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
