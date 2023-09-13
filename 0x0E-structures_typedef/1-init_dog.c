#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - will initialize the d struct
 * @d: struct pointer
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}