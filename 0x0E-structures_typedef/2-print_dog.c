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
	if (d->age == NULL)
	{
		printf("age: (nill)");
	}
	else
	{
		printf("age: %f", d->age);
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	else
	{
		printf("owner: %s", d->owner);
	}
}
