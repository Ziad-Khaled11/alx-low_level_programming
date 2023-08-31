#include "main.h"

/**
 * *move_past_star - function prints
 *
 * @s2: parameter that taken to be checked
 *
 * Return: s2
 */

char *move_past_star(char *s2)
{
if (*s2 == '*')
return (move_past_star(s2 + 1));
else
return (s2);
}

/**
 * inception - function prints
 *
 * @s1: parameter that taken to be checked
 * @s2: parameter that taken to be checked
 *
 * Return: ret
 */

int inception(char *s1, char *s2)
{
int ret = 0;
if (*s1 == 0)
return (0);
if (*s1 == *s2)
ret += wildcmp(s1 + 1, s2 + 1);
ret += inception(s1 + 1, s2);
return (ret);
}

/**
 * wildcmp - function prints if two strings are equal
 *
 * @s1: parameter that taken to be checked
 * @s2: parameter that taken to be checked
 *
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
int ret = 0;
if (!*s1 && *s2 == '*' && !*move_past_star(s2))
return (1);
if (*s1 == *s2)
{
if (!*s1)
return (1);
return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
}
if (!*s1 || !s2)
return (0);
if (*s2 == '*')
{
s2 = move_past_star(s2);
if (!*s2)
return (1);
if (*s1 == *s2)
ret += wildcmp(s1 + 1, s2 + 1);
ret += inception(s1, s2);
return (!!ret);
}
return (0);
}
