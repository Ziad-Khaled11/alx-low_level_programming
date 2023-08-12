#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C code prints combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	num1 = 48;
	while (num1 <= 55)
	{
		num2 = 49;
		while (num2 <= 56)
		{
			if (num1 < num2)
			{
				num3 = 50;
				while (num3 <= 57)
				{
					if (num2 < num3)
					{
						putchar(num1);
						putchar(num2);
						putchar(num3);
					if (num1 + num2 + num3  != 168)
					{
						putchar(',');
						putchar(' ');
					}
					}
					num3++;
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
