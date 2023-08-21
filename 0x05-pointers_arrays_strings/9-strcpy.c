#include "main.h"

/**
 * _strcpy - function prints
 *
 * @dest: parameter that taken to be checked
 * @src: parameter that taken to be checked
 */

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
