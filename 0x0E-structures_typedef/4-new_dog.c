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
	int i = 0, j = 0;

	mydog = malloc(sizeof(struct dog));
	if (mydog == NULL)
		return (NULL);
	while (name[i] != '\0')
	{
		mydog->name[i] = name[i];
		i++;
	}
	mydog->name[i] = '\0';
	while (owner[j] != '\0')
	{	
		mydog->owner[j] = owner[j];
		j++;
	}
	mydog->owner[j] = owner[j];
	mydog->age = age;
	return (mydog);
}
