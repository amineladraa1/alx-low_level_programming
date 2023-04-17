#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog type definition
 * @name: First member
 * @age: Second member
 * @owner: third
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
