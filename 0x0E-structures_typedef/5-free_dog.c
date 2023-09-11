#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees a struct
 *
 * @d: parameter that taken to be checked
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d);
	}
}
