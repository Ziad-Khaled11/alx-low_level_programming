#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function intialize the dog struct
 *
 * @d: parameter that taken to be checked
 * @age: parameter that taken to be checked
 * @owner: parameter that taken to be checked
 * @name: parameter that taken to be checked
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

