#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to 2D array
 * @width: width of the grid
 * @height: height of the grid
 * Return: Pointer to 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **Arry;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	Arry = malloc(sizeof(int) * height);

	if (Arry == NULL)
	{
		free(Arry);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		Arry[i] = malloc(sizeof(int) * width);
		if (Arry[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(Arry[j]);
			}
			free(Arry);
			return (NULL);
		}
		for (k = 0; k < height; k++)
		{
			for (l = 0; l < width; l++)
			{
				Arry[k][l];
			}
		}
		return (Arry);
	}
