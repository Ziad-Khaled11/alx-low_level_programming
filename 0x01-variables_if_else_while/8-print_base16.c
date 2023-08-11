#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C code prints hexadecimal nums
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char bat;

	bat = 'a';

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	while (bat <= 'f')
	{
		putchar(bat);
		bat++;
	}
	putchar('\n');

	return (0);
}
