#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: A C code
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: Always 0 (Success) or 1 (Failure)
 */

int main(int argc, char *argv[])
{
	int num, co = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
        if (num < 0)
		{
			printf("0\n");
		}
		else if (num >= 2 && num < 5)
		{
			while (num > 0)
			{
				if (num >= 2)
				{
					num -= 2;
					co++;
				}
				else
				{
					num -= 1;
					co++;
				}

			}
		}
		else if (num >= 5 && num < 10)
		{
			while (num > 0)
			{
				if (num >= 5)
                {
                    num -= 5;
                    co++;
                }
				else if (num >= 2)
				{
					num -= 2;
                    co++;
				}
                else
                {
                    num -= 1;
                    co++;
                }
			}
		}
		else if (num >= 10 && num < 25)
		{
			while (num > 0)
            {
                if (num >= 10)
                {
                    num -= 10;
                    co++;
                }
                else if (num >= 5)
                {
                    num -= 5;
                    co++;
                }
                else if (num >= 2)
                {
                    num -= 2;
                    co++;
                }
                else
                {
                    num -= 1;
                    co++;
                }
            }
		}
		else if (num >= 25)
		{
			while (num > 0)
            {
                if (num >= 25)
                {
                    num -= 25;
                    co++;
                }
                else if (num >= 10)
                {
                    num -= 10;
                    co++;
                }
                else if (num >= 5)
                {
                    num -= 5;
                    co++;
                }
                else if (num >= 2)
                {
                    num -= 2;
                    co++;
                }
                else
                {
                    num -= 1;
                    co++;
                }
            }
		}
				
	}
	printf("%d\n", co);
	return (0);
}