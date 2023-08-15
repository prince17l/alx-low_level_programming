#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*  print_dog - this is a main function.
*  @d: struct
*  Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("name: %s", d->name);
	printf("age: %f", d->age);
	printf("owner: %s", d->owner);
}
