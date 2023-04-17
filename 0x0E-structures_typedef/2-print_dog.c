#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Entry point
 *
 * Description: 'the program print a struct'
 *
 * @d: struct pointer
 *
 * Return: void (Success)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("name: %s",name == NULL ? "(nil)" : d->name);
	printf("name: %f",d->age);
	printf("name: %s",owner == NULL ? "(nil)" : d->owner);
}
