#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function prints dog struct
 *
 * @d: parameter that taken to be checked
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
