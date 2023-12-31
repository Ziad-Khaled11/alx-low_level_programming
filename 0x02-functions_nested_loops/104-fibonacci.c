#include <stdio.h>

/**
 *  numLength - function prints
 *
 * @num: parameter that taken to be checked
 *
 * Return: length
 */

int numLength(int num)
{
int length = 0;
if (!num)
return (1);
while (num)
{
num = num / 10;
length += 1;
}
return (length);
}


/**
 * main - Entry point
 *
 * Description: A C code prints first 50 fibonacci
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int count, initial0s;
unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, flo = 0, f20 = 0, sumo = 0;
for (count = 1; count <= 98; count++)
{
if (flo > 0)
printf("%lu", flo);
initial0s = numLength(mx) - 1 - numLength(f1);
while (flo > 0 && initial0s > 0)
{
printf("%d", 0);
initial0s--;
}
printf("%lu", f1);
sum = (f1 + f2) % mx;
sumo = flo + f20 + (f1 + f2) / mx;
f1 = f2;
flo = f20;
f2 = sum;
f20 = sumo;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
