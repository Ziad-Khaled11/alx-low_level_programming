#include "main.h"

/**
 * *_strcpy - copies string
 *
 * @dest: parameter that taken to be checked
 * @src: parameter that taken to be checked
 *
 * Return: copied string
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
