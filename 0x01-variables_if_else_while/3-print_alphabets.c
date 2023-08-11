#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C code prints the alphapet order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char upper, lower;

	upper = 'A';
	lower = 'a';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
