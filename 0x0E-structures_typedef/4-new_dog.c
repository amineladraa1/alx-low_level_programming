#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest; char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest + 1) = '\0';
	return (dest);
}

/**
 * new_dog - Entry point
 *
 * Description: 'the program's description'
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a new dog (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int len_name;
	int len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	doggy = malloc(sizeof(dog_t);

	if (dog == NULL)
	{
		return (NULL);
	}

	doggy->name = malloc(sizeof(char) * len_name + 1;

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len_owner + 1));

	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}
	_strcpy(doggy->name, name);
	_strcpy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);
}
