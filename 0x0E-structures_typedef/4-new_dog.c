#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - function counts string length
 *
 * @str: parameter that taken to be checked
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	i++;
	return (i);
}

/**
 * *_strcpy - function copies two strings
 *
 * @dest: parameter that taken to be checked
 * @src: parameter that taken to be checked
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - function creates a dog structure
 *
 * @name: parameter that taken to be checked
 * @age: parameter that taken to be checked
 * @owner: parameter that taken to be checked
 *
 * Return: dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name)) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
	free(dog->name);
	free(dog);
	return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);
	return (dog);
}
