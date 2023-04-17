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
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("name: %s\n", d->name);
	printf("name: %f\n", d->age);
	printf("name: %s\n", d->owner);
}
