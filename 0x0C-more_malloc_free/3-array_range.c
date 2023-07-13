#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min:  minimum value
 * @max: maximum value
 * Return:
 */
int *array_range(int min, int max)
{
	int *Arry, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	Arry - malloc(sizeof(int) * (max - min) + sizeof(int));

	if (Arry == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		Arry[i] = min;
		min++;
	}
	return (Arry);
}
