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
	printf("name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("name: %f\n", d->age);
	printf("name: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
