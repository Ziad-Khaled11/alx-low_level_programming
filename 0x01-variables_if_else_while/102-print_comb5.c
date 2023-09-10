#include<stdio.h>
/**
* main - Entry Point
* Description: A C code whichprints nums combination
* Return: Always 0 (succes)
*/
int main(void)
{
int firstd = 0, seconD;

while (firstd <= 99)
{
seconD = firstd;
while (seconD <= 99)
{
if (seconD != firstd)
{
putchar ((firstd / 10) + 48);
putchar ((firstd % 10) + 48);
putchar(' ');
putchar ((seconD / 10) + 48);
putchar ((seconD % 10) + 48);
if (firstd != 98 || seconD != 99)
{
putchar(',');
putchar(' ');
}
}
seconD++;
}
firstd++;
}
putchar('\n');
return (0);
}
