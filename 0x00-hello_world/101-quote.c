#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: A C code prints a string without using printf and puts
 *
 * Return: 1 (unsuccess)
 */
int main(void)
{
char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, arr, 59);
return (1);
}
