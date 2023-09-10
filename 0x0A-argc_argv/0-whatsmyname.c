#include <stdio.h>
/**
 * main - Entry point
 * @argv:parameter to be executed
 * @argc:parameter to be executed
 * Description:A c code prints name of file
 * Return:Always 0 on success
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

