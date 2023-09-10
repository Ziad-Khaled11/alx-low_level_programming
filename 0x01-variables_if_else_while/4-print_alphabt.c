#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C code prints letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mango;

	mango = 'a';
	while (mango <= 'z')
	{
		if (mango != 'q' && mango != 'e')
		{
			putchar(mango);
		}
		mango++;
	}
	putchar('\n');

	return (0);
}
