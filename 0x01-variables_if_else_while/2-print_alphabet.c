#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mango;

	mango = 'a';
	while (mango <= 'z')
	{
		putchar(mango);
		mango++;
	}
	putchar('\n');

	return (0);
}
