#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - is the main function
 * @b: is unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
