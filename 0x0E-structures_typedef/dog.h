#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - my new struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: there is no long description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
