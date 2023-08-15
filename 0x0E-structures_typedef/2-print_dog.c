#include <stdio.h>
#include "dog.h"
/**
*  print_dog - this is a main function.
*  @d: struct
*  Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("name: (nil)");
	}
	else
	{
		printf("name: %s", d->name);
	}
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("age: %f", d->age);
	printf("owner: %s", d->owner);
}
