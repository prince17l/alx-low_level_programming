#include <stdio.h>
#include "lists.h"
/**
 * list_len - will return the elements of the list.
 * @h: pointer to structur
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
