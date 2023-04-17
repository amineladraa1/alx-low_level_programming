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
		printf("");
	printf("name: %s",name == NULL ? "(nil)" : d->name);
	printf("name: %f",age == NULL ? "(nil)" : d->age);
	printf("name: %s",owner == NULL ? "(nil)" : d->owner);
}
