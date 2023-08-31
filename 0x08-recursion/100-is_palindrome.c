#include "main.h"

/**
 * last_index - function checks if string is palindrome
 *
 * @s: parameter that taken to be checked
 *
 * Return: n
 */

int last_index(char *s)
{
int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;
return (n);
}
/**
 * is_palindrome - function checks if string is palindrome
 *
 * @s: parameter that taken to be checked
 *
 * Return: 1 if palindrome , 0 if not
 */

int is_palindrome(char *s)
{
int end = last_index(s);
return (check(s, 0, end - 1, end % 2));
}


/**
 * check - function prints
 *
 * @s: parameter that taken to be checked
 * @start: parameter that taken to be checked
 * @end: parameter that taken to be checked
 * @mod: parameter that taken to be checked
 *
 * Return: 1 or 0
 */

int check(char *s, int start, int end, int mod)
{
if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
return (1);
else if (s[start] != s[end])
return (0);
else
return (check(s, start + 1, end - 1, mod));
}
