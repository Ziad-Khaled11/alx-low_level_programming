#include "main.h"

/**
 * get_endianness - checks if  is little or big
 * Return: 0 , 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

