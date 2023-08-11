#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C code prints reverse alphapet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
