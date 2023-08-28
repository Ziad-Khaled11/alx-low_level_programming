#include "main.h"
#include <stdbool.h>

/**
 * *_strstr - function prints
 *
 * @haystack: parameter that taken to be checked
 * @needle: parameter that taken to be checked
 *
 * Return: first occurance of sub string
 */

char *_strstr(char *haystack, char *needle)
{
int index;

if (*needle == 0)
return (haystack);
while (*haystack)
{
index = 0;
if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
} while (haystack[index] == needle[index]);
}
haystack++;
}
return ('\0');
}
