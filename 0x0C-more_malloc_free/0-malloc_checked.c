#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - it is a main function
 * @b: variable with type unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *word;

	word = malloc(b);
	if (word == NULL)
	{
		free(word);
		return (98);
	}
}