#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - will create an new dog
 * @name: is the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(struct dog));
	if (mydog == NULL)
		return (NULL);
	mydog->name = name;
	mydog->owner = owner;
	mydog->age = age;
	return (mydog);
}
