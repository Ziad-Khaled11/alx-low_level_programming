#include "main.h"

/**
 * _islower - function tells weather a lower case or not
 *
 *@c: is int taken from user to be checked
 *
 * Return: 1 if lower case , 0 if upper case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
