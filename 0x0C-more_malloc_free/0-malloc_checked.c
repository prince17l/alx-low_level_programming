#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - it is a main function
 * @b: variable with type unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *word;

	word = malloc(b);
	if (word == NULL)
		exit(98);
}
