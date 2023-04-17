#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Entry point
 *
 * Description: 'the program initialize a dog structure'
 *
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
