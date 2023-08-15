#include <stdlib.h>
#include "dog.h"
/**
*  free_dog - this is a main function.
*  @d: struct
*  Return: void
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
