#include <stdlib.h>
#include "dog.h"
/**
*  init_dog - this is a main function.
*  @d: struct
*  @name: string variable
*  @age: int variable
*  @owner: string variable
*  Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
