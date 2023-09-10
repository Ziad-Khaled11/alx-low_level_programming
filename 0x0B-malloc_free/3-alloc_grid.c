#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - function creates 2d array
 *
 * @width: parameter that taken to be checked
 * @height: parameter that taken to be checked
 * Return: 2d array or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	arr = malloc((height) * sizeof(*arr));
	if (width <= 0 || height <= 0 || arr == NULL)
	return ('\0');
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc((width) * sizeof(**arr));
		if (arr[i] == NULL)
		{
			while (i--)
			free(arr[i]);
			free(arr);
			return ('\0');
		}
		else
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
}
	return (arr);
}
