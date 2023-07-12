#include "main.h"
#include <stdlib.h>
/**
 * free-grid - frees memory previously allocated
 * @grid: parameter to free of memory
 * @height: size of the parameter
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
