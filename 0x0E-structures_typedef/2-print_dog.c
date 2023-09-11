#include "dog.h"
#include <stdio.h>
/**
 * print_dog - will print the struct
 * @d: struct pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
