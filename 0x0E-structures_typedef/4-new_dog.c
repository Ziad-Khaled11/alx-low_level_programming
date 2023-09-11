#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
	dog_t *new = NULL;

	new->name = name;
	new->age = age;
	new->owner = owner;
	if (new == NULL)
	return (NULL);
	return (new);
}
